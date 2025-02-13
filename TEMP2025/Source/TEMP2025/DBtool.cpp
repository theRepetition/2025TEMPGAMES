#include "DBTool.h"
#include "Misc/Paths.h"
#include "Logging/LogMacros.h"
#include "Engine/Engine.h"
#include "HAL/IConsoleManager.h"

bool UDBTool::CreateDatabase()
{
    FString DatabasePath = FPaths::ProjectContentDir() + "Database/game_data.db";

    if (FPaths::FileExists(DatabasePath))
    {
        UE_LOG(LogTemp, Warning, TEXT("[DB_WARNING] Database already exists, skipping creation."));
        return false;
    }

    FSQLiteDatabaseConnection DBConnection;
    bool bIsDatabaseOpen = DBConnection.Open(*DatabasePath, nullptr, nullptr);
    if (!bIsDatabaseOpen)
    {
        UE_LOG(LogTemp, Error, TEXT("[DB_ERROR] Failed to create new database at: %s"), *DatabasePath);
        return false;
    }

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

    UE_LOG(LogTemp, Log, TEXT("[DB_DEBUG] Database and table initialized successfully."));
    DBConnection.Close();
    return true;
}

bool UDBTool::InsertTestData()
{
    FString DatabasePath = FPaths::ProjectContentDir() + "Database/game_data.db";

    FSQLiteDatabaseConnection DBConnection;
    bool bIsDatabaseOpen = DBConnection.Open(*DatabasePath, nullptr, nullptr);
    if (!bIsDatabaseOpen)
    {
        UE_LOG(LogTemp, Error, TEXT("[DB_ERROR] Failed to open database for inserting data."));
        return false;
    }

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

// ✅ 콘솔 명령어 실행을 위한 래퍼 함수 (반환 타입 `void`)
void UDBTool::CreateDatabase_Console()
{
    UDBTool* DBToolInstance = NewObject<UDBTool>();
    if (DBToolInstance->CreateDatabase())
    {
        UE_LOG(LogTemp, Log, TEXT("[DB_CONSOLE] Database successfully created."));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("[DB_CONSOLE] Database creation failed or already exists."));
    }
}

void UDBTool::InsertTestData_Console()
{
    UDBTool* DBToolInstance = NewObject<UDBTool>();
    if (DBToolInstance->InsertTestData())
    {
        UE_LOG(LogTemp, Log, TEXT("[DB_CONSOLE] Test data successfully inserted."));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("[DB_CONSOLE] Test data insertion failed."));
    }
}

// ✅ Unreal 콘솔 명령어 등록 (반환 타입 `void`로 설정)
void UDBTool::RegisterConsoleCommands()
{
    IConsoleManager::Get().RegisterConsoleCommand(
        TEXT("db_create"),
        TEXT("Creates the game database"),
        FConsoleCommandDelegate::CreateStatic(&UDBTool::CreateDatabase_Console),
        ECVF_Default
    );

    IConsoleManager::Get().RegisterConsoleCommand(
        TEXT("db_insert"),
        TEXT("Inserts test data into the database"),
        FConsoleCommandDelegate::CreateStatic(&UDBTool::InsertTestData_Console),
        ECVF_Default
    );

    UE_LOG(LogTemp, Log, TEXT("[DB_CONSOLE] Console commands registered: db_create, db_insert"));
}
