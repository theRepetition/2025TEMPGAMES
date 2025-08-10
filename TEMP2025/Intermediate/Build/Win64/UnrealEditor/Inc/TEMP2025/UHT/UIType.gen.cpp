// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/UIType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIType() {}
// Cross Module References
	TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EUIType();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUIType;
	static UEnum* EUIType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUIType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUIType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TEMP2025_EUIType, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("EUIType"));
		}
		return Z_Registration_Info_UEnum_EUIType.OuterSingleton;
	}
	template<> TEMP2025_API UEnum* StaticEnum<EUIType>()
	{
		return EUIType_StaticEnum();
	}
	struct Z_Construct_UEnum_TEMP2025_EUIType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TEMP2025_EUIType_Statics::Enumerators[] = {
		{ "EUIType::None", (int64)EUIType::None },
		{ "EUIType::Map", (int64)EUIType::Map },
		{ "EUIType::Inventory", (int64)EUIType::Inventory },
		{ "EUIType::Menu", (int64)EUIType::Menu },
		{ "EUIType::Profile", (int64)EUIType::Profile },
		{ "EUIType::Quest", (int64)EUIType::Quest },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TEMP2025_EUIType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Inventory.DisplayName", "Inventory" },
		{ "Inventory.Name", "EUIType::Inventory" },
		{ "Map.DisplayName", "Map" },
		{ "Map.Name", "EUIType::Map" },
		{ "Menu.DisplayName", "Menu" },
		{ "Menu.Name", "EUIType::Menu" },
		{ "ModuleRelativePath", "UIType.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EUIType::None" },
		{ "Profile.DisplayName", "Profile" },
		{ "Profile.Name", "EUIType::Profile" },
		{ "Quest.DisplayName", "Quest" },
		{ "Quest.Name", "EUIType::Quest" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TEMP2025_EUIType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		"EUIType",
		"EUIType",
		Z_Construct_UEnum_TEMP2025_EUIType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EUIType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TEMP2025_EUIType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EUIType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TEMP2025_EUIType()
	{
		if (!Z_Registration_Info_UEnum_EUIType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUIType.InnerSingleton, Z_Construct_UEnum_TEMP2025_EUIType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUIType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_UIType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_UIType_h_Statics::EnumInfo[] = {
		{ EUIType_StaticEnum, TEXT("EUIType"), &Z_Registration_Info_UEnum_EUIType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1574519976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_UIType_h_290085846(TEXT("/Script/TEMP2025"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_UIType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_UIType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
