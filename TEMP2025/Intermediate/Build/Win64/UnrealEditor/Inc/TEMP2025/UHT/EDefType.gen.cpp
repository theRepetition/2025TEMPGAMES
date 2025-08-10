// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/EDefType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEDefType() {}

// ********** Begin Cross Module References ********************************************************
TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EDefType();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EDefType ******************************************************************
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
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDefType::normal", (int64)EDefType::normal },
		{ "EDefType::Block", (int64)EDefType::Block },
		{ "EDefType::TimedBlock", (int64)EDefType::TimedBlock },
		{ "EDefType::Parry", (int64)EDefType::Parry },
		{ "EDefType::Dodge", (int64)EDefType::Dodge },
		{ "EDefType::Blink", (int64)EDefType::Blink },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TEMP2025_EDefType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TEMP2025,
	nullptr,
	"EDefType",
	"EDefType",
	Z_Construct_UEnum_TEMP2025_EDefType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EDefType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EDefType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TEMP2025_EDefType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TEMP2025_EDefType()
{
	if (!Z_Registration_Info_UEnum_EDefType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDefType.InnerSingleton, Z_Construct_UEnum_TEMP2025_EDefType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDefType.InnerSingleton;
}
// ********** End Enum EDefType ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_EDefType_h__Script_TEMP2025_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDefType_StaticEnum, TEXT("EDefType"), &Z_Registration_Info_UEnum_EDefType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1764162322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_EDefType_h__Script_TEMP2025_1382555896(TEXT("/Script/TEMP2025"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_EDefType_h__Script_TEMP2025_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_EDefType_h__Script_TEMP2025_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
