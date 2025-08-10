// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/ECheckSelectItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeECheckSelectItem() {}

// ********** Begin Cross Module References ********************************************************
TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_ECheckSelectItem();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECheckSelectItem **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECheckSelectItem;
static UEnum* ECheckSelectItem_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECheckSelectItem.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECheckSelectItem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TEMP2025_ECheckSelectItem, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("ECheckSelectItem"));
	}
	return Z_Registration_Info_UEnum_ECheckSelectItem.OuterSingleton;
}
template<> TEMP2025_API UEnum* StaticEnum<ECheckSelectItem>()
{
	return ECheckSelectItem_StaticEnum();
}
struct Z_Construct_UEnum_TEMP2025_ECheckSelectItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Invenotry.DisplayName", "Inven" },
		{ "Invenotry.Name", "ECheckSelectItem::Invenotry" },
		{ "Looting.DisplayName", "Loot" },
		{ "Looting.Name", "ECheckSelectItem::Looting" },
		{ "ModuleRelativePath", "ECheckSelectItem.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ECheckSelectItem::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECheckSelectItem::None", (int64)ECheckSelectItem::None },
		{ "ECheckSelectItem::Invenotry", (int64)ECheckSelectItem::Invenotry },
		{ "ECheckSelectItem::Looting", (int64)ECheckSelectItem::Looting },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TEMP2025_ECheckSelectItem_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TEMP2025,
	nullptr,
	"ECheckSelectItem",
	"ECheckSelectItem",
	Z_Construct_UEnum_TEMP2025_ECheckSelectItem_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_ECheckSelectItem_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_ECheckSelectItem_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TEMP2025_ECheckSelectItem_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TEMP2025_ECheckSelectItem()
{
	if (!Z_Registration_Info_UEnum_ECheckSelectItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECheckSelectItem.InnerSingleton, Z_Construct_UEnum_TEMP2025_ECheckSelectItem_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECheckSelectItem.InnerSingleton;
}
// ********** End Enum ECheckSelectItem ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ECheckSelectItem_h__Script_TEMP2025_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECheckSelectItem_StaticEnum, TEXT("ECheckSelectItem"), &Z_Registration_Info_UEnum_ECheckSelectItem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 119950876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ECheckSelectItem_h__Script_TEMP2025_387710034(TEXT("/Script/TEMP2025"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ECheckSelectItem_h__Script_TEMP2025_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ECheckSelectItem_h__Script_TEMP2025_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
