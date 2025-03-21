#pragma once
#include "CoreMinimal.h"
#include "ECheckSelectItem.generated.h"

UENUM(BlueprintType)
enum class ECheckSelectItem : uint8
{
	None UMETA(DisplayName = "None"),
	Invenotry UMETA(DisplayName = "Inven"),
	Looting UMETA(DisplayName = "Loot"),
	



};
