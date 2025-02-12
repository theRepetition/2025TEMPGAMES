#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "cppdataBaseManager.h"
#include "cppInventoryManager.h"
#include "Temp2025GameInstance.generated.h"

UCLASS()
class TEMP2025_API UTemp2025GameInstance : public UGameInstance
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadOnly, Category = "Database")
    UcppdataBaseManager* DBManager;

    UPROPERTY(BlueprintReadOnly, Category = "Inventory")
    UcppInventoryManager* InventoryManager; 

    virtual void Init() override;
};
