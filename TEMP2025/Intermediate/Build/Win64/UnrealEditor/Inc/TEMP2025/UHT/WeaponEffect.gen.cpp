// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/WeaponEffect.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeWeaponEffect() {}

// ********** Begin Cross Module References ********************************************************
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponEffect();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWeaponEffect *****************************************************
struct Z_Construct_UScriptStruct_FWeaponEffect_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FWeaponEffect); }
	static inline consteval int16 GetStructAlignment() { return alignof(FWeaponEffect); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WeaponEffect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_M_attribute_MetaData[] = {
		{ "Category", "WeaponEffect" },
		{ "ModuleRelativePath", "WeaponEffect.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FWeaponEffect constinit property declarations *********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_M_attribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FWeaponEffect constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponEffect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FWeaponEffect_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWeaponEffect;
class UScriptStruct* FWeaponEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWeaponEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponEffect, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("WeaponEffect"));
	}
	return Z_Registration_Info_UScriptStruct_FWeaponEffect.OuterSingleton;
	}

// ********** Begin ScriptStruct FWeaponEffect Property Definitions ********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeaponEffect_Statics::NewProp_M_attribute = { "M_attribute", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWeaponEffect, M_attribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_M_attribute_MetaData), NewProp_M_attribute_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponEffect_Statics::NewProp_M_attribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponEffect_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FWeaponEffect Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponEffect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	nullptr,
	&NewStructOps,
	"WeaponEffect",
	Z_Construct_UScriptStruct_FWeaponEffect_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponEffect_Statics::PropPointers),
	sizeof(FWeaponEffect),
	alignof(FWeaponEffect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponEffect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponEffect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponEffect()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponEffect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWeaponEffect.InnerSingleton, Z_Construct_UScriptStruct_FWeaponEffect_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FWeaponEffect.InnerSingleton);
}
// ********** End ScriptStruct FWeaponEffect *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponEffect_h__Script_TEMP2025_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponEffect::StaticStruct, Z_Construct_UScriptStruct_FWeaponEffect_Statics::NewStructOps, TEXT("WeaponEffect"),&Z_Registration_Info_UScriptStruct_FWeaponEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponEffect), 719938372U) },
	};
}; // Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponEffect_h__Script_TEMP2025_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponEffect_h__Script_TEMP2025_3617885691{
	TEXT("/Script/TEMP2025"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponEffect_h__Script_TEMP2025_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponEffect_h__Script_TEMP2025_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
