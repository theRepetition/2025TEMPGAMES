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
};
