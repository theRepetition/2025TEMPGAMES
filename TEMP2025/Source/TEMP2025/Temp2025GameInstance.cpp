#include "Temp2025GameInstance.h"
#include "cppdataBaseManager.h"
#include "cppInventoryManager.h"

void UTemp2025GameInstance::Init()
{
    Super::Init();

    // cppdataBaseManager 인스턴스 생성
    DBManager = NewObject<UcppdataBaseManager>();
    if (DBManager)
    {
        DBManager->OpenDatabase();
        UE_LOG(LogTemp, Log, TEXT("Database Manager Initialized in GameInstance."));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to create Database Manager!"));
    }

    // 인벤토리 매니저 인스턴스 생성
    UcppInventoryManager* InventoryManager = NewObject<UcppInventoryManager>();
    if (InventoryManager && DBManager)
    {
        InventoryManager->LoadInventory(DBManager);
        UE_LOG(LogTemp, Log, TEXT("Inventory Loaded at Game Start"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to initialize InventoryManager or DBManager!"));
    }
}
