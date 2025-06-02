#pragma once
#include "CoreMinimal.h"
#include "EDefType.generated.h"

UENUM(BlueprintType)
enum class EDefType : uint8
{
	normal UMETA(DisplayName = "기본"),
	Block UMETA(DisplayName = "막기"),
	TimedBlock UMETA(DisplayName = "정밀 막기"),
	Parry UMETA(DisplayName = "반격"),
    Dodge UMETA(DisplayName = "회피"),
    Blink UMETA(DisplayName = "점멸"),



};
