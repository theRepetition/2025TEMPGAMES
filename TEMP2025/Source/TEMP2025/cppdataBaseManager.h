#pragma once

#include "CoreMinimal.h"
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

public:
    UFUNCTION(BlueprintCallable, Category = "Database")
    bool OpenDatabase();

    UFUNCTION(BlueprintCallable, Category = "Database")
    TArray<FItemData> GetAllItems();
};
