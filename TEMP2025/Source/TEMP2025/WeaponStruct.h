// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "WeaponType.h"
#include "CostType.h"
#include "CoreMinimal.h"
#include "WeaponEffect.h"
#include "WeaponStruct.generated.h"

USTRUCT(BlueprintType)
struct FWeaponData
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
	FString NAME; //이름

	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
    EWeaponType TYPE; //무기 종류

	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
    int32 DMG; //무기 데미지

	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
    float ATKSPEED; //공격속도

	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
    ECostType COST; //소모 자원 종류 ex)지구력, 마나, 화살 등

	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
    float RANGE; // 사거리

	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
    float WEIGHT; //무게 ->지구력 소모 무기는 자원 소모량과 연관 있을수 있음

	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
    TArray<FWeaponEffect> EFFECT; //특수 효과

	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
    UStaticMesh* MODEL_1st; //1인칭 모델

	UPROPERTY(BlueprintReadOnly, Category = "Weapon")
    UStaticMesh* MODEL_3rd; //3인칭 필드 모델
	
};
