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

TArray<FItemData> UcppInventoryComponent::AddItem(const TArray<FItemData>& TargetInventory, const FItemData& NewItem)
{
    TArray<FItemData> UpdatedInventory = TargetInventory;  //  원본을 수정하지 않고 복사본 사용

    FItemData* ExistingItem = UpdatedInventory.FindByPredicate([&](const FItemData& Item)
    {
        return Item.Name == NewItem.Name;
    });

    if (ExistingItem)
    {
        ExistingItem->Quantity += NewItem.Quantity;
    }
    else
    {
        UpdatedInventory.Add(NewItem);
    }

    return UpdatedInventory;  //  변경된 배열 반환
}

TArray<FItemData> UcppInventoryComponent::RemoveItem(const TArray<FItemData>& TargetInventory, const FItemData& ItemToRemove, int32 count)
{
    TArray<FItemData> UpdatedInventory = TargetInventory;  // 원본을 수정하지 않고 복사본 사용

    int32 Index = UpdatedInventory.IndexOfByPredicate([&](const FItemData& Item)
    {
        return Item.Name == ItemToRemove.Name;
    });

    if (Index != INDEX_NONE)
    {
        if (UpdatedInventory[Index].Quantity > count)
        {
            UpdatedInventory[Index].Quantity -= count;
        }
        else
        {
            UpdatedInventory.RemoveAt(Index);
        }
    }

    return UpdatedInventory;  //  변경된 배열 반환
}

