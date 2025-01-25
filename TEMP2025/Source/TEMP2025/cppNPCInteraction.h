#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "cppNPCInteraction.generated.h"

// 
UENUM(BlueprintType)
enum class EPlayerRelation : uint8
{
    Neutral UMETA(DisplayName = "Neutral"),
    Friendly UMETA(DisplayName = "Friendly"),
    Hostile UMETA(DisplayName = "Hostile")
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TEMP2025_API UcppNPCInteraction : public UActorComponent
{
    GENERATED_BODY()

public:
    // Sets default values for this component's properties
    UcppNPCInteraction();

    // 
    UFUNCTION(BlueprintCallable, Category = "Interaction")
    void ProcessPlayerState(const FString& PlayerName, const FString& TestString, EPlayerRelation PlayerRelation);
     // 관계도를 기반으로 플레이어 상태를 처리

    UFUNCTION(BlueprintCallable, Category = "Interaction")
    EPlayerRelation GetRelationFromValue(int32 RelationshipValue) const;
    
    UFUNCTION(BlueprintCallable, Category = "Interaction")
    void ProcessPlayerStateWithValue(const FString& PlayerName, const FString& TestString, int32 RelationshipValue);
};
