// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/IsEquipped.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsEquipped() {}
// Cross Module References
	TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EIsEquipped();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIsEquipped;
	static UEnum* EIsEquipped_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EIsEquipped.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EIsEquipped.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TEMP2025_EIsEquipped, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("EIsEquipped"));
		}
		return Z_Registration_Info_UEnum_EIsEquipped.OuterSingleton;
	}
	template<> TEMP2025_API UEnum* StaticEnum<EIsEquipped>()
	{
		return EIsEquipped_StaticEnum();
	}
	struct Z_Construct_UEnum_TEMP2025_EIsEquipped_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TEMP2025_EIsEquipped_Statics::Enumerators[] = {
		{ "EIsEquipped::None", (int64)EIsEquipped::None },
		{ "EIsEquipped::Right", (int64)EIsEquipped::Right },
		{ "EIsEquipped::Left", (int64)EIsEquipped::Left },
		{ "EIsEquipped::TwoHanded", (int64)EIsEquipped::TwoHanded },
		{ "EIsEquipped::Armor", (int64)EIsEquipped::Armor },
		{ "EIsEquipped::Helm", (int64)EIsEquipped::Helm },
		{ "EIsEquipped::ACC", (int64)EIsEquipped::ACC },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TEMP2025_EIsEquipped_Statics::Enum_MetaDataParams[] = {
		{ "ACC.DisplayName", "ACC" },
		{ "ACC.Name", "EIsEquipped::ACC" },
		{ "Armor.DisplayName", "ARMOR" },
		{ "Armor.Name", "EIsEquipped::Armor" },
		{ "BlueprintType", "true" },
		{ "Helm.DisplayName", "HELM" },
		{ "Helm.Name", "EIsEquipped::Helm" },
		{ "Left.DisplayName", "LEFT" },
		{ "Left.Name", "EIsEquipped::Left" },
		{ "ModuleRelativePath", "IsEquipped.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EIsEquipped::None" },
		{ "Right.DisplayName", "RIGHT" },
		{ "Right.Name", "EIsEquipped::Right" },
		{ "TwoHanded.DisplayName", "TWOHANDED" },
		{ "TwoHanded.Name", "EIsEquipped::TwoHanded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TEMP2025_EIsEquipped_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		"EIsEquipped",
		"EIsEquipped",
		Z_Construct_UEnum_TEMP2025_EIsEquipped_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EIsEquipped_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TEMP2025_EIsEquipped_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EIsEquipped_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TEMP2025_EIsEquipped()
	{
		if (!Z_Registration_Info_UEnum_EIsEquipped.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIsEquipped.InnerSingleton, Z_Construct_UEnum_TEMP2025_EIsEquipped_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EIsEquipped.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_IsEquipped_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_IsEquipped_h_Statics::EnumInfo[] = {
		{ EIsEquipped_StaticEnum, TEXT("EIsEquipped"), &Z_Registration_Info_UEnum_EIsEquipped, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 547587403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_IsEquipped_h_1030895825(TEXT("/Script/TEMP2025"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_IsEquipped_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_IsEquipped_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
