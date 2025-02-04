#include "cppdataBaseManager.h"
#include "ItemStruct.h"
#include "Misc/Paths.h"
#include "Logging/LogMacros.h"

static int32 OpenDatabaseCallCount = 0; // 호출 횟수 저장

bool UcppdataBaseManager::OpenDatabase()
{
    OpenDatabaseCallCount++;
    FString DatabasePath = FPaths::ProjectContentDir() + "Database/temp2025items.db";

    UE_LOG(LogTemp, Log, TEXT("Trying to open database at: %s"), *DatabasePath);
    UE_LOG(LogTemp, Log, TEXT("OpenDatabase() called from: %s"), *FString(__FUNCTION__));
    UE_LOG(LogTemp, Log, TEXT("OpenDatabase() called %d times"), OpenDatabaseCallCount);

    bool bIsDatabaseOpen = DBConnection.Open(*DatabasePath, nullptr, nullptr);
    if (bIsDatabaseOpen)
    {
        UE_LOG(LogTemp, Log, TEXT("Database opened successfully!"));
        return true;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to open database at: %s"), *DatabasePath);
        return false;
    }
}

void UcppdataBaseManager::CloseDatabase()
{
     if (DBConnection.Execute(TEXT("PRAGMA database_list;")))
    {
        UE_LOG(LogTemp, Log, TEXT("Closing SQLite database."));
        DBConnection.Close();  //  데이터베이스 닫기
    }
}
void UcppdataBaseManager::BeginDestroy()
{
    CloseDatabase();  //  객체가 파괴될 때 데이터베이스 닫기
    Super::BeginDestroy();
}


TArray<FItemData> UcppdataBaseManager::GetAllItems()
{
    TArray<FItemData> ItemList;  // 아이템 데이터를 저장할 배열

    if (!DBConnection.Execute(TEXT("PRAGMA database_list;")))
    {
        UE_LOG(LogTemp, Error, TEXT("Database connection is invalid!!!!!!!!!!!!!!!!!!!!!"));
        return ItemList;
    }

    FSQLiteResultSet* ResultSet = nullptr;
    if (DBConnection.Execute(TEXT("SELECT * FROM Items;"), ResultSet))
    {
        if (ResultSet != nullptr)
        {
            int32 RecordCount = ResultSet->GetRecordCount();  // 총 레코드 개수 가져오기

            for (int32 i = 0; i < RecordCount; i++)  // 레코드 수만큼 반복
            {
                FItemData NewItem;
                NewItem.Name = ResultSet->GetString(TEXT("Name"));
                NewItem.Type = ResultSet->GetString(TEXT("Type"));
                NewItem.Value = ResultSet->GetInt(TEXT("Value"));
                NewItem.Weight = ResultSet->GetFloat(TEXT("Weight"));

                ItemList.Add(NewItem);  // 배열에 추가
                UE_LOG(LogTemp, Log, TEXT("Item Loaded - Name: %s, Type: %s, Value: %d, Weight: %f"),
                       *NewItem.Name, *NewItem.Type, NewItem.Value, NewItem.Weight);
            }
        }

        delete ResultSet;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to execute query."));
    }

    return ItemList;  // 아이템 리스트 반환
}

