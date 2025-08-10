// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalStatsStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFinalStatsStruct() {}

// ********** Begin Cross Module References ********************************************************
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FFinalStatsStruct();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FFinalStatsStruct *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFinalStatsStruct;
class UScriptStruct* FFinalStatsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFinalStatsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFinalStatsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFinalStatsStruct, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("FinalStatsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FFinalStatsStruct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFinalStatsStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[] = {
		{ "Category", "FinalStatsStruct" },
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SP_MetaData[] = {
		{ "Category", "FinalStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb2\xb4\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MP_MetaData[] = {
		{ "Category", "FinalStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ATK_MetaData[] = {
		{ "Category", "FinalStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xa7\x88\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa7\x88\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AS_MetaData[] = {
		{ "Category", "FinalStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb3\xb5\xea\xb2\xa9\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DEF_MetaData[] = {
		{ "Category", "FinalStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x96\x89\xeb\x8f\x99\xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x96\x89\xeb\x8f\x99\xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CRrate_MetaData[] = {
		{ "Category", "FinalStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb0\xa9\xec\x96\xb4\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb0\xa9\xec\x96\xb4\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CRDMG_MetaData[] = {
		{ "Category", "FinalStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\x98\xeb\xaa\x85\xed\x83\x80 \xed\x99\x95\xeb\xa5\xa0or\xec\x82\xac\xea\xb1\xb0\xeb\xa6\xac\n" },
#endif
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\x98\xeb\xaa\x85\xed\x83\x80 \xed\x99\x95\xeb\xa5\xa0or\xec\x82\xac\xea\xb1\xb0\xeb\xa6\xac" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ATK;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AS;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DEF;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CRrate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CRDMG;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFinalStatsStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFinalStatsStruct, HP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HP_MetaData), NewProp_HP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_SP = { "SP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFinalStatsStruct, SP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SP_MetaData), NewProp_SP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_MP = { "MP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFinalStatsStruct, MP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MP_MetaData), NewProp_MP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_ATK = { "ATK", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFinalStatsStruct, ATK), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ATK_MetaData), NewProp_ATK_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_AS = { "AS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFinalStatsStruct, AS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AS_MetaData), NewProp_AS_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_DEF = { "DEF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFinalStatsStruct, DEF), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DEF_MetaData), NewProp_DEF_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_CRrate = { "CRrate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFinalStatsStruct, CRrate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CRrate_MetaData), NewProp_CRrate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_CRDMG = { "CRDMG", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFinalStatsStruct, CRDMG), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CRDMG_MetaData), NewProp_CRDMG_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_HP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_SP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_MP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_ATK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_AS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_DEF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_CRrate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_CRDMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	nullptr,
	&NewStructOps,
	"FinalStatsStruct",
	Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::PropPointers),
	sizeof(FFinalStatsStruct),
	alignof(FFinalStatsStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFinalStatsStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFinalStatsStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFinalStatsStruct.InnerSingleton, Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFinalStatsStruct.InnerSingleton;
}
// ********** End ScriptStruct FFinalStatsStruct ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_FinalStatsStruct_h__Script_TEMP2025_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFinalStatsStruct::StaticStruct, Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewStructOps, TEXT("FinalStatsStruct"), &Z_Registration_Info_UScriptStruct_FFinalStatsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFinalStatsStruct), 3526540418U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_FinalStatsStruct_h__Script_TEMP2025_2935314022(TEXT("/Script/TEMP2025"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_FinalStatsStruct_h__Script_TEMP2025_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_FinalStatsStruct_h__Script_TEMP2025_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
