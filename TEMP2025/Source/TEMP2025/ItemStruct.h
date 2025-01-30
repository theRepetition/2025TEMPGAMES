#pragma once

#include "CoreMinimal.h"
#include "ItemStruct.generated.h"

USTRUCT(BlueprintType)
struct FItemData
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadOnly, Category = "Item")
    FString Name;

    UPROPERTY(BlueprintReadOnly, Category = "Item")
    FString Type;

    UPROPERTY(BlueprintReadOnly, Category = "Item")
    int32 Value;

    UPROPERTY(BlueprintReadOnly, Category = "Item")
    float Weight;
};