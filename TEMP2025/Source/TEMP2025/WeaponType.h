#pragma once
#include "CoreMinimal.h"
#include "WeaponType.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	OneHandedSword UMETA(DisplayName = "One-Handed Sword"),
	TwoHandedSword UMETA(DisplayName = "Two-Handed Sword"),
	OneHandedAxe UMETA(DisplayName = "One-Handed Axe"),
	TwoHandedAxe UMETA(DisplayName = "Two-Handed Axe"),
	OneHandedMace UMETA(DisplayName = "One-Handed Mace"),
	TwoHandedMace UMETA(DisplayName = "Two-Handed Mace"),
	OneHandedPolearm UMETA(DisplayName = "One-Handed Polearm"),
	TwoHandedPolearm UMETA(DisplayName = "Two-Handed Polearm"),
	LongBow UMETA(DisplayName = "LongBow"),
	ShortBow UMETA(DisplayName = "ShortBow"),
	CrossBow UMETA(DisplayName = "CrossBow"),
	HandCannon UMETA(DisplayName = "HandCannon"),
	Staff UMETA(DisplayName = "Staff"),
	Wand UMETA(DisplayName = "Wand"),


};
