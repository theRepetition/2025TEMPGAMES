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

    //  기존 아이템이 있는지 확인
    FItemData* ExistingItem = UpdatedInventory.FindByPredicate([&](const FItemData& Item)
    {
        return Item.Name == NewItem.Name;
    });

    if (ExistingItem)
    {
        //  이미 존재하는 아이템이면 개수만 증가
        ExistingItem->Quantity += NewItem.Quantity;
    }
    else
    {
        //  사용된 UniqueIndex를 저장하는 TSet 생성
        TSet<int32> UsedIndices;
        for (const FItemData& Item : UpdatedInventory)
        {
            UsedIndices.Add(Item.UniqueIndex);
        }

        //  가장 작은 사용되지 않은 UniqueIndex 찾기
        int32 NewUniqueIndex = 1;
        while (UsedIndices.Contains(NewUniqueIndex))
        {
            NewUniqueIndex++;
        }

        //  새로운 아이템 추가
        FItemData NewItemCopy = NewItem;
        NewItemCopy.UniqueIndex = NewUniqueIndex;  // 중복되지 않는 UniqueIndex 할당
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
            UpdatedInventory[Index].IsEquipped = EIsEquipped::None; // 장착중인것도 none으로 돌리기
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

