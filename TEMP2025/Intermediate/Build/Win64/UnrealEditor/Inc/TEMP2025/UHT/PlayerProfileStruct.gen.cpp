// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/PlayerProfileStruct.h"
#include "TEMP2025/ItemStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerProfileStruct() {}
// Cross Module References
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerProfile();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerProfile;
class UScriptStruct* FPlayerProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerProfile, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("PlayerProfile"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerProfile.OuterSingleton;
}
template<> TEMP2025_API UScriptStruct* StaticStruct<FPlayerProfile>()
{
	return FPlayerProfile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlayerProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Accessory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Accessory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Helmet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Helmet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Armor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerProfile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "PlayerProfile" },
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerProfile, PlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "PlayerProfile" },
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\x9d\xb4\xeb\xa6\x84\n" },
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\x9d\xb4\xeb\xa6\x84" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerProfile, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "PlayerProfile" },
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xeb\xa0\x88\xeb\xb2\xa8\n" },
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xeb\xa0\x88\xeb\xb2\xa8" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerProfile, Health), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Stamina_MetaData[] = {
		{ "Category", "PlayerProfile" },
		{ "Comment", "// \xec\xb2\xb4\xeb\xa0\xa5\n" },
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerProfile, Stamina), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Stamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Stamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_RightHand_MetaData[] = {
		{ "Category", "PlayerProfile" },
		{ "Comment", "// \xec\x9e\xa5\xeb\xb9\x84 \xec\x8a\xac\xeb\xa1\xaf (\xea\xb0\x9c\xeb\xb3\x84 \xeb\xb3\x80\xec\x88\x98 \xeb\xb0\xa9\xec\x8b\x9d)\n" },
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
		{ "ToolTip", "\xec\x9e\xa5\xeb\xb9\x84 \xec\x8a\xac\xeb\xa1\xaf (\xea\xb0\x9c\xeb\xb3\x84 \xeb\xb3\x80\xec\x88\x98 \xeb\xb0\xa9\xec\x8b\x9d)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_RightHand = { "RightHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerProfile, RightHand), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_RightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_RightHand_MetaData)) }; // 3367904852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_LeftHand_MetaData[] = {
		{ "Category", "PlayerProfile" },
		{ "Comment", "// \xec\x98\xa4\xeb\xa5\xb8\xec\x86\x90 \xeb\xac\xb4\xea\xb8\xb0\n" },
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
		{ "ToolTip", "\xec\x98\xa4\xeb\xa5\xb8\xec\x86\x90 \xeb\xac\xb4\xea\xb8\xb0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerProfile, LeftHand), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_LeftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_LeftHand_MetaData)) }; // 3367904852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Accessory_MetaData[] = {
		{ "Category", "PlayerProfile" },
		{ "Comment", "// \xec\x99\xbc\xec\x86\x90 \xeb\xac\xb4\xea\xb8\xb0\n" },
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
		{ "ToolTip", "\xec\x99\xbc\xec\x86\x90 \xeb\xac\xb4\xea\xb8\xb0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Accessory = { "Accessory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerProfile, Accessory), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Accessory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Accessory_MetaData)) }; // 3367904852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Helmet_MetaData[] = {
		{ "Category", "PlayerProfile" },
		{ "Comment", "// \xec\x9e\xa5\xec\x8b\xa0\xea\xb5\xac\n" },
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
		{ "ToolTip", "\xec\x9e\xa5\xec\x8b\xa0\xea\xb5\xac" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Helmet = { "Helmet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerProfile, Helmet), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Helmet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Helmet_MetaData)) }; // 3367904852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "PlayerProfile" },
		{ "Comment", "// \xed\x88\xac\xea\xb5\xac\n" },
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
		{ "ToolTip", "\xed\x88\xac\xea\xb5\xac" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlayerProfile, Armor), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Armor_MetaData)) }; // 3367904852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_RightHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_LeftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Accessory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Helmet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Armor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		&NewStructOps,
		"PlayerProfile",
		sizeof(FPlayerProfile),
		alignof(FPlayerProfile),
		Z_Construct_UScriptStruct_FPlayerProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerProfile()
	{
		if (!Z_Registration_Info_UScriptStruct_PlayerProfile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerProfile.InnerSingleton, Z_Construct_UScriptStruct_FPlayerProfile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlayerProfile.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_PlayerProfileStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_PlayerProfileStruct_h_Statics::ScriptStructInfo[] = {
		{ FPlayerProfile::StaticStruct, Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewStructOps, TEXT("PlayerProfile"), &Z_Registration_Info_UScriptStruct_PlayerProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerProfile), 3071255324U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_PlayerProfileStruct_h_749123534(TEXT("/Script/TEMP2025"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_PlayerProfileStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_PlayerProfileStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
