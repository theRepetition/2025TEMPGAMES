// Fill out your copyright notice in the Description page of Project Settings.


#include "cppStatsCalcComponent.h"

// Sets default values for this component's properties
UcppStatsCalcComponent::UcppStatsCalcComponent()
{

	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UcppStatsCalcComponent::BeginPlay()
{
	Super::BeginPlay();


	
}


// Called every frame
void UcppStatsCalcComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
FFinalStatsStruct UcppStatsCalcComponent::CalcFinalStats(const FBasicStatsStruct &BaseStats, const FWeaponData &WeaponStats)
{	
	FFinalStatsStruct FinalStats;
	FinalStats.HP = BaseStats.Health*10+70;
	FinalStats.MP = BaseStats.Magic*20; //마법 관련은 계산만 해두고 일단은 사용 X
	FinalStats.SP = BaseStats.Stamina*10+70;
	FinalStats.ATK = 4 +(BaseStats.Strength * WeaponStats.DMG *2)/10;
	FinalStats.DEF = BaseStats.Endurance/10; //나중에 방어구 방어력 추가할것
	FinalStats.AS = FMath::FloorToFloat((0.55f + (0.15f * BaseStats.Agility)) * 100.0f) / 100.0f;
	FinalStats.CRrate = BaseStats.Concentration*7.5f+2.5f; //일단은 근접무기만 계산
	FinalStats.CRDMG = BaseStats.Dexterity*15.0f+100.0f;
	return FinalStats;
}
