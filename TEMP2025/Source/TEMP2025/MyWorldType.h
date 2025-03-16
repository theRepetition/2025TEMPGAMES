#pragma once
#include "CoreMinimal.h"
#include "MyWorldType.generated.h"


UENUM(BlueprintType)
enum class EMyWorldType : uint8
{
	Camp UMETA(DisplayName = "Camp"),
	Dungeon UMETA(DisplayName = "Dungeon"),



};
