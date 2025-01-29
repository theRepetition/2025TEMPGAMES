#include "cppdataBaseManager.h"
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

void UcppdataBaseManager::QueryItems()
{
    if (!DBConnection.Execute(TEXT("PRAGMA database_list;")))
    {
        UE_LOG(LogTemp, Error, TEXT("Database connection is invalid!"));
        return;
    }   

    // SQL 쿼리 실행
    FSQLiteResultSet* ResultSet = nullptr;
    if (DBConnection.Execute(TEXT("SELECT * FROM Items;"), ResultSet))
    {
        if (ResultSet != nullptr)
        {
            int32 RecordCount = ResultSet->GetRecordCount();  // 총 레코드 개수 가져오기

            for (int32 i = 0; i < RecordCount; i++)  // 레코드 수만큼 반복
            {
                FString Name = ResultSet->GetString(TEXT("Name"));
                FString Type = ResultSet->GetString(TEXT("Type"));
                int32 Value = ResultSet->GetInt(TEXT("Value"));
                float Weight = ResultSet->GetFloat(TEXT("Weight"));

                UE_LOG(LogTemp, Log, TEXT("Item: %s, Type: %s, Value: %d, Weight: %f"), *Name, *Type, Value, Weight);
            }
        }

        // ResultSet 해제
        delete ResultSet;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to execute query."));
    }
}
