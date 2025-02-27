#pragma once

#include "CoreMinimal.h"
#include "ItemStruct.h"
#include "PlayerProfileStruct.generated.h"

USTRUCT(BlueprintType)
struct FPlayerProfile
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString PlayerName;  // 플레이어 이름

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Level;  // 플레이어 레벨

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Health;  // 체력

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Stamina;  // 스태미나

    // 장비 슬롯 (개별 변수 방식)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FItemData RightHand;  // 오른손 무기

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FItemData LeftHand;  // 왼손 무기

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FItemData Accessory;  // 장신구

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FItemData Helmet;  // 투구

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FItemData Armor;  // 갑옷

    // 기본 생성자
    FPlayerProfile()
        : PlayerName(TEXT("DefaultPlayer"))
        , Level(1)
        , Health(100.0f)
        , Stamina(100.0f)
        , RightHand()
        , LeftHand()
        , Accessory()
        , Helmet()
        , Armor()
    {
    }
};
