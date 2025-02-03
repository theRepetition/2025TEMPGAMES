#include "Temp2025GameInstance.h"
#include "cppdataBaseManager.h"
#include "cppInventoryManager.h"

void UTemp2025GameInstance::Init()
{
    Super::Init();

    // 데이터베이스 매니저 생성
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

    // 인벤토리 매니저 생성 (this->InventoryManager 사용)
    this->InventoryManager = NewObject<UcppInventoryManager>();
    if (this->InventoryManager && DBManager)
    {
        this->InventoryManager->LoadInventory(DBManager);
        UE_LOG(LogTemp, Log, TEXT("Inventory Loaded at Game Start"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to initialize InventoryManager or DBManager!"));
    }
}
