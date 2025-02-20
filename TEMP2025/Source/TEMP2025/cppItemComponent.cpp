// Fill out your copyright notice in the Description page of Project Settings.


#include "cppItemComponent.h"

// Sets default values for this component's properties
UcppItemComponent::UcppItemComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UcppItemComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}
void UcppItemComponent::PickUpItem(FItemData NewItem) // 아이템 줍기 컴포넌트
{
	
}


void UcppItemComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

