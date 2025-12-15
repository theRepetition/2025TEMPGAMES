// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondStatsStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSecondStatsStruct() {}

// ********** Begin Cross Module References ********************************************************
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FSecondStatsStruct();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSecondStatsStruct ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSecondStatsStruct;
class UScriptStruct* FSecondStatsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSecondStatsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSecondStatsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSecondStatsStruct, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("SecondStatsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FSecondStatsStruct.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSecondStatsStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "SecondStatsStruct" },
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HPRegenration_MetaData[] = {
		{ "Category", "SecondStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9d\xb4\xeb\x8f\x99\xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4\xeb\x8f\x99\xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SPRegenration_MetaData[] = {
		{ "Category", "SecondStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb2\xb4\xeb\xa0\xa5 \xec\x9e\xac\xec\x83\x9d\n" },
#endif
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5 \xec\x9e\xac\xec\x83\x9d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MPRegenration_MetaData[] = {
		{ "Category", "SecondStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5 \xec\x9e\xac\xec\x83\x9d\n" },
#endif
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5 \xec\x9e\xac\xec\x83\x9d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalPierce_MetaData[] = {
		{ "Category", "SecondStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xa7\x88\xeb\xa0\xa5 \xec\x9e\xac\xec\x83\x9d\n" },
#endif
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa7\x88\xeb\xa0\xa5 \xec\x9e\xac\xec\x83\x9d" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicalPierce_MetaData[] = {
		{ "Category", "SecondStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xac\xbc\xeb\xa6\xac \xea\xb4\x80\xed\x86\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xac\xbc\xeb\xa6\xac \xea\xb4\x80\xed\x86\xb5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicalR_MetaData[] = {
		{ "Category", "SecondStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xa7\x88\xeb\xb2\x95 \xea\xb4\x80\xed\x86\xb5\n" },
#endif
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa7\x88\xeb\xb2\x95 \xea\xb4\x80\xed\x86\xb5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalR_MetaData[] = {
		{ "Category", "SecondStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xa7\x88\xeb\xb2\x95 \xec\xa0\x80\xed\x95\xad\n" },
#endif
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa7\x88\xeb\xb2\x95 \xec\xa0\x80\xed\x95\xad" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HPRegenration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SPRegenration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MPRegenration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicalPierce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MagicalPierce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MagicalR;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicalR;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSecondStatsStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSecondStatsStruct, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_HPRegenration = { "HPRegenration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSecondStatsStruct, HPRegenration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HPRegenration_MetaData), NewProp_HPRegenration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_SPRegenration = { "SPRegenration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSecondStatsStruct, SPRegenration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SPRegenration_MetaData), NewProp_SPRegenration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MPRegenration = { "MPRegenration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSecondStatsStruct, MPRegenration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MPRegenration_MetaData), NewProp_MPRegenration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_PhysicalPierce = { "PhysicalPierce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSecondStatsStruct, PhysicalPierce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalPierce_MetaData), NewProp_PhysicalPierce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MagicalPierce = { "MagicalPierce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSecondStatsStruct, MagicalPierce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicalPierce_MetaData), NewProp_MagicalPierce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MagicalR = { "MagicalR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSecondStatsStruct, MagicalR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicalR_MetaData), NewProp_MagicalR_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_PhysicalR = { "PhysicalR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSecondStatsStruct, PhysicalR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalR_MetaData), NewProp_PhysicalR_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_HPRegenration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_SPRegenration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MPRegenration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_PhysicalPierce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MagicalPierce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MagicalR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_PhysicalR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	nullptr,
	&NewStructOps,
	"SecondStatsStruct",
	Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::PropPointers),
	sizeof(FSecondStatsStruct),
	alignof(FSecondStatsStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSecondStatsStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSecondStatsStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSecondStatsStruct.InnerSingleton, Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSecondStatsStruct.InnerSingleton;
}
// ********** End ScriptStruct FSecondStatsStruct **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_SecondStatsStruct_h__Script_TEMP2025_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSecondStatsStruct::StaticStruct, Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewStructOps, TEXT("SecondStatsStruct"), &Z_Registration_Info_UScriptStruct_FSecondStatsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSecondStatsStruct), 2884767995U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_SecondStatsStruct_h__Script_TEMP2025_3846593901(TEXT("/Script/TEMP2025"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_SecondStatsStruct_h__Script_TEMP2025_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_SecondStatsStruct_h__Script_TEMP2025_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
