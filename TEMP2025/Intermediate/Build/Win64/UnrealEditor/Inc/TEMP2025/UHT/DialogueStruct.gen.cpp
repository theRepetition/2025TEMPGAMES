// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/DialogueStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueStruct() {}
// Cross Module References
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueData();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueData;
class UScriptStruct* FDialogueData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueData, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("DialogueData"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueData.OuterSingleton;
}
template<> TEMP2025_API UScriptStruct* StaticStruct<FDialogueData>()
{
	return FDialogueData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogueData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DialogueText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NPCID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Step;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "DialogueStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueID_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "DialogueStruct.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueData, DialogueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueText_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "DialogueStruct.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueText = { "DialogueText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueData, DialogueText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_NPCID_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "DialogueStruct.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_NPCID = { "NPCID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueData, NPCID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_NPCID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_NPCID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Step_MetaData[] = {
		{ "Category", "DialogueData" },
		{ "ModuleRelativePath", "DialogueStruct.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueData, Step), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Step_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Step_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_DialogueText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_NPCID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Step,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		&NewStructOps,
		"DialogueData",
		sizeof(FDialogueData),
		alignof(FDialogueData),
		Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueData()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogueData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueData.InnerSingleton, Z_Construct_UScriptStruct_FDialogueData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogueData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DialogueStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DialogueStruct_h_Statics::ScriptStructInfo[] = {
		{ FDialogueData::StaticStruct, Z_Construct_UScriptStruct_FDialogueData_Statics::NewStructOps, TEXT("DialogueData"), &Z_Registration_Info_UScriptStruct_DialogueData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueData), 3046525046U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DialogueStruct_h_2650123961(TEXT("/Script/TEMP2025"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DialogueStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DialogueStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
