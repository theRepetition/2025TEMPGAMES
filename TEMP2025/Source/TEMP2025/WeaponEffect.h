#pragma once

#include "CoreMinimal.h"
#include "WeaponEffect.generated.h"

USTRUCT(BlueprintType)
struct FWeaponEffect
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "WeaponEffect")
    FString M_attribute; //속성 종류 -> 나중에 ENUM으로 구현하면 좋을듯
	// 이후에 더 추가할것
	
};
