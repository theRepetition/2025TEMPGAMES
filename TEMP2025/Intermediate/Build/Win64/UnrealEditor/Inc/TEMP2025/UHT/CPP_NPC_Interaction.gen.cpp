// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/Public/CPP_NPC_Interaction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_NPC_Interaction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TEMP2025_API UClass* Z_Construct_UClass_UCPP_NPC_Interaction();
	TEMP2025_API UClass* Z_Construct_UClass_UCPP_NPC_Interaction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	DEFINE_FUNCTION(UCPP_NPC_Interaction::execShowDialogue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowDialogue();
		P_NATIVE_END;
	}
	void UCPP_NPC_Interaction::StaticRegisterNativesUCPP_NPC_Interaction()
	{
		UClass* Class = UCPP_NPC_Interaction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowDialogue", &UCPP_NPC_Interaction::execShowDialogue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCPP_NPC_Interaction_ShowDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_NPC_Interaction_ShowDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/CPP_NPC_Interaction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_NPC_Interaction_ShowDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_NPC_Interaction, nullptr, "ShowDialogue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_NPC_Interaction_ShowDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_NPC_Interaction_ShowDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_NPC_Interaction_ShowDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_NPC_Interaction_ShowDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_NPC_Interaction);
	UClass* Z_Construct_UClass_UCPP_NPC_Interaction_NoRegister()
	{
		return UCPP_NPC_Interaction::StaticClass();
	}
	struct Z_Construct_UClass_UCPP_NPC_Interaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPP_NPC_Interaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCPP_NPC_Interaction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_NPC_Interaction_ShowDialogue, "ShowDialogue" }, // 1970605726
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_NPC_Interaction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CPP_NPC_Interaction.h" },
		{ "ModuleRelativePath", "Public/CPP_NPC_Interaction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPP_NPC_Interaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_NPC_Interaction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_NPC_Interaction_Statics::ClassParams = {
		&UCPP_NPC_Interaction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCPP_NPC_Interaction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_NPC_Interaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCPP_NPC_Interaction()
	{
		if (!Z_Registration_Info_UClass_UCPP_NPC_Interaction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_NPC_Interaction.OuterSingleton, Z_Construct_UClass_UCPP_NPC_Interaction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCPP_NPC_Interaction.OuterSingleton;
	}
	template<> TEMP2025_API UClass* StaticClass<UCPP_NPC_Interaction>()
	{
		return UCPP_NPC_Interaction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_NPC_Interaction);
	UCPP_NPC_Interaction::~UCPP_NPC_Interaction() {}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_CPP_NPC_Interaction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_CPP_NPC_Interaction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_NPC_Interaction, UCPP_NPC_Interaction::StaticClass, TEXT("UCPP_NPC_Interaction"), &Z_Registration_Info_UClass_UCPP_NPC_Interaction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_NPC_Interaction), 965495719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_CPP_NPC_Interaction_h_74438683(TEXT("/Script/TEMP2025"),
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_CPP_NPC_Interaction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_CPP_NPC_Interaction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
