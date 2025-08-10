#pragma once

#include "CoreMinimal.h"
#include "SecondStatsStruct.generated.h"

USTRUCT(BlueprintType)
struct FSecondStatsStruct
{

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Speed;  // 이동속도

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float HPRegenration;  // 체력 재생
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float SPRegenration;  // 지구력 재생
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MPRegenration;  // 마력 재생

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PhysicalPierce;  // 물리 관통
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MagicalPierce;  // 마법 관통

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MagicR;  // 마법 저항
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float PhysicalR;  // 몰리 저항

    //일단 각 저항은 확정 X 나중에 결정하기
    //UPROPERTY(EditAnywhere, BlueprintReadWrite)
    //float CutR;  // 베기 저항
    //UPROPERTY(EditAnywhere, BlueprintReadWrite)
    //float BluntR;  // 둔기 저항
    //UPROPERTY(EditAnywhere, BlueprintReadWrite)
    //float ThrustR;  // 찌르기 저항
    //UPROPERTY(EditAnywhere, BlueprintReadWrite)
    //float FireR;  // 불 저항
    //UPROPERTY(EditAnywhere, BlueprintReadWrite)
    //float WaterR;  // 물 저항
    //UPROPERTY(EditAnywhere, BlueprintReadWrite)
    //float ElectricR;  // 전기 저항
    //UPROPERTY(EditAnywhere, BlueprintReadWrite)
    //float AirR;  // 공기 저항
    //UPROPERTY(EditAnywhere, BlueprintReadWrite)
    //float IceR;  // 얼음 저항
    //UPROPERTY(EditAnywhere, BlueprintReadWrite)
    //float EarthR;  // 흙 저항
    //UPROPERTY(EditAnywhere, BlueprintReadWrite)
    //float PoisonR;  // 독 저항



    // 기본 생성자
    FPlayerProfile()
        :Speed(500.0f)
        ,HPRegenration(1.0f)
        ,SPRegenration(1.0f)
        ,MPRegenration(1.0f)
        ,MagicalPierce(0.0f)
        ,PhysicalPierce(0.0f)
        ,MagicalR(0.0f)
        ,PhysicalR(20.0f)
        //,ThrustR(20.0f)
        //,FireR(0.0f)
        //,WaterR(0.0f)
        //,ElectricR(0.0f)
        //,AirR(0.0f)
        //,IceR(0.0f)
        //,EarthR(0.0f)
        //,PoisonR(0.0f)
    {
    }
};