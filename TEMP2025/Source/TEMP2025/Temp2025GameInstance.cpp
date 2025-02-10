#include "Temp2025GameInstance.h"
#include "cppdataBaseManager.h"
#include "cppInventoryManager.h"

void UTemp2025GameInstance::Init()
{
    Super::Init();

    // 1️ 데이터베이스 매니저 생성 및 확인
    DBManager = NewObject<UcppdataBaseManager>(this);
    ensureAlwaysMsgf(DBManager, TEXT(" Error: DBManager failed to create!"));

    if (DBManager && DBManager->OpenDatabase())
    {
        UE_LOG(LogTemp, Log, TEXT(" Database Manager Initialized and Database Opened Successfully."));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT(" Database Manager Initialization Failed!"));
    }

    // 2️ 인벤토리 매니저 생성 및 확인
    this->InventoryManager = NewObject<UcppInventoryManager>(this);
    ensureAlwaysMsgf(this->InventoryManager, TEXT(" Error: InventoryManager failed to create!"));

    if (this->InventoryManager && DBManager)
    {
        this->InventoryManager->LoadInventory(DBManager);
        UE_LOG(LogTemp, Log, TEXT(" Inventory Loaded Successfully at Game Start."));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT(" Failed to Initialize InventoryManager or Load Inventory from Database."));
    }
}
