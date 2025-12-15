// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicStatsStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBasicStatsStruct() {}

// ********** Begin Cross Module References ********************************************************
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FBasicStatsStruct();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FBasicStatsStruct *************************************************
struct Z_Construct_UScriptStruct_FBasicStatsStruct_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FBasicStatsStruct); }
	static inline consteval int16 GetStructAlignment() { return alignof(FBasicStatsStruct); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Agility_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x9e\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x9e\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dexterity_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xaf\xbc\xec\xb2\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xaf\xbc\xec\xb2\xa9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Concentration_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb8\xb0\xea\xb5\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb8\xb0\xea\xb5\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spell_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa7\x91\xec\xa4\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa7\x91\xec\xa4\x91" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Endurance_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa3\xbc\xeb\xac\xb8\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa3\xbc\xeb\xac\xb8\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9d\xb8\xeb\x82\xb4\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb8\xeb\x82\xb4\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa7\x80\xea\xb5\xac\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Magic_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb2\xb4\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intelligence_MetaData[] = {
		{ "Category", "BasicStatsStruct" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xa7\x88\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/BasicStatsStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa7\x88\xeb\xa0\xa5" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FBasicStatsStruct constinit property declarations *****************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Agility;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Dexterity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Concentration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Spell;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Endurance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Magic;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Intelligence;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FBasicStatsStruct constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBasicStatsStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FBasicStatsStruct_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBasicStatsStruct;
class UScriptStruct* FBasicStatsStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBasicStatsStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBasicStatsStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBasicStatsStruct, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("BasicStatsStruct"));
	}
	return Z_Registration_Info_UScriptStruct_FBasicStatsStruct.OuterSingleton;
	}

// ********** Begin ScriptStruct FBasicStatsStruct Property Definitions ****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasicStatsStruct, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Agility = { "Agility", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasicStatsStruct, Agility), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Agility_MetaData), NewProp_Agility_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Dexterity = { "Dexterity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasicStatsStruct, Dexterity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dexterity_MetaData), NewProp_Dexterity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Concentration = { "Concentration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasicStatsStruct, Concentration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Concentration_MetaData), NewProp_Concentration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Spell = { "Spell", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasicStatsStruct, Spell), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spell_MetaData), NewProp_Spell_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Endurance = { "Endurance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasicStatsStruct, Endurance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Endurance_MetaData), NewProp_Endurance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasicStatsStruct, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasicStatsStruct, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Magic = { "Magic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasicStatsStruct, Magic), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Magic_MetaData), NewProp_Magic_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewProp_Intelligence = { "Intelligence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBasicStatsStruct, Intelligence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intelligence_MetaData), NewProp_Intelligence_MetaData) };
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FBasicStatsStruct Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	nullptr,
	&NewStructOps,
	"BasicStatsStruct",
	Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::PropPointers),
	sizeof(FBasicStatsStruct),
	alignof(FBasicStatsStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBasicStatsStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBasicStatsStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBasicStatsStruct.InnerSingleton, Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FBasicStatsStruct.InnerSingleton);
}
// ********** End ScriptStruct FBasicStatsStruct ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_BasicStatsStruct_h__Script_TEMP2025_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBasicStatsStruct::StaticStruct, Z_Construct_UScriptStruct_FBasicStatsStruct_Statics::NewStructOps, TEXT("BasicStatsStruct"),&Z_Registration_Info_UScriptStruct_FBasicStatsStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBasicStatsStruct), 150690778U) },
	};
}; // Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_BasicStatsStruct_h__Script_TEMP2025_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_BasicStatsStruct_h__Script_TEMP2025_2652562672{
	TEXT("/Script/TEMP2025"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_BasicStatsStruct_h__Script_TEMP2025_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_BasicStatsStruct_h__Script_TEMP2025_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
