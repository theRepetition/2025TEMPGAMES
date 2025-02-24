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
FItemData UcppItemComponent::PickUpItem(AActor* ItemActor)
{
    if (!ItemActor) return FItemData(); // 유효한 액터인지 확인

    //  `FItemData`를 가져오기
    FItemData ItemData;
    if (ItemActor->GetClass()->ImplementsInterface(UItemInterface::StaticClass()))
    {
        ItemData = IItemInterface::Execute_GetItemData(ItemActor);
    }

    return ItemData; //  `FItemData` 반환
}



void UcppItemComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

