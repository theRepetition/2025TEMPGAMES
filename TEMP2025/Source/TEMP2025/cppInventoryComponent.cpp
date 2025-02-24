#include "ItemStruct.h"
#include "cppInventoryComponent.h"

// Sets default values for this component's properties
UcppInventoryComponent::UcppInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UcppInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UcppInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UcppInventoryComponent::AddItem(TArray<FItemData>& PlayerInventory, FItemData NewItem)
{
    FItemData* ExistingItem = PlayerInventory.FindByPredicate([&](const FItemData& Item)
    {
        return Item.Name == NewItem.Name;  //같은 아이템이 있는지 확인
    });

    if (ExistingItem)
    {
        ExistingItem->Quantity += NewItem.Quantity;  // 기존 아이템이면 개수 증가
    }
    else
    {
        PlayerInventory.Add(NewItem);  // 새로운 아이템이면 추가
    }
}


void UcppInventoryComponent::RemoveItem(TArray<FItemData>& PlayerInventory, FItemData ItemToRemove, int32 count)
{
	int32 Index = PlayerInventory.IndexOfByPredicate([&](const FItemData& Item)
    {
        return Item.Name == ItemToRemove.Name;
    });

    if (Index != INDEX_NONE) // 아이템이 존재할때
    {
        if (PlayerInventory[Index].Quantity > count)
        {
            PlayerInventory[Index].Quantity -= count;  //개수 줄이기
        }
        else
        {
            PlayerInventory.RemoveAt(Index);  // 개수가 0이면 삭제
        }
    }
}
