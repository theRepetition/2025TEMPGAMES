#pragma once
#include "CoreMinimal.h"
#include "CostType.generated.h"

UENUM(BlueprintType)
enum class ECostType : uint8
{
	Stamina UMETA(DisplayName = "Stamina"),
	Mana UMETA(DisplayName = "Mana"),
	Ammo UMETA(DisplayName = "Ammo"),



};
