#pragma once

#include "CoreMinimal.h"
#include "ItemType.h"
#include "WeaponStruct.h"
#include "IsEquipped.h"
#include "UObject/PrimaryAssetId.h"
#include "ItemStruct.generated.h"


USTRUCT(BlueprintType)
struct FItemData
{
    GENERATED_BODY()

public:
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    FName DEF_ID;

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
    int32 X;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    int32 Y;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    FString ImagePath;  // 아이템 이미지 경로 (UI 연동용)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	FPrimaryAssetId MODEL3rd;   // 3D 모델 ID (게임 내 오브젝트 연동용)

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "ItemType == EItemType::Weapon"))
    FWeaponData WeaponStats; 

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    bool bStackable;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    int32 MaxStack;
   
    
};