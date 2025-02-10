// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/ItemStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemStruct() {}
// Cross Module References
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton;
}
template<> TEMP2025_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NAME_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NAME;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TYPE_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TYPE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VALUE_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VALUE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WEIGHT_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WEIGHT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IMAGEPATH_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IMAGEPATH;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MODELID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MODELID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ItemStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_NAME_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "ItemStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_NAME = { "NAME", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemData, NAME), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_NAME_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_NAME_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_TYPE_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "ItemStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_TYPE = { "TYPE", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemData, TYPE), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_TYPE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_TYPE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_VALUE_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "ItemStruct.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_VALUE = { "VALUE", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemData, VALUE), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_VALUE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_VALUE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_WEIGHT_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "ItemStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_WEIGHT = { "WEIGHT", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemData, WEIGHT), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_WEIGHT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_WEIGHT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IMAGEPATH_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "ItemStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IMAGEPATH = { "IMAGEPATH", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemData, IMAGEPATH), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IMAGEPATH_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IMAGEPATH_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemData_Statics::NewProp_MODELID_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "ItemStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_MODELID = { "MODELID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemData, MODELID), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_MODELID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::NewProp_MODELID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_NAME,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_TYPE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_VALUE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_WEIGHT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_IMAGEPATH,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_MODELID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		&NewStructOps,
		"ItemData",
		sizeof(FItemData),
		alignof(FItemData),
		Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemData()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemStruct_h_Statics::ScriptStructInfo[] = {
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 3471194715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemStruct_h_3836232851(TEXT("/Script/TEMP2025"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
