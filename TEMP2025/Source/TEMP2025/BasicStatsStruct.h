#pragma once

#include "CoreMinimal.h"
#include "BasicStatsStruct.generated.h"

USTRUCT(BlueprintType)
struct FBasicStatsStruct
{

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Strength;  // 힘

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Agility;  // 민첩

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Dexterity;  // 기교

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Concentrataion;  // 집중

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Spell;  // 주문력

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Enduracne;  // 인내력


    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Stamina;  // 지구력

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Health;  // 체력

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Magic;  // 마력
    


    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int Intelligence;  // 지능



    // 기본 생성자
    FPlayerProfile()
        :Strength(3)
        ,Agility(3)
        ,Dexterity(3)
        ,Concentrataion(3)
        ,Spell(3)
        ,Enduracne(3)
        ,Stamina(3)
        ,Health(3)
        ,Magic(3)
        ,Intelligence(3)

    {
    }
};