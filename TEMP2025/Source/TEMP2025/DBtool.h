#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SQLiteDatabaseConnection.h"
#include "DBTool.generated.h"

UCLASS(Blueprintable)
class TEMP2025_API UDBTool : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Database Setup")
    bool CreateDatabase();  // ✅ 블루프린트에서 실행될 함수

    UFUNCTION(BlueprintCallable, Category = "Database Setup")
    bool InsertTestData();  // ✅ 블루프린트에서 실행될 함수

    // ✅ 콘솔 명령어를 위한 함수 (반환 타입 `void`로 변경)
    static void CreateDatabase_Console();
    static void InsertTestData_Console();

    static void RegisterConsoleCommands();
};
