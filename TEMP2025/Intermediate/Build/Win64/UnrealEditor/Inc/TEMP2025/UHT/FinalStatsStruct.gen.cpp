// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/Public/FinalStatsStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinalStatsStruct() {}
// Cross Module References
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FFinalStatsStruct();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FinalStatsStruct;
class UScriptStruct* FFinalStatsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FinalStatsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FinalStatsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFinalStatsStruct, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("FinalStatsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FinalStatsStruct.OuterSingleton;
}
template<> TEMP2025_API UScriptStruct* StaticStruct<FFinalStatsStruct>()
{
	return FFinalStatsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFinalStatsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SP_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MP_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ATK_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ATK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DEF_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DEF;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CRrate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CRrate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CRDMG_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CRDMG;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFinalStatsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "FinalStatsStruct" },
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFinalStatsStruct, HP), METADATA_PARAMS(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_SP_MetaData[] = {
		{ "Category", "FinalStatsStruct" },
		{ "Comment", "// \xec\xb2\xb4\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_SP = { "SP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFinalStatsStruct, SP), METADATA_PARAMS(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_SP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_SP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_MP_MetaData[] = {
		{ "Category", "FinalStatsStruct" },
		{ "Comment", "// \xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
		{ "ToolTip", "\xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_MP = { "MP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFinalStatsStruct, MP), METADATA_PARAMS(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_MP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_MP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_ATK_MetaData[] = {
		{ "Category", "FinalStatsStruct" },
		{ "Comment", "// \xeb\xa7\x88\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
		{ "ToolTip", "\xeb\xa7\x88\xeb\xa0\xa5" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_ATK = { "ATK", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFinalStatsStruct, ATK), METADATA_PARAMS(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_ATK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_ATK_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_AS_MetaData[] = {
		{ "Category", "FinalStatsStruct" },
		{ "Comment", "// \xea\xb3\xb5\xea\xb2\xa9\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9\xeb\xa0\xa5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_AS = { "AS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFinalStatsStruct, AS), METADATA_PARAMS(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_AS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_AS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_DEF_MetaData[] = {
		{ "Category", "FinalStatsStruct" },
		{ "Comment", "// \xed\x96\x89\xeb\x8f\x99\xec\x86\x8d\xeb\x8f\x84\n" },
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
		{ "ToolTip", "\xed\x96\x89\xeb\x8f\x99\xec\x86\x8d\xeb\x8f\x84" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_DEF = { "DEF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFinalStatsStruct, DEF), METADATA_PARAMS(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_DEF_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_DEF_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_CRrate_MetaData[] = {
		{ "Category", "FinalStatsStruct" },
		{ "Comment", "// \xeb\xb0\xa9\xec\x96\xb4\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
		{ "ToolTip", "\xeb\xb0\xa9\xec\x96\xb4\xeb\xa0\xa5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_CRrate = { "CRrate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFinalStatsStruct, CRrate), METADATA_PARAMS(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_CRrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_CRrate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_CRDMG_MetaData[] = {
		{ "Category", "FinalStatsStruct" },
		{ "Comment", "// \xec\xb9\x98\xeb\xaa\x85\xed\x83\x80 \xed\x99\x95\xeb\xa5\xa0or\xec\x82\xac\xea\xb1\xb0\xeb\xa6\xac\n" },
		{ "ModuleRelativePath", "Public/FinalStatsStruct.h" },
		{ "ToolTip", "\xec\xb9\x98\xeb\xaa\x85\xed\x83\x80 \xed\x99\x95\xeb\xa5\xa0or\xec\x82\xac\xea\xb1\xb0\xeb\xa6\xac" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_CRDMG = { "CRDMG", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFinalStatsStruct, CRDMG), METADATA_PARAMS(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_CRDMG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewProp_CRDMG_MetaData)) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		&NewStructOps,
		"FinalStatsStruct",
		sizeof(FFinalStatsStruct),
		alignof(FFinalStatsStruct),
		Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFinalStatsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_FinalStatsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FinalStatsStruct.InnerSingleton, Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FinalStatsStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_FinalStatsStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_FinalStatsStruct_h_Statics::ScriptStructInfo[] = {
		{ FFinalStatsStruct::StaticStruct, Z_Construct_UScriptStruct_FFinalStatsStruct_Statics::NewStructOps, TEXT("FinalStatsStruct"), &Z_Registration_Info_UScriptStruct_FinalStatsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFinalStatsStruct), 1230019215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_FinalStatsStruct_h_290751092(TEXT("/Script/TEMP2025"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_FinalStatsStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_FinalStatsStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
