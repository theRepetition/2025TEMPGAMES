// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/CostType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCostType() {}
// Cross Module References
	TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_ECostType();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECostType;
	static UEnum* ECostType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECostType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECostType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TEMP2025_ECostType, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("ECostType"));
		}
		return Z_Registration_Info_UEnum_ECostType.OuterSingleton;
	}
	template<> TEMP2025_API UEnum* StaticEnum<ECostType>()
	{
		return ECostType_StaticEnum();
	}
	struct Z_Construct_UEnum_TEMP2025_ECostType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TEMP2025_ECostType_Statics::Enumerators[] = {
		{ "ECostType::Stamina", (int64)ECostType::Stamina },
		{ "ECostType::Mana", (int64)ECostType::Mana },
		{ "ECostType::Ammo", (int64)ECostType::Ammo },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TEMP2025_ECostType_Statics::Enum_MetaDataParams[] = {
		{ "Ammo.DisplayName", "Ammo" },
		{ "Ammo.Name", "ECostType::Ammo" },
		{ "BlueprintType", "true" },
		{ "Mana.DisplayName", "Mana" },
		{ "Mana.Name", "ECostType::Mana" },
		{ "ModuleRelativePath", "CostType.h" },
		{ "Stamina.DisplayName", "Stamina" },
		{ "Stamina.Name", "ECostType::Stamina" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TEMP2025_ECostType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		"ECostType",
		"ECostType",
		Z_Construct_UEnum_TEMP2025_ECostType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_ECostType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TEMP2025_ECostType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_ECostType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TEMP2025_ECostType()
	{
		if (!Z_Registration_Info_UEnum_ECostType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECostType.InnerSingleton, Z_Construct_UEnum_TEMP2025_ECostType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECostType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_CostType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_CostType_h_Statics::EnumInfo[] = {
		{ ECostType_StaticEnum, TEXT("ECostType"), &Z_Registration_Info_UEnum_ECostType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 902700350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_CostType_h_406603192(TEXT("/Script/TEMP2025"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_CostType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_CostType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
