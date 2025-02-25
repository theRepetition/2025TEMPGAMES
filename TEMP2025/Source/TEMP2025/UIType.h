#pragma once
#include "CoreMinimal.h"
#include "UIType.generated.h"

UENUM(BlueprintType)
enum class EUIType : uint8
{	
	None UMETA(DisplayName = "None"),
	Map UMETA(DisplayName = "Map"),
	Inventory UMETA(DisplayName = "Inventory"),
	Menu UMETA(DisplayName = "Menu"),
	Profile UMETA(DisplayName = "Profile"),
	Quest UMETA(DisplayName = "Quest"),

};
