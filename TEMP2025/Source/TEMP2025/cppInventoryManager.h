#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemStruct.h"
#include "cppdataBaseManager.h"
#include "cppInventoryManager.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class TEMP2025_API UcppInventoryManager : public UActorComponent
{
    GENERATED_BODY()

private:
    TArray<FItemData> InventoryItems;  // 인벤토리 아이템

public:    
    UcppInventoryManager();  // 기본 생성자

    UFUNCTION(BlueprintCallable, Category = "Inventory")
    void LoadInventory(UcppdataBaseManager* DBManager);  // DB에서 인벤토리 로드

    UFUNCTION(BlueprintCallable, Category = "Inventory")
    void AddItem(FItemData NewItem);  // 아이템 추가

    UFUNCTION(BlueprintCallable, Category = "Inventory")
    void RemoveItem(FString ItemName);  // 아이템 삭제

    UFUNCTION(BlueprintCallable, Category = "Inventory")
    TArray<FItemData> GetInventoryItems();  // 인벤토리 데이터 반환
};
