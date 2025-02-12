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

    // 데이터베이스 연결 확인
    if (!DBConnection.Execute(TEXT("PRAGMA database_list;")))
    {
        UE_LOG(LogTemp, Error, TEXT("[DB_ERROR] Database connection is invalid."));
        return ItemList;
    }

    FSQLiteResultSet* ResultSet = nullptr;

    // SQL 쿼리 실행
    if (!DBConnection.Execute(TEXT("SELECT * FROM Items;"), ResultSet))
    {
        UE_LOG(LogTemp, Error, TEXT("[DB_ERROR] Failed to execute SELECT query."));
        return ItemList;
    }

    if (ResultSet == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("[DB_ERROR] ResultSet is NULL. No data retrieved."));
        return ItemList;
    }

    int32 RecordCount = ResultSet->GetRecordCount();
    UE_LOG(LogTemp, Log, TEXT("[DB_DEBUG] Total Records: %d"), RecordCount);

    if (RecordCount == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("[DB_WARNING] No records found in the Items table."));
        delete ResultSet;
        return ItemList;
    }

    for (int32 i = 0; i < RecordCount; i++)
    {
        FItemData NewItem;

        // ✅ 1. 'Name' 필드 값 가져오기
        NewItem.Name = ResultSet->GetString(TEXT("Name"));

        if (NewItem.Name.IsEmpty())
        {
            UE_LOG(LogTemp, Warning, TEXT("[DB_WARNING] Column 'Name' is empty for record %d"), i);
        }
        else
        {
            // ✅ 2. UTF-8 변환을 통한 인코딩 테스트
            FString NameUTF8 = UTF8_TO_TCHAR(ResultSet->GetString(TEXT("Name")).GetCharArray().GetData());
            UE_LOG(LogTemp, Log, TEXT("[DB_DEBUG] Raw Name: %s | UTF-8 Converted: %s"), *NewItem.Name, *NameUTF8);
        }

        // ✅ 3. 다른 필드 값 디버깅 로그 추가
        NewItem.Type = ResultSet->GetString(TEXT("Type"));
        NewItem.Value = ResultSet->GetInt(TEXT("Value"));
        NewItem.Weight = ResultSet->GetFloat(TEXT("Weight"));
        NewItem.ImagePath = ResultSet->GetString(TEXT("ImagePath"));
        NewItem.ModelID = ResultSet->GetString(TEXT("ModelID"));

        // ✅ 4. 전체 로드된 데이터 로그 출력
        UE_LOG(LogTemp, Log, TEXT("[DB_DEBUG] Item Loaded - Name: %s, Type: %s, Value: %d, Weight: %f, ImagePath: %s, ModelID: %s"),
               *NewItem.Name, *NewItem.Type, NewItem.Value, NewItem.Weight, *NewItem.ImagePath, *NewItem.ModelID);

        ItemList.Add(NewItem);
    }

    delete ResultSet;
    return ItemList;  // 아이템 리스트 반환
}

void UcppdataBaseManager::DebugCheckItemID()
{
    FSQLiteResultSet* ColumnResult = nullptr;
    if (DBConnection.Execute(TEXT("PRAGMA table_info(Items);"), ColumnResult))
    {
        int32 ColumnCount = ColumnResult->GetRecordCount();
        UE_LOG(LogTemp, Log, TEXT("[DB_DEBUG] Found %d columns in Items table."), ColumnCount);

        for (int32 i = 0; i < ColumnCount; i++)
        {
            FString ColumnName = ColumnResult->GetString(TEXT("name"));
            UE_LOG(LogTemp, Log, TEXT("[DB_DEBUG] Found Column: %s"), *ColumnName);
        }
    }

    FSQLiteResultSet* IDCheckResult = nullptr;
    if (DBConnection.Execute(TEXT("SELECT ItemID FROM Items LIMIT 5;"), IDCheckResult))
    {
        int32 RecordCount = IDCheckResult->GetRecordCount();
        UE_LOG(LogTemp, Log, TEXT("[DB_DEBUG] Checking ItemID values, Found %d records."), RecordCount);

        for (int32 i = 0; i < RecordCount; i++)
        {
            FString ItemIDValue = IDCheckResult->GetString(TEXT("ItemID"));
            UE_LOG(LogTemp, Log, TEXT("[DB_DEBUG] ItemID[%d]: %s"), i, *ItemIDValue);
        }
    }
}