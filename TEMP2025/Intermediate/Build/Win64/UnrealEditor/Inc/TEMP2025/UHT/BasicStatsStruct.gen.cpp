// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/Public/BasicStatsStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicStatsStruct() {}
// Cross Module References
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FBasicStatsStruct();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BasicStatsStruct;
class UScriptStruct* FBasicStatsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BasicStatsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BasicStatsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBasicStatsStruct, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("BasicStatsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_BasicStatsStruct.OuterSingleton;
}
template<> TEMP2025_API UScriptStruct* StaticStruct<FBasicStatsStruct>()
{
	return FBasicStatsStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBasicStatsStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Strength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Agility_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Agility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dexterity_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Dexterity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Concentration_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Concentration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spell_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Spell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Endurance_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Endurance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magic_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Magic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Intelligence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBasicStatsStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasicStatsStruct, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Strength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Agility_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
		{ "Comment", "// \xed\x9e\x98\n" },
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
		{ "ToolTip", "\xed\x9e\x98" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Agility = { "Agility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasicStatsStruct, Agility), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Agility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Agility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Dexterity_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
		{ "Comment", "// \xeb\xaf\xbc\xec\xb2\xa9\n" },
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
		{ "ToolTip", "\xeb\xaf\xbc\xec\xb2\xa9" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Dexterity = { "Dexterity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasicStatsStruct, Dexterity), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Dexterity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Dexterity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Concentration_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
		{ "Comment", "// \xea\xb8\xb0\xea\xb5\x90\n" },
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
		{ "ToolTip", "\xea\xb8\xb0\xea\xb5\x90" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Concentration = { "Concentration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasicStatsStruct, Concentration), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Concentration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Concentration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Spell_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
		{ "Comment", "// \xec\xa7\x91\xec\xa4\x91\n" },
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
		{ "ToolTip", "\xec\xa7\x91\xec\xa4\x91" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Spell = { "Spell", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasicStatsStruct, Spell), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Spell_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Spell_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Endurance_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
		{ "Comment", "// \xec\xa3\xbc\xeb\xac\xb8\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
		{ "ToolTip", "\xec\xa3\xbc\xeb\xac\xb8\xeb\xa0\xa5" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Endurance = { "Endurance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasicStatsStruct, Endurance), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Endurance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Endurance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
		{ "Comment", "// \xec\x9d\xb8\xeb\x82\xb4\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
		{ "ToolTip", "\xec\x9d\xb8\xeb\x82\xb4\xeb\xa0\xa5" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasicStatsStruct, Stamina), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Stamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
		{ "Comment", "// \xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
		{ "ToolTip", "\xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasicStatsStruct, Health), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Magic_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
		{ "Comment", "// \xec\xb2\xb4\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Magic = { "Magic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasicStatsStruct, Magic), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Magic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Magic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Intelligence_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
		{ "Comment", "// \xeb\xa7\x88\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
		{ "ToolTip", "\xeb\xa7\x88\xeb\xa0\xa5" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Intelligence = { "Intelligence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBasicStatsStruct, Intelligence), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Intelligence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Intelligence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Strength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Agility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Dexterity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Concentration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Spell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Endurance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Magic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Intelligence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		&NewStructOps,
		"BasicStatsStruct",
		sizeof(FBasicStatsStruct),
		alignof(FBasicStatsStruct),
		Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBasicStatsStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_BasicStatsStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BasicStatsStruct.InnerSingleton, Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BasicStatsStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_BasicStatsStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_BasicStatsStruct_h_Statics::ScriptStructInfo[] = {
		{ FBasicStatsStruct::StaticStruct, Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewStructOps, TEXT("BasicStatsStruct"), &Z_Registration_Info_UScriptStruct_BasicStatsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBasicStatsStruct), 4259169509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_BasicStatsStruct_h_3916499668(TEXT("/Script/TEMP2025"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_BasicStatsStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_BasicStatsStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
