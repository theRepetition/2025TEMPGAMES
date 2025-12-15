// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/WeaponStruct.h"
#include "TEMP2025/WeaponEffect.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponStruct() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPrimaryAssetId();
TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_ECostType();
TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EHandedType();
TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EWeaponType();
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponEffect();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWeaponData *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWeaponData;
class UScriptStruct* FWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponData, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("WeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_FWeaponData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWeaponData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WeaponStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NAME_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "WeaponStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TYPE_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x9d\xb4\xeb\xa6\x84\n" },
#endif
		{ "ModuleRelativePath", "WeaponStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4\xeb\xa6\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandedTYPE_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\xac\xb4\xea\xb8\xb0 \xec\xa2\x85\xeb\xa5\x98\n" },
#endif
		{ "ModuleRelativePath", "WeaponStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xac\xb4\xea\xb8\xb0 \xec\xa2\x85\xeb\xa5\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DMG_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\xac\xb4\xea\xb8\xb0 \xec\xa2\x85\xeb\xa5\x98\n" },
#endif
		{ "ModuleRelativePath", "WeaponStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xac\xb4\xea\xb8\xb0 \xec\xa2\x85\xeb\xa5\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ATKSPEED_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\xac\xb4\xea\xb8\xb0 \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80\n" },
#endif
		{ "ModuleRelativePath", "WeaponStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xac\xb4\xea\xb8\xb0 \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_COST_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xea\xb3\xb5\xea\xb2\xa9\xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "WeaponStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9\xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RANGE_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x86\x8c\xeb\xaa\xa8 \xec\x9e\x90\xec\x9b\x90 \xec\xa2\x85\xeb\xa5\x98 ex)\xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5, \xeb\xa7\x88\xeb\x82\x98, \xed\x99\x94\xec\x82\xb4 \xeb\x93\xb1\n" },
#endif
		{ "ModuleRelativePath", "WeaponStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x86\x8c\xeb\xaa\xa8 \xec\x9e\x90\xec\x9b\x90 \xec\xa2\x85\xeb\xa5\x98 ex)\xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5, \xeb\xa7\x88\xeb\x82\x98, \xed\x99\x94\xec\x82\xb4 \xeb\x93\xb1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WEIGHT_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x82\xac\xea\xb1\xb0\xeb\xa6\xac\n" },
#endif
		{ "ModuleRelativePath", "WeaponStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x82\xac\xea\xb1\xb0\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EFFECT_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\xac\xb4\xea\xb2\x8c ->\xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5 \xec\x86\x8c\xeb\xaa\xa8 \xeb\xac\xb4\xea\xb8\xb0\xeb\x8a\x94 \xec\x9e\x90\xec\x9b\x90 \xec\x86\x8c\xeb\xaa\xa8\xeb\x9f\x89\xea\xb3\xbc \xec\x97\xb0\xea\xb4\x80 \xec\x9e\x88\xec\x9d\x84\xec\x88\x98 \xec\x9e\x88\xec\x9d\x8c\n" },
#endif
		{ "ModuleRelativePath", "WeaponStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xac\xb4\xea\xb2\x8c ->\xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5 \xec\x86\x8c\xeb\xaa\xa8 \xeb\xac\xb4\xea\xb8\xb0\xeb\x8a\x94 \xec\x9e\x90\xec\x9b\x90 \xec\x86\x8c\xeb\xaa\xa8\xeb\x9f\x89\xea\xb3\xbc \xec\x97\xb0\xea\xb4\x80 \xec\x9e\x88\xec\x9d\x84\xec\x88\x98 \xec\x9e\x88\xec\x9d\x8c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MODEL_MetaData[] = {
		{ "Category", "Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xed\x8a\xb9\xec\x88\x98 \xed\x9a\xa8\xea\xb3\xbc\n" },
#endif
		{ "ModuleRelativePath", "WeaponStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x8a\xb9\xec\x88\x98 \xed\x9a\xa8\xea\xb3\xbc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NAME;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TYPE_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TYPE;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandedTYPE_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HandedTYPE;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DMG;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ATKSPEED;
	static const UECodeGen_Private::FBytePropertyParams NewProp_COST_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_COST;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RANGE;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WEIGHT;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EFFECT_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EFFECT;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MODEL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_NAME = { "NAME", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, NAME), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NAME_MetaData), NewProp_NAME_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TYPE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TYPE = { "TYPE", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, TYPE), Z_Construct_UEnum_TEMP2025_EWeaponType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TYPE_MetaData), NewProp_TYPE_MetaData) }; // 3140929117
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_HandedTYPE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_HandedTYPE = { "HandedTYPE", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, HandedTYPE), Z_Construct_UEnum_TEMP2025_EHandedType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandedTYPE_MetaData), NewProp_HandedTYPE_MetaData) }; // 2152483629
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_DMG = { "DMG", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, DMG), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DMG_MetaData), NewProp_DMG_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ATKSPEED = { "ATKSPEED", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, ATKSPEED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ATKSPEED_MetaData), NewProp_ATKSPEED_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_COST_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_COST = { "COST", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, COST), Z_Construct_UEnum_TEMP2025_ECostType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_COST_MetaData), NewProp_COST_MetaData) }; // 3731606263
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_RANGE = { "RANGE", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, RANGE), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RANGE_MetaData), NewProp_RANGE_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WEIGHT = { "WEIGHT", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, WEIGHT), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WEIGHT_MetaData), NewProp_WEIGHT_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_EFFECT_Inner = { "EFFECT", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWeaponEffect, METADATA_PARAMS(0, nullptr) }; // 3029172311
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_EFFECT = { "EFFECT", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, EFFECT), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EFFECT_MetaData), NewProp_EFFECT_MetaData) }; // 3029172311
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MODEL = { "MODEL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponData, MODEL), Z_Construct_UScriptStruct_FPrimaryAssetId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MODEL_MetaData), NewProp_MODEL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_NAME,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TYPE_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TYPE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_HandedTYPE_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_HandedTYPE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_DMG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ATKSPEED,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_COST_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_COST,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_RANGE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WEIGHT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_EFFECT_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_EFFECT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MODEL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	nullptr,
	&NewStructOps,
	"WeaponData",
	Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers),
	sizeof(FWeaponData),
	alignof(FWeaponData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponData()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWeaponData.InnerSingleton, Z_Construct_UScriptStruct_FWeaponData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWeaponData.InnerSingleton;
}
// ********** End ScriptStruct FWeaponData *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponStruct_h__Script_TEMP2025_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponData::StaticStruct, Z_Construct_UScriptStruct_FWeaponData_Statics::NewStructOps, TEXT("WeaponData"), &Z_Registration_Info_UScriptStruct_FWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponData), 1951846963U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponStruct_h__Script_TEMP2025_2783565410(TEXT("/Script/TEMP2025"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponStruct_h__Script_TEMP2025_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponStruct_h__Script_TEMP2025_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
