#pragma once
#include "CoreMinimal.h"
#include "HandedType.generated.h"

UENUM(BlueprintType)
enum class EHandedType : uint8
{
	OneHanded UMETA(DisplayName = "One-HandedWeapon"),
	TwoHanded UMETA(DisplayName = "Two-HandedWeapon"),
	Range UMETA(DisplayName = "RangeWeapon"),
	



};
