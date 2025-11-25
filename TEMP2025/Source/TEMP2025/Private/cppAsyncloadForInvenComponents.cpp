#include "cppAsyncloadForInvenComponents.h"
#include "Engine/AssetManager.h"

UcppAsyncloadForInvenComponents::UcppAsyncloadForInvenComponents()
{
	// Tick 활성화 설정
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false; // 기본적으로 Tick을 비활성화
	
	// 핵심 설정: Pause 상태에서도 Tick을 실행
	PrimaryComponentTick.bTickEvenWhenPaused = true; 
}

void UcppAsyncloadForInvenComponents::BeginPlay()
{
	Super::BeginPlay();
	
	// AssetManager가 초기화되었는지 확인 후 StreamableManager 가져오기
	if (UAssetManager::IsInitialized())
	{
		StreamableManager = &UAssetManager::Get().GetStreamableManager();
	}
}

void UcppAsyncloadForInvenComponents::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction); // Super::TickComponent는 이제 컴파일됩니다.

	// StreamableManager와 핸들이 유효한지 확인
    if (StreamableManager && LoadHandle.IsValid())
	{
		UObject* LoadedAsset = LoadHandle->GetLoadedAsset();
        
        // LoadedAsset이 nullptr이 아니면 로드 완료로 간주 (Tick 폴링의 목적 달성)
        if (LoadedAsset) 
        {
            UStaticMesh* LoadedMesh = Cast<UStaticMesh>(LoadedAsset);

            // 로드 완료 이벤트 발생
            OnStaticMeshLoaded.Broadcast(LoadedMesh);
            
            // 작업 완료 후 Tick 정리
            LoadHandle.Reset(); 
            SetComponentTickEnabled(false); 
        }
	}
}

void UcppAsyncloadForInvenComponents::StartLoadStaticMesh(TSoftObjectPtr<UStaticMesh> MeshToLoad)
{
	// 로드할 애셋이 유효한지 확인
	if (!StreamableManager || MeshToLoad.IsNull())
	{
		return;
	}

	// 기존 로드가 있다면 취소
	// CancelLoad() 함수는 TSharedPtr<FStreamableHandle>에서 정상적으로 호출
	if (LoadHandle.IsValid())
	{
		LoadHandle.Reset();
	}
	
	// 애셋 경로를 FSoftObjectPath로 변환
	FSoftObjectPath AssetPath = MeshToLoad.ToSoftObjectPath();

	// 비동기 로드 요청 및 핸들 저장
	LoadHandle = StreamableManager->RequestAsyncLoad(
		AssetPath, 
		FStreamableDelegate(), // 콜백 델리게이트는 Tick 폴링으로 대체하므로 비워둠
		FStreamableManager::AsyncLoadHighPriority, // 높은 우선순위로 로드
		false // 강제 로드 안 함
	);

	// 로드 요청 후 Tick 활성화
	SetComponentTickEnabled(true); 
}