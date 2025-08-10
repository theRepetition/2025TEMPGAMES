// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/Public/SecondStatsStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondStatsStruct() {}
// Cross Module References
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FSecondStatsStruct();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SecondStatsStruct;
class UScriptStruct* FSecondStatsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SecondStatsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SecondStatsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSecondStatsStruct, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("SecondStatsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SecondStatsStruct.OuterSingleton;
}
template<> TEMP2025_API UScriptStruct* StaticStruct<FSecondStatsStruct>()
{
	return FSecondStatsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSecondStatsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HPRegenration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HPRegenration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SPRegenration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SPRegenration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MPRegenration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MPRegenration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalPierce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicalPierce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagicalPierce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MagicalPierce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagicalR_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MagicalR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalR_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicalR;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSecondStatsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "SecondStatsStruct" },
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSecondStatsStruct, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_HPRegenration_MetaData[] = {
		{ "Category", "SecondStatsStruct" },
		{ "Comment", "// \xec\x9d\xb4\xeb\x8f\x99\xec\x86\x8d\xeb\x8f\x84\n" },
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
		{ "ToolTip", "\xec\x9d\xb4\xeb\x8f\x99\xec\x86\x8d\xeb\x8f\x84" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_HPRegenration = { "HPRegenration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSecondStatsStruct, HPRegenration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_HPRegenration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_HPRegenration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_SPRegenration_MetaData[] = {
		{ "Category", "SecondStatsStruct" },
		{ "Comment", "// \xec\xb2\xb4\xeb\xa0\xa5 \xec\x9e\xac\xec\x83\x9d\n" },
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5 \xec\x9e\xac\xec\x83\x9d" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_SPRegenration = { "SPRegenration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSecondStatsStruct, SPRegenration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_SPRegenration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_SPRegenration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MPRegenration_MetaData[] = {
		{ "Category", "SecondStatsStruct" },
		{ "Comment", "// \xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5 \xec\x9e\xac\xec\x83\x9d\n" },
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
		{ "ToolTip", "\xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5 \xec\x9e\xac\xec\x83\x9d" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MPRegenration = { "MPRegenration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSecondStatsStruct, MPRegenration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MPRegenration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MPRegenration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_PhysicalPierce_MetaData[] = {
		{ "Category", "SecondStatsStruct" },
		{ "Comment", "// \xeb\xa7\x88\xeb\xa0\xa5 \xec\x9e\xac\xec\x83\x9d\n" },
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
		{ "ToolTip", "\xeb\xa7\x88\xeb\xa0\xa5 \xec\x9e\xac\xec\x83\x9d" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_PhysicalPierce = { "PhysicalPierce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSecondStatsStruct, PhysicalPierce), METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_PhysicalPierce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_PhysicalPierce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MagicalPierce_MetaData[] = {
		{ "Category", "SecondStatsStruct" },
		{ "Comment", "// \xeb\xac\xbc\xeb\xa6\xac \xea\xb4\x80\xed\x86\xb5\n" },
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
		{ "ToolTip", "\xeb\xac\xbc\xeb\xa6\xac \xea\xb4\x80\xed\x86\xb5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MagicalPierce = { "MagicalPierce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSecondStatsStruct, MagicalPierce), METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MagicalPierce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MagicalPierce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MagicalR_MetaData[] = {
		{ "Category", "SecondStatsStruct" },
		{ "Comment", "// \xeb\xa7\x88\xeb\xb2\x95 \xea\xb4\x80\xed\x86\xb5\n" },
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
		{ "ToolTip", "\xeb\xa7\x88\xeb\xb2\x95 \xea\xb4\x80\xed\x86\xb5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MagicalR = { "MagicalR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSecondStatsStruct, MagicalR), METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MagicalR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_MagicalR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_PhysicalR_MetaData[] = {
		{ "Category", "SecondStatsStruct" },
		{ "Comment", "// \xeb\xa7\x88\xeb\xb2\x95 \xec\xa0\x80\xed\x95\xad\n" },
		{ "ModuleRelativePath", "Public/SecondStatsStruct.h" },
		{ "ToolTip", "\xeb\xa7\x88\xeb\xb2\x95 \xec\xa0\x80\xed\x95\xad" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_PhysicalR = { "PhysicalR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSecondStatsStruct, PhysicalR), METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_PhysicalR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewProp_PhysicalR_MetaData)) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		&NewStructOps,
		"SecondStatsStruct",
		sizeof(FSecondStatsStruct),
		alignof(FSecondStatsStruct),
		Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSecondStatsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_SecondStatsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SecondStatsStruct.InnerSingleton, Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SecondStatsStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_SecondStatsStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_SecondStatsStruct_h_Statics::ScriptStructInfo[] = {
		{ FSecondStatsStruct::StaticStruct, Z_Construct_UScriptStruct_FSecondStatsStruct_Statics::NewStructOps, TEXT("SecondStatsStruct"), &Z_Registration_Info_UScriptStruct_SecondStatsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSecondStatsStruct), 3098573469U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_SecondStatsStruct_h_3452098003(TEXT("/Script/TEMP2025"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_SecondStatsStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_SecondStatsStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
