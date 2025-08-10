// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemStruct.h"
#include "SecondStatsStruct.h"
#include "BasicStatsStruct.h"
#include "FinalStatsStruct.h"
#include "WeaponStruct.h"
#include "WeaponEffect.h"
#include "PlayerProfileStruct.h"
#include "cppStatsCalcComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEMP2025_API UcppStatsCalcComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UcppStatsCalcComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Char")
	FFinalStatsStruct CalcFinalStats(const FBasicStatsStruct &BaseStats, const FWeaponData &weaponS);
	
		
};
