#pragma once

#include "CoreMinimal.h"
#include "ItemStruct.h"
#include "MyWorldType.h"
#include "EDefType.h"
#include "FinalStatsStruct.h"
#include "BasicStatsStruct.h"
#include "SecondStatsStruct.h"
#include "PlayerProfileStruct.generated.h"

USTRUCT(BlueprintType)
struct FPlayerProfile
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString PlayerName;  // 플레이어 이름

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Level;  // 플레이어 레벨

    // 장비 슬롯 (개별 변수 방식)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FItemData RightHand;  // 오른손 무기

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FItemData LeftHand;  // 왼손 무기

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FItemData AccessoryL;  // 왼손 장신구

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FItemData AccessoryR;  // 왼손 장신구

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FItemData Helmet;  // 투구

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FItemData Armor;  // 갑옷

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EDefType DefType;  // 방어 타입

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FFinalStatsStruct PlayerFinalStat;  // 최종 스탯

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FBasicStatsStruct PlayerBasicStat;  // 최종 스탯

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EMyWorldType World; //현재 월드 타입

    // 기본 생성자
    
    FPlayerProfile()
        : PlayerName(TEXT("DefaultPlayer"))
        , Level(1)
        , RightHand()
        , LeftHand()
        , AccessoryR()
        , AccessoryL()
        , Helmet()
        , Armor()
    {
    }
};
