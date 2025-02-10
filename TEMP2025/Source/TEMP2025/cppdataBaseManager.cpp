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
    UE_LOG(LogTemp, Log, TEXT("OpenDatabase() called %d times"), OpenDatabaseCallCount);

    bool bIsDatabaseOpen = DBConnection.Open(*DatabasePath, nullptr, nullptr);
    if (bIsDatabaseOpen)
    {
        UE_LOG(LogTemp, Log, TEXT("✅ Database opened successfully!"));
        return true;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("❌ Failed to open database at: %s"), *DatabasePath);
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
    TArray<FItemData> ItemList;

    if (!DBConnection.Execute(TEXT("PRAGMA database_list;")))
    {
        UE_LOG(LogTemp, Error, TEXT("❌ Database connection is invalid!"));
        return ItemList;
    }

    FSQLiteResultSet* ResultSet = nullptr;
    if (!DBConnection.Execute(TEXT("SELECT ROWID, IFNULL(NAME, 'Unknown') AS NAME, "
                                   "IFNULL(TYPE, 'None') AS TYPE, VALUE, WEIGHT, "
                                   "IFNULL(IMAGEPATH, 'no_image.png') AS IMAGEPATH, "
                                   "IFNULL(MODELID, 'default_model') AS MODELID "
                                   "FROM items ORDER BY ROWID ASC;"), ResultSet))
    {
        UE_LOG(LogTemp, Error, TEXT("❌ Failed to execute query."));
        return ItemList;
    }

    if (ResultSet == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("❌ ResultSet is NULL!"));
        return ItemList;
    }

    int32 RecordCount = ResultSet->GetRecordCount();
    UE_LOG(LogTemp, Log, TEXT("📦 Inventory loaded: %d items"), RecordCount);

    for (int32 i = 0; i < RecordCount; i++)
    {
        FItemData NewItem;

        FString RawName = ResultSet->GetString(TEXT("NAME"));
        FString RawType = ResultSet->GetString(TEXT("TYPE"));
        FString RawImagePath = ResultSet->GetString(TEXT("IMAGEPATH"));
        FString RawModelID = ResultSet->GetString(TEXT("MODELID"));

        UE_LOG(LogTemp, Log, TEXT("Record %d: NAME=[%s], TYPE=[%s], IMAGEPATH=[%s], MODELID=[%s]"), i+1, *RawName, *RawType, *RawImagePath, *RawModelID);

        NewItem.NAME = RawName.IsEmpty() ? TEXT("Unknown") : RawName;
        NewItem.TYPE = RawType.IsEmpty() ? TEXT("None") : RawType;
        NewItem.VALUE = ResultSet->GetInt(TEXT("VALUE"));
        NewItem.WEIGHT = ResultSet->GetFloat(TEXT("WEIGHT"));
        NewItem.IMAGEPATH = RawImagePath.IsEmpty() ? TEXT("no_image.png") : RawImagePath;
        NewItem.MODELID = RawModelID.IsEmpty() ? TEXT("default_model") : RawModelID;

        UE_LOG(LogTemp, Log, TEXT("Assigned NAME: [%s], TYPE: [%s], IMAGEPATH: [%s], MODELID: [%s]"), *NewItem.NAME, *NewItem.TYPE, *NewItem.IMAGEPATH, *NewItem.MODELID);

        ItemList.Add(NewItem);
    }

    delete ResultSet;
    ResultSet = nullptr;

    return ItemList;
}