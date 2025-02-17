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
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_ECostType();
	TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EWeaponType();
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponEffect();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponData;
class UScriptStruct* FWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponData, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("WeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponData.OuterSingleton;
}
template<> TEMP2025_API UScriptStruct* StaticStruct<FWeaponData>()
{
	return FWeaponData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeaponData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NAME_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NAME;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TYPE_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TYPE_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TYPE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMG_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DMG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ATKSPEED_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ATKSPEED;
		static const UECodeGen_Private::FBytePropertyParams NewProp_COST_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_COST_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_COST;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RANGE_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RANGE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WEIGHT_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WEIGHT;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EFFECT_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EFFECT_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EFFECT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MODEL_1st_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MODEL_1st;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MODEL_3rd_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MODEL_3rd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WeaponStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_NAME_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "WeaponStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_NAME = { "NAME", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponData, NAME), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_NAME_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_NAME_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TYPE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TYPE_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//\xec\x9d\xb4\xeb\xa6\x84\n" },
		{ "ModuleRelativePath", "WeaponStruct.h" },
		{ "ToolTip", "\xec\x9d\xb4\xeb\xa6\x84" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TYPE = { "TYPE", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponData, TYPE), Z_Construct_UEnum_TEMP2025_EWeaponType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TYPE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TYPE_MetaData)) }; // 828962515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_DMG_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//\xeb\xac\xb4\xea\xb8\xb0 \xec\xa2\x85\xeb\xa5\x98\n" },
		{ "ModuleRelativePath", "WeaponStruct.h" },
		{ "ToolTip", "\xeb\xac\xb4\xea\xb8\xb0 \xec\xa2\x85\xeb\xa5\x98" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_DMG = { "DMG", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponData, DMG), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_DMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_DMG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ATKSPEED_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//\xeb\xac\xb4\xea\xb8\xb0 \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80\n" },
		{ "ModuleRelativePath", "WeaponStruct.h" },
		{ "ToolTip", "\xeb\xac\xb4\xea\xb8\xb0 \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ATKSPEED = { "ATKSPEED", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponData, ATKSPEED), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ATKSPEED_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ATKSPEED_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_COST_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_COST_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//\xea\xb3\xb5\xea\xb2\xa9\xec\x86\x8d\xeb\x8f\x84\n" },
		{ "ModuleRelativePath", "WeaponStruct.h" },
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9\xec\x86\x8d\xeb\x8f\x84" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_COST = { "COST", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponData, COST), Z_Construct_UEnum_TEMP2025_ECostType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_COST_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_COST_MetaData)) }; // 902700350
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_RANGE_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//\xec\x86\x8c\xeb\xaa\xa8 \xec\x9e\x90\xec\x9b\x90 \xec\xa2\x85\xeb\xa5\x98 ex)\xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5, \xeb\xa7\x88\xeb\x82\x98, \xed\x99\x94\xec\x82\xb4 \xeb\x93\xb1\n" },
		{ "ModuleRelativePath", "WeaponStruct.h" },
		{ "ToolTip", "\xec\x86\x8c\xeb\xaa\xa8 \xec\x9e\x90\xec\x9b\x90 \xec\xa2\x85\xeb\xa5\x98 ex)\xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5, \xeb\xa7\x88\xeb\x82\x98, \xed\x99\x94\xec\x82\xb4 \xeb\x93\xb1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_RANGE = { "RANGE", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponData, RANGE), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_RANGE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_RANGE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WEIGHT_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "// \xec\x82\xac\xea\xb1\xb0\xeb\xa6\xac\n" },
		{ "ModuleRelativePath", "WeaponStruct.h" },
		{ "ToolTip", "\xec\x82\xac\xea\xb1\xb0\xeb\xa6\xac" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WEIGHT = { "WEIGHT", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponData, WEIGHT), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WEIGHT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WEIGHT_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_EFFECT_Inner = { "EFFECT", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWeaponEffect, METADATA_PARAMS(nullptr, 0) }; // 752130271
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_EFFECT_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//\xeb\xac\xb4\xea\xb2\x8c ->\xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5 \xec\x86\x8c\xeb\xaa\xa8 \xeb\xac\xb4\xea\xb8\xb0\xeb\x8a\x94 \xec\x9e\x90\xec\x9b\x90 \xec\x86\x8c\xeb\xaa\xa8\xeb\x9f\x89\xea\xb3\xbc \xec\x97\xb0\xea\xb4\x80 \xec\x9e\x88\xec\x9d\x84\xec\x88\x98 \xec\x9e\x88\xec\x9d\x8c\n" },
		{ "ModuleRelativePath", "WeaponStruct.h" },
		{ "ToolTip", "\xeb\xac\xb4\xea\xb2\x8c ->\xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5 \xec\x86\x8c\xeb\xaa\xa8 \xeb\xac\xb4\xea\xb8\xb0\xeb\x8a\x94 \xec\x9e\x90\xec\x9b\x90 \xec\x86\x8c\xeb\xaa\xa8\xeb\x9f\x89\xea\xb3\xbc \xec\x97\xb0\xea\xb4\x80 \xec\x9e\x88\xec\x9d\x84\xec\x88\x98 \xec\x9e\x88\xec\x9d\x8c" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_EFFECT = { "EFFECT", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponData, EFFECT), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_EFFECT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_EFFECT_MetaData)) }; // 752130271
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MODEL_1st_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//\xed\x8a\xb9\xec\x88\x98 \xed\x9a\xa8\xea\xb3\xbc\n" },
		{ "ModuleRelativePath", "WeaponStruct.h" },
		{ "ToolTip", "\xed\x8a\xb9\xec\x88\x98 \xed\x9a\xa8\xea\xb3\xbc" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MODEL_1st = { "MODEL_1st", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponData, MODEL_1st), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MODEL_1st_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MODEL_1st_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MODEL_3rd_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//1\xec\x9d\xb8\xec\xb9\xad \xeb\xaa\xa8\xeb\x8d\xb8\n" },
		{ "ModuleRelativePath", "WeaponStruct.h" },
		{ "ToolTip", "1\xec\x9d\xb8\xec\xb9\xad \xeb\xaa\xa8\xeb\x8d\xb8" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MODEL_3rd = { "MODEL_3rd", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponData, MODEL_3rd), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MODEL_3rd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MODEL_3rd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_NAME,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TYPE_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_TYPE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_DMG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_ATKSPEED,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_COST_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_COST,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_RANGE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_WEIGHT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_EFFECT_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_EFFECT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MODEL_1st,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponData_Statics::NewProp_MODEL_3rd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		&NewStructOps,
		"WeaponData",
		sizeof(FWeaponData),
		alignof(FWeaponData),
		Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponData()
	{
		if (!Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton, Z_Construct_UScriptStruct_FWeaponData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeaponData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponStruct_h_Statics::ScriptStructInfo[] = {
		{ FWeaponData::StaticStruct, Z_Construct_UScriptStruct_FWeaponData_Statics::NewStructOps, TEXT("WeaponData"), &Z_Registration_Info_UScriptStruct_WeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponData), 231040180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponStruct_h_202005051(TEXT("/Script/TEMP2025"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
