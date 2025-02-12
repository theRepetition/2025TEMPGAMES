#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h" 
#include "SQLiteSupport.h"
#include "SQLiteDatabaseConnection.h"
#include "SQLiteResultSet.h"
#include "ItemStruct.h"

#include "cppdataBaseManager.generated.h"

UCLASS(Blueprintable)
class TEMP2025_API UcppdataBaseManager : public UObject
{
    GENERATED_BODY()

private:
    FSQLiteDatabaseConnection DBConnection;
    virtual void BeginDestroy() override;

public:
    // ✅ 데이터베이스 열기
    UFUNCTION(BlueprintCallable, Category = "Database")
    bool OpenDatabase();

    // ✅ 데이터베이스 닫기
    UFUNCTION(BlueprintCallable, Category = "Database")
    void CloseDatabase();

    // ✅ 아이템 전체 가져오기 (ItemID 포함)
    UFUNCTION(BlueprintCallable, Category = "Database")
    TArray<FItemData> GetAllItems();

    // ✅ 추가: ItemID 컬럼 문제 디버깅 함수
    UFUNCTION(BlueprintCallable, Category = "Database")
    void DebugCheckItemID();
};
