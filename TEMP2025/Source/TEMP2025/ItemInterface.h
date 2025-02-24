#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemStruct.h"
#include "ItemInterface.generated.h"


UINTERFACE(MinimalAPI, Blueprintable)
class UItemInterface : public UInterface
{
    GENERATED_BODY()
};

class TEMP2025_API IItemInterface
{
    GENERATED_BODY()

public:
    // BP에서 구현할 함수 선언
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Item")
    FItemData GetItemData();
};