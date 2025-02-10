#pragma once

#include "CoreMinimal.h"
#include "ItemStruct.generated.h"

USTRUCT(BlueprintType)
struct TEMP2025_API FItemData
{
    GENERATED_BODY()

public:
    FItemData()
        :NAME(TEXT(""))
        , TYPE(TEXT(""))
        , VALUE(0) // 기본값 설정
        , WEIGHT(0.0f) // 기본값 설정
        , IMAGEPATH(TEXT(""))
        , MODELID(TEXT(""))
    {}

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item")
    FString NAME;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item")
    FString TYPE;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item")
    int32 VALUE;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item")
    float WEIGHT;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item")
    FString IMAGEPATH;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Item")
    FString MODELID;
};
