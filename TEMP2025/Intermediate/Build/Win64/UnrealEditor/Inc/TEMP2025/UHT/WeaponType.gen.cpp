// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/WeaponType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponType() {}
// Cross Module References
	TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EWeaponType();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
	static UEnum* EWeaponType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TEMP2025_EWeaponType, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("EWeaponType"));
		}
		return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
	}
	template<> TEMP2025_API UEnum* StaticEnum<EWeaponType>()
	{
		return EWeaponType_StaticEnum();
	}
	struct Z_Construct_UEnum_TEMP2025_EWeaponType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TEMP2025_EWeaponType_Statics::Enumerators[] = {
		{ "EWeaponType::OneHandedSword", (int64)EWeaponType::OneHandedSword },
		{ "EWeaponType::TwoHandedSword", (int64)EWeaponType::TwoHandedSword },
		{ "EWeaponType::OneHandedAxe", (int64)EWeaponType::OneHandedAxe },
		{ "EWeaponType::TwoHandedAxe", (int64)EWeaponType::TwoHandedAxe },
		{ "EWeaponType::OneHandedMace", (int64)EWeaponType::OneHandedMace },
		{ "EWeaponType::TwoHandedMace", (int64)EWeaponType::TwoHandedMace },
		{ "EWeaponType::OneHandedPolearm", (int64)EWeaponType::OneHandedPolearm },
		{ "EWeaponType::TwoHandedPolearm", (int64)EWeaponType::TwoHandedPolearm },
		{ "EWeaponType::LongBow", (int64)EWeaponType::LongBow },
		{ "EWeaponType::ShortBow", (int64)EWeaponType::ShortBow },
		{ "EWeaponType::CrossBow", (int64)EWeaponType::CrossBow },
		{ "EWeaponType::HandCannon", (int64)EWeaponType::HandCannon },
		{ "EWeaponType::Staff", (int64)EWeaponType::Staff },
		{ "EWeaponType::Wand", (int64)EWeaponType::Wand },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TEMP2025_EWeaponType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CrossBow.DisplayName", "CrossBow" },
		{ "CrossBow.Name", "EWeaponType::CrossBow" },
		{ "HandCannon.DisplayName", "HandCannon" },
		{ "HandCannon.Name", "EWeaponType::HandCannon" },
		{ "LongBow.DisplayName", "LongBow" },
		{ "LongBow.Name", "EWeaponType::LongBow" },
		{ "ModuleRelativePath", "WeaponType.h" },
		{ "OneHandedAxe.DisplayName", "One-Handed Axe" },
		{ "OneHandedAxe.Name", "EWeaponType::OneHandedAxe" },
		{ "OneHandedMace.DisplayName", "One-Handed Mace" },
		{ "OneHandedMace.Name", "EWeaponType::OneHandedMace" },
		{ "OneHandedPolearm.DisplayName", "One-Handed Polearm" },
		{ "OneHandedPolearm.Name", "EWeaponType::OneHandedPolearm" },
		{ "OneHandedSword.DisplayName", "One-Handed Sword" },
		{ "OneHandedSword.Name", "EWeaponType::OneHandedSword" },
		{ "ShortBow.DisplayName", "ShortBow" },
		{ "ShortBow.Name", "EWeaponType::ShortBow" },
		{ "Staff.DisplayName", "Staff" },
		{ "Staff.Name", "EWeaponType::Staff" },
		{ "TwoHandedAxe.DisplayName", "Two-Handed Axe" },
		{ "TwoHandedAxe.Name", "EWeaponType::TwoHandedAxe" },
		{ "TwoHandedMace.DisplayName", "Two-Handed Mace" },
		{ "TwoHandedMace.Name", "EWeaponType::TwoHandedMace" },
		{ "TwoHandedPolearm.DisplayName", "Two-Handed Polearm" },
		{ "TwoHandedPolearm.Name", "EWeaponType::TwoHandedPolearm" },
		{ "TwoHandedSword.DisplayName", "Two-Handed Sword" },
		{ "TwoHandedSword.Name", "EWeaponType::TwoHandedSword" },
		{ "Wand.DisplayName", "Wand" },
		{ "Wand.Name", "EWeaponType::Wand" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TEMP2025_EWeaponType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		"EWeaponType",
		"EWeaponType",
		Z_Construct_UEnum_TEMP2025_EWeaponType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EWeaponType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TEMP2025_EWeaponType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EWeaponType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TEMP2025_EWeaponType()
	{
		if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_TEMP2025_EWeaponType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponType_h_Statics::EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 828962515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponType_h_3448075468(TEXT("/Script/TEMP2025"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
