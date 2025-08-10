// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/EAttackDirection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAttackDirection() {}
// Cross Module References
	TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EAttackDirection();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttackDirection;
	static UEnum* EAttackDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAttackDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAttackDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TEMP2025_EAttackDirection, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("EAttackDirection"));
		}
		return Z_Registration_Info_UEnum_EAttackDirection.OuterSingleton;
	}
	template<> TEMP2025_API UEnum* StaticEnum<EAttackDirection>()
	{
		return EAttackDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_TEMP2025_EAttackDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TEMP2025_EAttackDirection_Statics::Enumerators[] = {
		{ "EAttackDirection::None", (int64)EAttackDirection::None },
		{ "EAttackDirection::Left", (int64)EAttackDirection::Left },
		{ "EAttackDirection::Right", (int64)EAttackDirection::Right },
		{ "EAttackDirection::Up", (int64)EAttackDirection::Up },
		{ "EAttackDirection::Med", (int64)EAttackDirection::Med },
		{ "EAttackDirection::Back", (int64)EAttackDirection::Back },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TEMP2025_EAttackDirection_Statics::Enum_MetaDataParams[] = {
		{ "Back.DisplayName", "Back" },
		{ "Back.Name", "EAttackDirection::Back" },
		{ "BlueprintType", "true" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EAttackDirection::Left" },
		{ "Med.DisplayName", "Med" },
		{ "Med.Name", "EAttackDirection::Med" },
		{ "ModuleRelativePath", "EAttackDirection.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAttackDirection::None" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EAttackDirection::Right" },
		{ "Up.DisplayName", "Up" },
		{ "Up.Name", "EAttackDirection::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TEMP2025_EAttackDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		"EAttackDirection",
		"EAttackDirection",
		Z_Construct_UEnum_TEMP2025_EAttackDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EAttackDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TEMP2025_EAttackDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EAttackDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TEMP2025_EAttackDirection()
	{
		if (!Z_Registration_Info_UEnum_EAttackDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttackDirection.InnerSingleton, Z_Construct_UEnum_TEMP2025_EAttackDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAttackDirection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_EAttackDirection_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_EAttackDirection_h_Statics::EnumInfo[] = {
		{ EAttackDirection_StaticEnum, TEXT("EAttackDirection"), &Z_Registration_Info_UEnum_EAttackDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3642086813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_EAttackDirection_h_423056548(TEXT("/Script/TEMP2025"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_EAttackDirection_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_EAttackDirection_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
