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
    TArray<FItemData> UpdatedInventory = TargetInventory;  // 원본을 수정하지 않고 복사본 사용

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
        FItemData NewItemCopy = NewItem;
        NewItemCopy.UniqueIndex = UpdatedInventory.Num() + 1; // 현재 배열 크기를 기반으로 UniqueIndex 할당
        UpdatedInventory.Add(NewItemCopy);
    }

    return UpdatedInventory;  // 변경된 배열 반환
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
            UpdatedInventory[Index].UniqueIndex = 0; // 제거될 때 UniqueIndex 초기화
            UpdatedInventory.RemoveAt(Index);
        }
    }

    return UpdatedInventory;  // 변경된 배열 반환
}


TArray<FItemData> UcppInventoryComponent::SortInventory(TArray<FItemData> TargetInventory)
{
    TargetInventory.Sort([](const FItemData& A, const FItemData& B) {
        if (A.Name != B.Name) {
            return A.Name < B.Name;  // 이름 기준 정렬
        }
        return A.Type < B.Type;  // 이름이 같다면 타입 기준 정렬
    });

    return TargetInventory;  // 정렬된 배열 반환
}

