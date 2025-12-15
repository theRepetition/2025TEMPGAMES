// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/UIType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUIType() {}

// ********** Begin Cross Module References ********************************************************
TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EUIType();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EUIType *******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUIType;
static UEnum* EUIType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUIType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUIType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TEMP2025_EUIType, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("EUIType"));
	}
	return Z_Registration_Info_UEnum_EUIType.OuterSingleton;
}
template<> TEMP2025_NON_ATTRIBUTED_API UEnum* StaticEnum<EUIType>()
{
	return EUIType_StaticEnum();
}
struct Z_Construct_UEnum_TEMP2025_EUIType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Inventory.DisplayName", "Inventory" },
		{ "Inventory.Name", "EUIType::Inventory" },
		{ "Map.DisplayName", "Map" },
		{ "Map.Name", "EUIType::Map" },
		{ "Menu.DisplayName", "Menu" },
		{ "Menu.Name", "EUIType::Menu" },
		{ "ModuleRelativePath", "UIType.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EUIType::None" },
		{ "Profile.DisplayName", "Profile" },
		{ "Profile.Name", "EUIType::Profile" },
		{ "Quest.DisplayName", "Quest" },
		{ "Quest.Name", "EUIType::Quest" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUIType::None", (int64)EUIType::None },
		{ "EUIType::Map", (int64)EUIType::Map },
		{ "EUIType::Inventory", (int64)EUIType::Inventory },
		{ "EUIType::Menu", (int64)EUIType::Menu },
		{ "EUIType::Profile", (int64)EUIType::Profile },
		{ "EUIType::Quest", (int64)EUIType::Quest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_TEMP2025_EUIType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TEMP2025_EUIType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TEMP2025,
	nullptr,
	"EUIType",
	"EUIType",
	Z_Construct_UEnum_TEMP2025_EUIType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EUIType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EUIType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TEMP2025_EUIType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TEMP2025_EUIType()
{
	if (!Z_Registration_Info_UEnum_EUIType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUIType.InnerSingleton, Z_Construct_UEnum_TEMP2025_EUIType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUIType.InnerSingleton;
}
// ********** End Enum EUIType *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_UIType_h__Script_TEMP2025_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUIType_StaticEnum, TEXT("EUIType"), &Z_Registration_Info_UEnum_EUIType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 534191780U) },
	};
}; // Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_UIType_h__Script_TEMP2025_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_UIType_h__Script_TEMP2025_916396897{
	TEXT("/Script/TEMP2025"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_UIType_h__Script_TEMP2025_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_UIType_h__Script_TEMP2025_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
