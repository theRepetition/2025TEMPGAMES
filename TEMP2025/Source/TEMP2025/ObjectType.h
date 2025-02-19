#pragma once
#include "CoreMinimal.h"
#include "ObjectType.generated.h"

UENUM(BlueprintType)
enum class EObjectType : uint8
{
	Item UMETA(DisplayName = "Item"),
	NPC UMETA(DisplayName = "NPC"),
	Misc UMETA(DisplayName = "Misc"),
	Door UMETA(DisplayName = "Door"), //문, 지역 이동
	IntracntionOBJ UMETA(DisplayName = "InteractionOBJ"), //기타 상호작용 가능한 오브젝트 ex)의자, 침데 등
	MovableOBJ UMETA(DisplayName = "MovableOBJ"), //이동만 가능한 오브젝트

};
