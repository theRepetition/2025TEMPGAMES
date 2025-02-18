#pragma once

#include "CoreMinimal.h"
#include "ItemStruct.generated.h"
#include "ItemType.h"

USTRUCT(BlueprintType)
struct FItemData
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadOnly, Category = "Item")
    FString Name;

    UPROPERTY(BlueprintReadOnly, Category = "Item")
    EItemType Type;

    UPROPERTY(BlueprintReadOnly, Category = "Item")
    int32 Value;

    UPROPERTY(BlueprintReadOnly, Category = "Item")
    float Weight;

    UPROPERTY(BlueprintReadOnly, Category = "Item")
    FString ImagePath;  // 아이템 이미지 경로 (UI 연동용)

    UPROPERTY(BlueprintReadOnly, Category = "Item")
    FString ModelID;  // 3D 모델 ID (게임 내 오브젝트 연동용)
    
};