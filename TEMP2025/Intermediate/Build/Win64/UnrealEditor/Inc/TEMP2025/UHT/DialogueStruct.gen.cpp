// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/DialogueStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDialogueStruct() {}

// ********** Begin Cross Module References ********************************************************
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueData();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FDialogueData *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDialogueData;
class UScriptStruct* FDialogueData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDialogueData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDialogueData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueData, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("DialogueData"));
	}
	return Z_Registration_Info_UScriptStruct_FDialogueData.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDialogueData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueID_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "DialogueStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueText_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "DialogueStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCID_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "DialogueStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "DialogueStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogueText;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NPCID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Step;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueData, DialogueID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueID_MetaData), NewProp_DialogueID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueText = { "DialogueText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueData, DialogueText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueText_MetaData), NewProp_DialogueText_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_NPCID = { "NPCID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueData, NPCID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCID_MetaData), NewProp_NPCID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueData, Step), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Step_MetaData), NewProp_Step_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_NPCID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Step,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	nullptr,
	&NewStructOps,
	"DialogueData",
	Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers),
	sizeof(FDialogueData),
	alignof(FDialogueData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueData()
{
	if (!Z_Registration_Info_UScriptStruct_FDialogueData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDialogueData.InnerSingleton, Z_Construct_UScriptStruct_FDialogueData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDialogueData.InnerSingleton;
}
// ********** End ScriptStruct FDialogueData *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DialogueStruct_h__Script_TEMP2025_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogueData::StaticStruct, Z_Construct_UScriptStruct_FDialogueData_Statics::NewStructOps, TEXT("DialogueData"), &Z_Registration_Info_UScriptStruct_FDialogueData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueData), 2245720273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DialogueStruct_h__Script_TEMP2025_2738712409(TEXT("/Script/TEMP2025"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DialogueStruct_h__Script_TEMP2025_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DialogueStruct_h__Script_TEMP2025_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
