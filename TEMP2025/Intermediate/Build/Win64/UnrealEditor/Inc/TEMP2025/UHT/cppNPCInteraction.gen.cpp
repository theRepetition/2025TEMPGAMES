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
	TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EPlayerRelation();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerRelation;
	static UEnum* EPlayerRelation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerRelation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerRelation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TEMP2025_EPlayerRelation, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("EPlayerRelation"));
		}
		return Z_Registration_Info_UEnum_EPlayerRelation.OuterSingleton;
	}
	template<> TEMP2025_API UEnum* StaticEnum<EPlayerRelation>()
	{
		return EPlayerRelation_StaticEnum();
	}
	struct Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::Enumerators[] = {
		{ "EPlayerRelation::Neutral", (int64)EPlayerRelation::Neutral },
		{ "EPlayerRelation::Friendly", (int64)EPlayerRelation::Friendly },
		{ "EPlayerRelation::Hostile", (int64)EPlayerRelation::Hostile },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// \n" },
		{ "Friendly.Comment", "// \n" },
		{ "Friendly.DisplayName", "Friendly" },
		{ "Friendly.Name", "EPlayerRelation::Friendly" },
		{ "Hostile.Comment", "// \n" },
		{ "Hostile.DisplayName", "Hostile" },
		{ "Hostile.Name", "EPlayerRelation::Hostile" },
		{ "ModuleRelativePath", "cppNPCInteraction.h" },
		{ "Neutral.Comment", "// \n" },
		{ "Neutral.DisplayName", "Neutral" },
		{ "Neutral.Name", "EPlayerRelation::Neutral" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		"EPlayerRelation",
		"EPlayerRelation",
		Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TEMP2025_EPlayerRelation()
	{
		if (!Z_Registration_Info_UEnum_EPlayerRelation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerRelation.InnerSingleton, Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerRelation.InnerSingleton;
	}
	DEFINE_FUNCTION(UcppNPCInteraction::execProcessPlayerState)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TestString);
		P_GET_ENUM(EPlayerRelation,Z_Param_PlayerRelation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProcessPlayerState(Z_Param_PlayerName,Z_Param_TestString,EPlayerRelation(Z_Param_PlayerRelation));
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
			EPlayerRelation PlayerRelation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerRelation_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerRelation;
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerRelation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerRelation = { "PlayerRelation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppNPCInteraction_eventProcessPlayerState_Parms, PlayerRelation), Z_Construct_UEnum_TEMP2025_EPlayerRelation, METADATA_PARAMS(nullptr, 0) }; // 612692160
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_TestString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerRelation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerRelation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "cppNPCInteraction.h" },
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
		{ &Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState, "ProcessPlayerState" }, // 423993499
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics::EnumInfo[] = {
		{ EPlayerRelation_StaticEnum, TEXT("EPlayerRelation"), &Z_Registration_Info_UEnum_EPlayerRelation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 612692160U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UcppNPCInteraction, UcppNPCInteraction::StaticClass, TEXT("UcppNPCInteraction"), &Z_Registration_Info_UClass_UcppNPCInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppNPCInteraction), 4071460586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_4120397977(TEXT("/Script/TEMP2025"),
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
