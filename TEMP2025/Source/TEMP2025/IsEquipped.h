#pragma once
#include "CoreMinimal.h"
#include "IsEquipped.generated.h"

UENUM(BlueprintType)
enum class EIsEquipped : uint8
{
	None UMETA(DisplayName = "None"),
	Right UMETA(DisplayName = "RIGHT"),
	Left UMETA(DisplayName = "LEFT"),
	TwoHanded UMETA(DisplayName = "TWOHANDED"),
	Armor UMETA(DisplayName = "ARMOR"),
	Helm UMETA(DisplayName = "HELM"),
	ACC UMETA(DisplayName = "ACC"),

};
