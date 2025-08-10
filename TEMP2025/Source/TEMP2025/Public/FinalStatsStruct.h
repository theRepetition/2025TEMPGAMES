#pragma once

#include "CoreMinimal.h"
#include "FinalStatsStruct.generated.h"

USTRUCT(BlueprintType)
struct FFinalStatsStruct
{ 
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int HP;  // 체력

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int SP;  // 지구력

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int MP;  // 마력

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int ATK;  // 공격력

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AS;  // 행동속도

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int DEF;  // 방어력

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float CRrate;  // 치명타 확률or사거리

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float CRDMG;  // 치명타 피해





    // 기본 생성자
    FFinalStatsStruct()
        :HP(100.)
        ,SP(100.)
        ,ATK(100)
        ,AS(100.0f)
        ,DEF(100)
        ,CRrate(100.0f)
        ,CRDMG(100.0f)


    {
    }
};