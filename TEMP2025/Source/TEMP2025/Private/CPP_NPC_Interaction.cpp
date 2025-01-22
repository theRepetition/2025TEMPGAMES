// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_NPC_Interaction.h"

// Sets default values for this component's properties
UCPP_NPC_Interaction::UCPP_NPC_Interaction()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UCPP_NPC_Interaction::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


void UCPP_NPC_Interaction::ShowDialogue()
{
    // NPC 소유자 정보 가져오기
    AActor* Owner = GetOwner();
    if (!Owner)
    {
        UE_LOG(LogTemp, Warning, TEXT("Owner가 유효하지 않습니다."));
        return;
    }

    // NPC 대화 데이터 가져오기
    FString DialogueLine = GetDialogueLine();
    if (DialogueLine.IsEmpty())
    {
        UE_LOG(LogTemp, Warning, TEXT("대화 지문을 찾을 수 없습니다."));
    }
    else
    {
        // 대화 지문 출력 (임시로 Print String 사용)
        if (GEngine)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, DialogueLine);
        }
    }
}
FString UCPP_NPC_Interaction::GetDialogueLine() const
{
    // NPC 소유자 참조
    AActor* Owner = GetOwner();
    if (!Owner)
    {
        return TEXT("");
    }

    // NPC 블루프린트 변수 "DialogueLines" 접근
    FString DialogueLine = TEXT("");
    FProperty* Property = Owner->GetClass()->FindPropertyByName(TEXT("DialogueLines"));

    if (FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Property))
    {
        // 대화 배열에서 랜덤으로 선택
        const TArray<FString>* DialogueArray = ArrayProperty->ContainerPtrToValuePtr<TArray<FString>>(Owner);
        if (DialogueArray && DialogueArray->Num() > 0)
        {
            int32 RandomIndex = FMath::RandRange(0, DialogueArray->Num() - 1);
            DialogueLine = (*DialogueArray)[RandomIndex];
        }
    }

    return DialogueLine;
}


