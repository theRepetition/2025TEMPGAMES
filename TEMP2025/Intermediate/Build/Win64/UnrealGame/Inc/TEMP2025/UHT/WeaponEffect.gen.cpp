// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/WeaponEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponEffect() {}
// Cross Module References
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponEffect();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeaponEffect;
class UScriptStruct* FWeaponEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeaponEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeaponEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponEffect, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("WeaponEffect"));
	}
	return Z_Registration_Info_UScriptStruct_WeaponEffect.OuterSingleton;
}
template<> TEMP2025_API UScriptStruct* StaticStruct<FWeaponEffect>()
{
	return FWeaponEffect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeaponEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_M_attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_M_attribute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "WeaponEffect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeaponEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponEffect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeaponEffect_Statics::NewProp_M_attribute_MetaData[] = {
		{ "Category", "WeaponEffect" },
		{ "ModuleRelativePath", "WeaponEffect.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWeaponEffect_Statics::NewProp_M_attribute = { "M_attribute", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeaponEffect, M_attribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponEffect_Statics::NewProp_M_attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponEffect_Statics::NewProp_M_attribute_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeaponEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeaponEffect_Statics::NewProp_M_attribute,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		&NewStructOps,
		"WeaponEffect",
		sizeof(FWeaponEffect),
		alignof(FWeaponEffect),
		Z_Construct_UScriptStruct_FWeaponEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeaponEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeaponEffect()
	{
		if (!Z_Registration_Info_UScriptStruct_WeaponEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeaponEffect.InnerSingleton, Z_Construct_UScriptStruct_FWeaponEffect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeaponEffect.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponEffect_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponEffect_h_Statics::ScriptStructInfo[] = {
		{ FWeaponEffect::StaticStruct, Z_Construct_UScriptStruct_FWeaponEffect_Statics::NewStructOps, TEXT("WeaponEffect"), &Z_Registration_Info_UScriptStruct_WeaponEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponEffect), 752130271U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponEffect_h_2779652058(TEXT("/Script/TEMP2025"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponEffect_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponEffect_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
