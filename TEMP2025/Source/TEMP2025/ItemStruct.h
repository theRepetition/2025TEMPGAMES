#pragma once

#include "CoreMinimal.h"
#include "ItemType.h"
#include "ItemStruct.generated.h"


USTRUCT(BlueprintType)
struct FItemData
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    EItemType Type; //Weapon Armor Consumable Misc Book 

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    int32 Value;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    float Weight;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item") 
    int32 Quantity;// 아이템 수량

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    FString ImagePath;  // 아이템 이미지 경로 (UI 연동용)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    FString ModelID;  // 3D 모델 ID (게임 내 오브젝트 연동용)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    int32 UniqueIndex;  // 인벤토리 안에서 사용할 고유 인덱스 변수
   
   
    
};