#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/StreamableManager.h"
#include "Engine/StaticMesh.h"
#include "cppAsyncloadForInvenComponents.generated.h"

// 델리게이트 선언: 로드된 메시를 블루프린트로 전달하기 위한 이벤트
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAssetLoadedDelegate, UStaticMesh*, LoadedMesh);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TEMP2025_API UcppAsyncloadForInvenComponents : public UActorComponent
{
	GENERATED_BODY()
public:	
	UcppAsyncloadForInvenComponents();

protected:
	virtual void BeginPlay() override;

public:	
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	//블루프린트에서 호출하여 비동기 로드를 시작
	UFUNCTION(BlueprintCallable, Category = "Equip Loading")
	void StartLoadStaticMesh(TSoftObjectPtr<UStaticMesh> MeshToLoad);

 	// 로드 완료 시 블루프린트로 전송되는 이벤트
	UPROPERTY(BlueprintAssignable, Category = "Equip Loading")
	FOnAssetLoadedDelegate OnStaticMeshLoaded;

private:
    // 현재 진행 중인 비동기 로드를 관리하는 핸들
    TSharedPtr<FStreamableHandle> LoadHandle;

    // StreamableManager를 가져오기 위한 포인터
    struct FStreamableManager* StreamableManager;
};
