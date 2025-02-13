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
    // ✅ 데이터베이스 생성 및 테이블 스키마 설정
    UFUNCTION(BlueprintCallable, Category = "Database Setup")
    bool CreateDatabase();

    // ✅ 초기 데이터 (테스트 데이터) 삽입
    UFUNCTION(BlueprintCallable, Category = "Database Setup")
    bool InsertTestData();
};
