// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/MyWorldType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyWorldType() {}

// ********** Begin Cross Module References ********************************************************
TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EMyWorldType();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMyWorldType **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMyWorldType;
static UEnum* EMyWorldType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMyWorldType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMyWorldType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TEMP2025_EMyWorldType, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("EMyWorldType"));
	}
	return Z_Registration_Info_UEnum_EMyWorldType.OuterSingleton;
}
template<> TEMP2025_NON_ATTRIBUTED_API UEnum* StaticEnum<EMyWorldType>()
{
	return EMyWorldType_StaticEnum();
}
struct Z_Construct_UEnum_TEMP2025_EMyWorldType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Camp.DisplayName", "Camp" },
		{ "Camp.Name", "EMyWorldType::Camp" },
		{ "Dungeon.DisplayName", "Dungeon" },
		{ "Dungeon.Name", "EMyWorldType::Dungeon" },
		{ "ModuleRelativePath", "MyWorldType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMyWorldType::Camp", (int64)EMyWorldType::Camp },
		{ "EMyWorldType::Dungeon", (int64)EMyWorldType::Dungeon },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_TEMP2025_EMyWorldType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TEMP2025_EMyWorldType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TEMP2025,
	nullptr,
	"EMyWorldType",
	"EMyWorldType",
	Z_Construct_UEnum_TEMP2025_EMyWorldType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EMyWorldType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EMyWorldType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TEMP2025_EMyWorldType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TEMP2025_EMyWorldType()
{
	if (!Z_Registration_Info_UEnum_EMyWorldType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMyWorldType.InnerSingleton, Z_Construct_UEnum_TEMP2025_EMyWorldType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMyWorldType.InnerSingleton;
}
// ********** End Enum EMyWorldType ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_MyWorldType_h__Script_TEMP2025_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMyWorldType_StaticEnum, TEXT("EMyWorldType"), &Z_Registration_Info_UEnum_EMyWorldType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3503576742U) },
	};
}; // Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_MyWorldType_h__Script_TEMP2025_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_MyWorldType_h__Script_TEMP2025_1889333841{
	TEXT("/Script/TEMP2025"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_MyWorldType_h__Script_TEMP2025_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_MyWorldType_h__Script_TEMP2025_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
