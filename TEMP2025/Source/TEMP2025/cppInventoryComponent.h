#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ItemStruct.h"
#include "IsEquipped.h"
#include "cppInventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEMP2025_API UcppInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UcppInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
    TArray<FItemData> Inventory;

	UFUNCTION(BlueprintCallable, Category = "Inventory")
	TArray<FItemData> AddItem(const TArray<FItemData>& TargetInventory, const FItemData& NewItem);
	
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	TArray<FItemData> RemoveItem(const TArray<FItemData>& TargetInventory, const FItemData& ItemToRemove, int32 count);
	
	UFUNCTION(BlueprintCallable, Category = "Inventory")
	TArray<FItemData> SortInventory(TArray<FItemData> TargetInventory);
	
		
};
