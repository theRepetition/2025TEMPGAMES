// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/cppStatsCalcComponent.h"
#include "TEMP2025/Public/BasicStatsStruct.h"
#include "TEMP2025/Public/FinalStatsStruct.h"
#include "TEMP2025/WeaponStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecppStatsCalcComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TEMP2025_API UClass* Z_Construct_UClass_UcppStatsCalcComponent();
	TEMP2025_API UClass* Z_Construct_UClass_UcppStatsCalcComponent_NoRegister();
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FBasicStatsStruct();
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FFinalStatsStruct();
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	DEFINE_FUNCTION(UcppStatsCalcComponent::execCalcFinalStats)
	{
		P_GET_STRUCT_REF(FBasicStatsStruct,Z_Param_Out_BaseStats);
		P_GET_STRUCT_REF(FWeaponData,Z_Param_Out_weaponS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFinalStatsStruct*)Z_Param__Result=P_THIS->CalcFinalStats(Z_Param_Out_BaseStats,Z_Param_Out_weaponS);
		P_NATIVE_END;
	}
	void UcppStatsCalcComponent::StaticRegisterNativesUcppStatsCalcComponent()
	{
		UClass* Class = UcppStatsCalcComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcFinalStats", &UcppStatsCalcComponent::execCalcFinalStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics
	{
		struct cppStatsCalcComponent_eventCalcFinalStats_Parms
		{
			FBasicStatsStruct BaseStats;
			FWeaponData weaponS;
			FFinalStatsStruct ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseStats_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseStats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weaponS_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_weaponS;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_BaseStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_BaseStats = { "BaseStats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppStatsCalcComponent_eventCalcFinalStats_Parms, BaseStats), Z_Construct_UScriptStruct_FBasicStatsStruct, METADATA_PARAMS(Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_BaseStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_BaseStats_MetaData)) }; // 4259169509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_weaponS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_weaponS = { "weaponS", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppStatsCalcComponent_eventCalcFinalStats_Parms, weaponS), Z_Construct_UScriptStruct_FWeaponData, METADATA_PARAMS(Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_weaponS_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_weaponS_MetaData)) }; // 1376275907
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppStatsCalcComponent_eventCalcFinalStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FFinalStatsStruct, METADATA_PARAMS(nullptr, 0) }; // 1230019215
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_BaseStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_weaponS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Char" },
		{ "ModuleRelativePath", "cppStatsCalcComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcppStatsCalcComponent, nullptr, "CalcFinalStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::cppStatsCalcComponent_eventCalcFinalStats_Parms), Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UcppStatsCalcComponent);
	UClass* Z_Construct_UClass_UcppStatsCalcComponent_NoRegister()
	{
		return UcppStatsCalcComponent::StaticClass();
	}
	struct Z_Construct_UClass_UcppStatsCalcComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UcppStatsCalcComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UcppStatsCalcComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats, "CalcFinalStats" }, // 129470242
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UcppStatsCalcComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "cppStatsCalcComponent.h" },
		{ "ModuleRelativePath", "cppStatsCalcComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UcppStatsCalcComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcppStatsCalcComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UcppStatsCalcComponent_Statics::ClassParams = {
		&UcppStatsCalcComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UcppStatsCalcComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UcppStatsCalcComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UcppStatsCalcComponent()
	{
		if (!Z_Registration_Info_UClass_UcppStatsCalcComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UcppStatsCalcComponent.OuterSingleton, Z_Construct_UClass_UcppStatsCalcComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UcppStatsCalcComponent.OuterSingleton;
	}
	template<> TEMP2025_API UClass* StaticClass<UcppStatsCalcComponent>()
	{
		return UcppStatsCalcComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UcppStatsCalcComponent);
	UcppStatsCalcComponent::~UcppStatsCalcComponent() {}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppStatsCalcComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppStatsCalcComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UcppStatsCalcComponent, UcppStatsCalcComponent::StaticClass, TEXT("UcppStatsCalcComponent"), &Z_Registration_Info_UClass_UcppStatsCalcComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppStatsCalcComponent), 2190231615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppStatsCalcComponent_h_1081043111(TEXT("/Script/TEMP2025"),
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppStatsCalcComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppStatsCalcComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
