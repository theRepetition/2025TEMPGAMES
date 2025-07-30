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

// ********** Begin Cross Module References ********************************************************
TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EDefType();
TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EMyWorldType();
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerProfile();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPlayerProfile ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPlayerProfile;
class UScriptStruct* FPlayerProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPlayerProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerProfile, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("PlayerProfile"));
	}
	return Z_Registration_Info_UScriptStruct_FPlayerProfile.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPlayerProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "Category", "PlayerProfile" },
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "PlayerProfile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\x9d\xb4\xeb\xa6\x84\n" },
#endif
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\x9d\xb4\xeb\xa6\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "PlayerProfile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xeb\xa0\x88\xeb\xb2\xa8\n" },
#endif
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xeb\xa0\x88\xeb\xb2\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stamina_MetaData[] = {
		{ "Category", "PlayerProfile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb2\xb4\xeb\xa0\xa5\n" },
#endif
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb2\xb4\xeb\xa0\xa5" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHand_MetaData[] = {
		{ "Category", "PlayerProfile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9e\xa5\xeb\xb9\x84 \xec\x8a\xac\xeb\xa1\xaf (\xea\xb0\x9c\xeb\xb3\x84 \xeb\xb3\x80\xec\x88\x98 \xeb\xb0\xa9\xec\x8b\x9d)\n" },
#endif
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9e\xa5\xeb\xb9\x84 \xec\x8a\xac\xeb\xa1\xaf (\xea\xb0\x9c\xeb\xb3\x84 \xeb\xb3\x80\xec\x88\x98 \xeb\xb0\xa9\xec\x8b\x9d)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHand_MetaData[] = {
		{ "Category", "PlayerProfile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x98\xa4\xeb\xa5\xb8\xec\x86\x90 \xeb\xac\xb4\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xa5\xb8\xec\x86\x90 \xeb\xac\xb4\xea\xb8\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessoryL_MetaData[] = {
		{ "Category", "PlayerProfile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x99\xbc\xec\x86\x90 \xeb\xac\xb4\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x99\xbc\xec\x86\x90 \xeb\xac\xb4\xea\xb8\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccessoryR_MetaData[] = {
		{ "Category", "PlayerProfile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x99\xbc\xec\x86\x90 \xec\x9e\xa5\xec\x8b\xa0\xea\xb5\xac\n" },
#endif
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x99\xbc\xec\x86\x90 \xec\x9e\xa5\xec\x8b\xa0\xea\xb5\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Helmet_MetaData[] = {
		{ "Category", "PlayerProfile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x99\xbc\xec\x86\x90 \xec\x9e\xa5\xec\x8b\xa0\xea\xb5\xac\n" },
#endif
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x99\xbc\xec\x86\x90 \xec\x9e\xa5\xec\x8b\xa0\xea\xb5\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[] = {
		{ "Category", "PlayerProfile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x88\xac\xea\xb5\xac\n" },
#endif
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x88\xac\xea\xb5\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefType_MetaData[] = {
		{ "Category", "PlayerProfile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb0\x91\xec\x98\xb7\n" },
#endif
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb0\x91\xec\x98\xb7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "Category", "PlayerProfile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb0\xa9\xec\x96\xb4 \xed\x83\x80\xec\x9e\x85\n" },
#endif
		{ "ModuleRelativePath", "PlayerProfileStruct.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb0\xa9\xec\x96\xb4 \xed\x83\x80\xec\x9e\x85" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RightHand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccessoryL;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccessoryR;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Helmet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Armor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_World_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProfile, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProfile, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProfile, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProfile, Stamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stamina_MetaData), NewProp_Stamina_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_RightHand = { "RightHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProfile, RightHand), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHand_MetaData), NewProp_RightHand_MetaData) }; // 1286653442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProfile, LeftHand), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHand_MetaData), NewProp_LeftHand_MetaData) }; // 1286653442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_AccessoryL = { "AccessoryL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProfile, AccessoryL), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessoryL_MetaData), NewProp_AccessoryL_MetaData) }; // 1286653442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_AccessoryR = { "AccessoryR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProfile, AccessoryR), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccessoryR_MetaData), NewProp_AccessoryR_MetaData) }; // 1286653442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Helmet = { "Helmet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProfile, Helmet), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Helmet_MetaData), NewProp_Helmet_MetaData) }; // 1286653442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProfile, Armor), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Armor_MetaData), NewProp_Armor_MetaData) }; // 1286653442
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_DefType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_DefType = { "DefType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProfile, DefType), Z_Construct_UEnum_TEMP2025_EDefType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefType_MetaData), NewProp_DefType_MetaData) }; // 1764162322
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_World_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProfile, World), Z_Construct_UEnum_TEMP2025_EMyWorldType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) }; // 2277798217
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_RightHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_LeftHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_AccessoryL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_AccessoryR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Helmet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_Armor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_DefType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_DefType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_World_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerProfile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	nullptr,
	&NewStructOps,
	"PlayerProfile",
	Z_Construct_UScriptStruct_FPlayerProfile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProfile_Statics::PropPointers),
	sizeof(FPlayerProfile),
	alignof(FPlayerProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerProfile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerProfile()
{
	if (!Z_Registration_Info_UScriptStruct_FPlayerProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPlayerProfile.InnerSingleton, Z_Construct_UScriptStruct_FPlayerProfile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPlayerProfile.InnerSingleton;
}
// ********** End ScriptStruct FPlayerProfile ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_PlayerProfileStruct_h__Script_TEMP2025_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerProfile::StaticStruct, Z_Construct_UScriptStruct_FPlayerProfile_Statics::NewStructOps, TEXT("PlayerProfile"), &Z_Registration_Info_UScriptStruct_FPlayerProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerProfile), 857717974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_PlayerProfileStruct_h__Script_TEMP2025_3822921357(TEXT("/Script/TEMP2025"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_PlayerProfileStruct_h__Script_TEMP2025_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_PlayerProfileStruct_h__Script_TEMP2025_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
