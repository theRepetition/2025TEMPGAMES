
#pragma once

#include "CoreMinimal.h"
#include "ItemType.h"
#include "PlayerProfileStruct.generated.h"

USTRUCT(BlueprintType)
struct FPlayerProfile
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString PlayerName;  // 플레이어 이름

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Health;  // 체력

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Stamina;  // 스태미나

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Strength;  // 힘

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Agility;  // 민첩

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Intelligence;  // 지능

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TMap<EEquipmentSlot, FItemData*> EquippedItems;  // 착용 중인 아이템 리스트
    
};
FPlayerProfile()
    : PlayerName(TEXT("DefaultPlayer"))
    , Level(1)
    , Health(100.0f)
    , Stamina(100.0f)
    , Strength(10)
    , Agility(10)
    , Intelligence(10)
{
}
