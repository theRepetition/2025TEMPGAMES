#include "cppInventoryManager.h"
#include "Logging/LogMacros.h"

UcppInventoryManager::UcppInventoryManager()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UcppInventoryManager::LoadInventory(UcppdataBaseManager* DBManager)
{
    if (DBManager)
    {
        InventoryItems = DBManager->GetAllItems();
        UE_LOG(LogTemp, Log, TEXT("Inventory loaded: %d items"), InventoryItems.Num());
    }
}

void UcppInventoryManager::AddItem(FItemData NewItem)
{
    InventoryItems.Add(NewItem);
    UE_LOG(LogTemp, Log, TEXT("Item added: %s"), *NewItem.Name);
}

void UcppInventoryManager::RemoveItem(FString ItemName)
{
    for (int32 i = 0; i < InventoryItems.Num(); i++)
    {
        if (InventoryItems[i].Name == ItemName)
        {
            InventoryItems.RemoveAt(i);
            UE_LOG(LogTemp, Log, TEXT("Item removed: %s"), *ItemName);
            return;
        }
    }
}

TArray<FItemData> UcppInventoryManager::GetInventoryItems()
{
    return InventoryItems;
}
