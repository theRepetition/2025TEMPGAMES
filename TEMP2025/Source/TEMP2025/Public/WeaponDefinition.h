#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/SoftObjectPtr.h"
#include "Engine/StaticMesh.h"
#include "GameFramework/Actor.h"
#include "WeaponDefinition.generated.h"

/** AssetManager용 타입 상수: "WeaponDefinition" */
USTRUCT()
struct FWeaponDefinitionTypes
{
	GENERATED_BODY()
	static const FPrimaryAssetType WeaponDefinition; // "WeaponDefinition"
};


UCLASS(BlueprintType)
class TEMP2025_API UWeaponDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon")
	TSoftObjectPtr<UStaticMesh> Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Sockets")
	FName HandSocketName = NAME_None;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Sockets")
	FName SheathSocketName = NAME_None; 


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Offsets")
	FTransform HandOffset = FTransform::Identity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon|Offsets")
	FTransform SheathOffset = FTransform::Identity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Weapon")
	TSubclassOf<AActor> WeaponActorClass; 

public:

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId(FWeaponDefinitionTypes::WeaponDefinition, GetFName());
	}
};
