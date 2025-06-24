#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "EAttackDirection.h" // Enum 포함
#include "UHitboxComponent.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TEMP2025_API UHitboxComponent : public UBoxComponent

{
    GENERATED_BODY()

public:
    UHitboxComponent();
    // 어떤 부위인지 구분하기 위한 Enum
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hitbox")
	EAttackDirection HitZoneType;
    
};