#pragma once

#include "CoreMinimal.h"
#include "FinalStatsStruct.generated.h"

USTRUCT(BlueprintType)
struct FFinalStatsStruct
{

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float HP;  // 체력

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SP;  // 지구력

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MP;  // 마력

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ATK;  // 공격력

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AS;  // 행동속도

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float DEF;  // 방어력

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float CRrate;  // 치명타 확률or사거리

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float CRDMG;  // 치명타 피해





    // 기본 생성자
    FPlayerProfile()
        :HP(100.0f)
        ,SP(100.0f)
        ,ATK(100.0f)
        ,AS(100.0f)
        ,DEF(100.0f)
        ,CRrate(100.0f)
        ,CRDMG(100.0f)


    {
    }
};