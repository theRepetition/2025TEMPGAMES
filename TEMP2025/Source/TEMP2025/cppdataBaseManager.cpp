#include "cppdataBaseManager.h"
#include "ItemStruct.h"
#include "Misc/Paths.h"
#include "Logging/LogMacros.h"

bool UcppdataBaseManager::OpenDatabase()
{
    FString DatabasePath = FPaths::ProjectContentDir() + "Database/temp2025items.db";

    // 데이터베이스 연결 시도
    if (DBConnection.Open(*DatabasePath, nullptr, nullptr))
    {
        UE_LOG(LogTemp, Log, TEXT("Database opened successfully!"));
        return true;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to open database."));
        return false;
    }
}

TArray<FItemData> UcppdataBaseManager::GetAllItems()
{
    TArray<FItemData> ItemList;  // 아이템 데이터를 저장할 배열

    if (!DBConnection.Execute(TEXT("PRAGMA database_list;")))
    {
        UE_LOG(LogTemp, Error, TEXT("Database connection is invalid!"));
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

