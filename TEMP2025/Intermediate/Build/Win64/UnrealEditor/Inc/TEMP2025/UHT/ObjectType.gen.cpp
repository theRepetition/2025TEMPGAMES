// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/ObjectType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectType() {}
// Cross Module References
	TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EObjectType();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectType;
	static UEnum* EObjectType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EObjectType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EObjectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TEMP2025_EObjectType, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("EObjectType"));
		}
		return Z_Registration_Info_UEnum_EObjectType.OuterSingleton;
	}
	template<> TEMP2025_API UEnum* StaticEnum<EObjectType>()
	{
		return EObjectType_StaticEnum();
	}
	struct Z_Construct_UEnum_TEMP2025_EObjectType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TEMP2025_EObjectType_Statics::Enumerators[] = {
		{ "EObjectType::None", (int64)EObjectType::None },
		{ "EObjectType::Item", (int64)EObjectType::Item },
		{ "EObjectType::NPC", (int64)EObjectType::NPC },
		{ "EObjectType::Misc", (int64)EObjectType::Misc },
		{ "EObjectType::Door", (int64)EObjectType::Door },
		{ "EObjectType::IntracntionOBJ", (int64)EObjectType::IntracntionOBJ },
		{ "EObjectType::MovableOBJ", (int64)EObjectType::MovableOBJ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TEMP2025_EObjectType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Door.DisplayName", "Door" },
		{ "Door.Name", "EObjectType::Door" },
		{ "IntracntionOBJ.Comment", "//\xeb\xac\xb8, \xec\xa7\x80\xec\x97\xad \xec\x9d\xb4\xeb\x8f\x99\n" },
		{ "IntracntionOBJ.DisplayName", "InteractionOBJ" },
		{ "IntracntionOBJ.Name", "EObjectType::IntracntionOBJ" },
		{ "IntracntionOBJ.ToolTip", "\xeb\xac\xb8, \xec\xa7\x80\xec\x97\xad \xec\x9d\xb4\xeb\x8f\x99" },
		{ "Item.DisplayName", "Item" },
		{ "Item.Name", "EObjectType::Item" },
		{ "Misc.DisplayName", "Misc" },
		{ "Misc.Name", "EObjectType::Misc" },
		{ "ModuleRelativePath", "ObjectType.h" },
		{ "MovableOBJ.Comment", "//\xea\xb8\xb0\xed\x83\x80 \xec\x83\x81\xed\x98\xb8\xec\x9e\x91\xec\x9a\xa9 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c \xec\x98\xa4\xeb\xb8\x8c\xec\xa0\x9d\xed\x8a\xb8 ex)\xec\x9d\x98\xec\x9e\x90, \xec\xb9\xa8\xeb\x8d\xb0 \xeb\x93\xb1\n" },
		{ "MovableOBJ.DisplayName", "MovableOBJ" },
		{ "MovableOBJ.Name", "EObjectType::MovableOBJ" },
		{ "MovableOBJ.ToolTip", "\xea\xb8\xb0\xed\x83\x80 \xec\x83\x81\xed\x98\xb8\xec\x9e\x91\xec\x9a\xa9 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c \xec\x98\xa4\xeb\xb8\x8c\xec\xa0\x9d\xed\x8a\xb8 ex)\xec\x9d\x98\xec\x9e\x90, \xec\xb9\xa8\xeb\x8d\xb0 \xeb\x93\xb1" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EObjectType::None" },
		{ "NPC.DisplayName", "NPC" },
		{ "NPC.Name", "EObjectType::NPC" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TEMP2025_EObjectType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		"EObjectType",
		"EObjectType",
		Z_Construct_UEnum_TEMP2025_EObjectType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EObjectType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TEMP2025_EObjectType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EObjectType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TEMP2025_EObjectType()
	{
		if (!Z_Registration_Info_UEnum_EObjectType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectType.InnerSingleton, Z_Construct_UEnum_TEMP2025_EObjectType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EObjectType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ObjectType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ObjectType_h_Statics::EnumInfo[] = {
		{ EObjectType_StaticEnum, TEXT("EObjectType"), &Z_Registration_Info_UEnum_EObjectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3927084028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ObjectType_h_2995987031(TEXT("/Script/TEMP2025"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ObjectType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ObjectType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
