#include "Temp2025GameInstance.h"
#include "cppdataBaseManager.h" 
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
}