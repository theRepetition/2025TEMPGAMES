// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/cppNPCInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecppNPCInteraction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TEMP2025_API UClass* Z_Construct_UClass_UcppNPCInteraction();
	TEMP2025_API UClass* Z_Construct_UClass_UcppNPCInteraction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	DEFINE_FUNCTION(UcppNPCInteraction::execProcessPlayerState)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TestString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessPlayerState(Z_Param_PlayerName,Z_Param_TestString);
		P_NATIVE_END;
	}
	void UcppNPCInteraction::StaticRegisterNativesUcppNPCInteraction()
	{
		UClass* Class = UcppNPCInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ProcessPlayerState", &UcppNPCInteraction::execProcessPlayerState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics
	{
		struct cppNPCInteraction_eventProcessPlayerState_Parms
		{
			FString PlayerName;
			FString TestString;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppNPCInteraction_eventProcessPlayerState_Parms, PlayerName), METADATA_PARAMS(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_TestString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_TestString = { "TestString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppNPCInteraction_eventProcessPlayerState_Parms, TestString), METADATA_PARAMS(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_TestString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_TestString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_TestString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
		{ "ModuleRelativePath", "cppNPCInteraction.h" },
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcppNPCInteraction, nullptr, "ProcessPlayerState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::cppNPCInteraction_eventProcessPlayerState_Parms), Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UcppNPCInteraction);
	UClass* Z_Construct_UClass_UcppNPCInteraction_NoRegister()
	{
		return UcppNPCInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UcppNPCInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UcppNPCInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UcppNPCInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState, "ProcessPlayerState" }, // 183406315
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UcppNPCInteraction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "cppNPCInteraction.h" },
		{ "ModuleRelativePath", "cppNPCInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UcppNPCInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcppNPCInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UcppNPCInteraction_Statics::ClassParams = {
		&UcppNPCInteraction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UcppNPCInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UcppNPCInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UcppNPCInteraction()
	{
		if (!Z_Registration_Info_UClass_UcppNPCInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UcppNPCInteraction.OuterSingleton, Z_Construct_UClass_UcppNPCInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UcppNPCInteraction.OuterSingleton;
	}
	template<> TEMP2025_API UClass* StaticClass<UcppNPCInteraction>()
	{
		return UcppNPCInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UcppNPCInteraction);
	UcppNPCInteraction::~UcppNPCInteraction() {}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UcppNPCInteraction, UcppNPCInteraction::StaticClass, TEXT("UcppNPCInteraction"), &Z_Registration_Info_UClass_UcppNPCInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppNPCInteraction), 520592046U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_3795326023(TEXT("/Script/TEMP2025"),
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
