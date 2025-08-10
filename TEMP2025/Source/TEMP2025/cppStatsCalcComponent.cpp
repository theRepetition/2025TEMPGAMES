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
FinalStatsStruct UcppStatsCalcComponent::CalcFinalStats(const BasicStatsStruct &BaseStats)
{
	
}
