// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/HandedType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandedType() {}
// Cross Module References
	TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EHandedType();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandedType;
	static UEnum* EHandedType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHandedType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHandedType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TEMP2025_EHandedType, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("EHandedType"));
		}
		return Z_Registration_Info_UEnum_EHandedType.OuterSingleton;
	}
	template<> TEMP2025_API UEnum* StaticEnum<EHandedType>()
	{
		return EHandedType_StaticEnum();
	}
	struct Z_Construct_UEnum_TEMP2025_EHandedType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TEMP2025_EHandedType_Statics::Enumerators[] = {
		{ "EHandedType::OneHanded", (int64)EHandedType::OneHanded },
		{ "EHandedType::TwoHanded", (int64)EHandedType::TwoHanded },
		{ "EHandedType::Range", (int64)EHandedType::Range },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TEMP2025_EHandedType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "HandedType.h" },
		{ "OneHanded.DisplayName", "One-HandedWeapon" },
		{ "OneHanded.Name", "EHandedType::OneHanded" },
		{ "Range.DisplayName", "RangeWeapon" },
		{ "Range.Name", "EHandedType::Range" },
		{ "TwoHanded.DisplayName", "Two-HandedWeapon" },
		{ "TwoHanded.Name", "EHandedType::TwoHanded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TEMP2025_EHandedType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		"EHandedType",
		"EHandedType",
		Z_Construct_UEnum_TEMP2025_EHandedType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EHandedType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TEMP2025_EHandedType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EHandedType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TEMP2025_EHandedType()
	{
		if (!Z_Registration_Info_UEnum_EHandedType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandedType.InnerSingleton, Z_Construct_UEnum_TEMP2025_EHandedType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHandedType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_HandedType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_HandedType_h_Statics::EnumInfo[] = {
		{ EHandedType_StaticEnum, TEXT("EHandedType"), &Z_Registration_Info_UEnum_EHandedType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1212494923U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_HandedType_h_3959886975(TEXT("/Script/TEMP2025"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_HandedType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_HandedType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
