#include "DBTool.h"
#include "SQLiteDatabaseConnection.h"
#include "Misc/Paths.h"
#include "Logging/LogMacros.h"

bool UDBTool::CreateDatabase()
{
    FString DatabasePath = FPaths::ProjectContentDir() + "Database/game_data.db";

    // ✅ 데이터베이스 파일 새로 생성
    FSQLiteDatabaseConnection DBConnection;
    bool bIsDatabaseOpen = DBConnection.Open(*DatabasePath, nullptr, nullptr);
    if (!bIsDatabaseOpen)
    {
        UE_LOG(LogTemp, Error, TEXT("[DB_ERROR] Failed to create new database at: %s"), *DatabasePath);
        return false;
    }

    UE_LOG(LogTemp, Log, TEXT("[DB_DEBUG] Successfully created new database at: %s"), *DatabasePath);

    // ✅ 테이블 생성 (필요한 데이터 구조 정의)
    FString CreateTableQuery = TEXT(R"(
        CREATE TABLE IF NOT EXISTS Items (
            ItemID INTEGER PRIMARY KEY AUTOINCREMENT,
            Name TEXT NOT NULL,
            Type TEXT NOT NULL,
            Value INTEGER NOT NULL,
            Weight REAL NOT NULL,
            ImagePath TEXT,
            ModelID TEXT
        );
    )");

    if (!DBConnection.Execute(*CreateTableQuery))
    {
        UE_LOG(LogTemp, Error, TEXT("[DB_ERROR] Failed to create Items table."));
        return false;
    }

    UE_LOG(LogTemp, Log, TEXT("[DB_DEBUG] Items table created successfully."));
    DBConnection.Close();
    return true;
}

bool UDBTool::InsertTestData()
{
    FString DatabasePath = FPaths::ProjectContentDir() + "Database/game_data.db";

    // ✅ 기존 DB 열기
    FSQLiteDatabaseConnection DBConnection;
    bool bIsDatabaseOpen = DBConnection.Open(*DatabasePath, nullptr, nullptr);
    if (!bIsDatabaseOpen)
    {
        UE_LOG(LogTemp, Error, TEXT("[DB_ERROR] Failed to open database for inserting data."));
        return false;
    }

    // ✅ 테스트 데이터 삽입
    FString InsertQuery = TEXT(R"(
        INSERT INTO Items (Name, Type, Value, Weight, ImagePath, ModelID) 
        VALUES 
        ('Excalibur', 'Weapon', 500, 3.2, 'path/to/excalibur.png', 'model_001'),
        ('Dragon Shield', 'Armor', 750, 8.5, 'path/to/shield.png', 'model_002');
    )");

    if (!DBConnection.Execute(*InsertQuery))
    {
        UE_LOG(LogTemp, Error, TEXT("[DB_ERROR] Failed to insert test data."));
        return false;
    }

    UE_LOG(LogTemp, Log, TEXT("[DB_DEBUG] Test data inserted successfully."));
    DBConnection.Close();
    return true;
}
