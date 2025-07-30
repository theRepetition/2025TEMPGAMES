// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/EDefType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDefType() {}
// Cross Module References
	TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EDefType();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDefType;
	static UEnum* EDefType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDefType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDefType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TEMP2025_EDefType, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("EDefType"));
		}
		return Z_Registration_Info_UEnum_EDefType.OuterSingleton;
	}
	template<> TEMP2025_API UEnum* StaticEnum<EDefType>()
	{
		return EDefType_StaticEnum();
	}
	struct Z_Construct_UEnum_TEMP2025_EDefType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TEMP2025_EDefType_Statics::Enumerators[] = {
		{ "EDefType::normal", (int64)EDefType::normal },
		{ "EDefType::Block", (int64)EDefType::Block },
		{ "EDefType::TimedBlock", (int64)EDefType::TimedBlock },
		{ "EDefType::Parry", (int64)EDefType::Parry },
		{ "EDefType::Dodge", (int64)EDefType::Dodge },
		{ "EDefType::Blink", (int64)EDefType::Blink },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TEMP2025_EDefType_Statics::Enum_MetaDataParams[] = {
		{ "Blink.DisplayName", "\xec\xa0\x90\xeb\xa9\xb8" },
		{ "Blink.Name", "EDefType::Blink" },
		{ "Block.DisplayName", "\xeb\xa7\x89\xea\xb8\xb0" },
		{ "Block.Name", "EDefType::Block" },
		{ "BlueprintType", "true" },
		{ "Dodge.DisplayName", "\xed\x9a\x8c\xed\x94\xbc" },
		{ "Dodge.Name", "EDefType::Dodge" },
		{ "ModuleRelativePath", "EDefType.h" },
		{ "normal.DisplayName", "\xea\xb8\xb0\xeb\xb3\xb8" },
		{ "normal.Name", "EDefType::normal" },
		{ "Parry.DisplayName", "\xeb\xb0\x98\xea\xb2\xa9" },
		{ "Parry.Name", "EDefType::Parry" },
		{ "TimedBlock.DisplayName", "\xec\xa0\x95\xeb\xb0\x80 \xeb\xa7\x89\xea\xb8\xb0" },
		{ "TimedBlock.Name", "EDefType::TimedBlock" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TEMP2025_EDefType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		"EDefType",
		"EDefType",
		Z_Construct_UEnum_TEMP2025_EDefType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EDefType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TEMP2025_EDefType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EDefType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TEMP2025_EDefType()
	{
		if (!Z_Registration_Info_UEnum_EDefType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDefType.InnerSingleton, Z_Construct_UEnum_TEMP2025_EDefType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDefType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_EDefType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_EDefType_h_Statics::EnumInfo[] = {
		{ EDefType_StaticEnum, TEXT("EDefType"), &Z_Registration_Info_UEnum_EDefType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3157551089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_EDefType_h_2054737228(TEXT("/Script/TEMP2025"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_EDefType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_EDefType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
