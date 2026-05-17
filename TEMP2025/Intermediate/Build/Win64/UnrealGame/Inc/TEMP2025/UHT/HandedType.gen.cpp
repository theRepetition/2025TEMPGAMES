// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/HandedType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHandedType() {}

// ********** Begin Cross Module References ********************************************************
TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EHandedType();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EHandedType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandedType;
static UEnum* EHandedType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHandedType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHandedType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TEMP2025_EHandedType, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("EHandedType"));
	}
	return Z_Registration_Info_UEnum_EHandedType.OuterSingleton;
}
template<> TEMP2025_NON_ATTRIBUTED_API UEnum* StaticEnum<EHandedType>()
{
	return EHandedType_StaticEnum();
}
struct Z_Construct_UEnum_TEMP2025_EHandedType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "HandedType.h" },
		{ "OneHanded.DisplayName", "One-HandedWeapon" },
		{ "OneHanded.Name", "EHandedType::OneHanded" },
		{ "Range.DisplayName", "RangeWeapon" },
		{ "Range.Name", "EHandedType::Range" },
		{ "TwoHanded.DisplayName", "Two-HandedWeapon" },
		{ "TwoHanded.Name", "EHandedType::TwoHanded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHandedType::OneHanded", (int64)EHandedType::OneHanded },
		{ "EHandedType::TwoHanded", (int64)EHandedType::TwoHanded },
		{ "EHandedType::Range", (int64)EHandedType::Range },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_TEMP2025_EHandedType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TEMP2025_EHandedType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TEMP2025,
	nullptr,
	"EHandedType",
	"EHandedType",
	Z_Construct_UEnum_TEMP2025_EHandedType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EHandedType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EHandedType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TEMP2025_EHandedType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TEMP2025_EHandedType()
{
	if (!Z_Registration_Info_UEnum_EHandedType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandedType.InnerSingleton, Z_Construct_UEnum_TEMP2025_EHandedType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHandedType.InnerSingleton;
}
// ********** End Enum EHandedType *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_HandedType_h__Script_TEMP2025_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHandedType_StaticEnum, TEXT("EHandedType"), &Z_Registration_Info_UEnum_EHandedType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1069932401U) },
	};
}; // Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_HandedType_h__Script_TEMP2025_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_HandedType_h__Script_TEMP2025_1251032599{
	TEXT("/Script/TEMP2025"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_HandedType_h__Script_TEMP2025_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_HandedType_h__Script_TEMP2025_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
