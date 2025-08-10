// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/cppStatsCalcComponent.h"
#include "BasicStatsStruct.h"
#include "FinalStatsStruct.h"
#include "TEMP2025/WeaponStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodecppStatsCalcComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TEMP2025_API UClass* Z_Construct_UClass_UcppStatsCalcComponent();
TEMP2025_API UClass* Z_Construct_UClass_UcppStatsCalcComponent_NoRegister();
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FBasicStatsStruct();
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FFinalStatsStruct();
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UcppStatsCalcComponent Function CalcFinalStats ***************************
struct Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics
{
	struct cppStatsCalcComponent_eventCalcFinalStats_Parms
	{
		FBasicStatsStruct BaseStats;
		FWeaponData weaponS;
		FFinalStatsStruct ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Char" },
		{ "ModuleRelativePath", "cppStatsCalcComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseStats_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_weaponS_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseStats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_weaponS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_BaseStats = { "BaseStats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppStatsCalcComponent_eventCalcFinalStats_Parms, BaseStats), Z_Construct_UScriptStruct_FBasicStatsStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseStats_MetaData), NewProp_BaseStats_MetaData) }; // 3135257441
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_weaponS = { "weaponS", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppStatsCalcComponent_eventCalcFinalStats_Parms, weaponS), Z_Construct_UScriptStruct_FWeaponData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_weaponS_MetaData), NewProp_weaponS_MetaData) }; // 465271574
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppStatsCalcComponent_eventCalcFinalStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FFinalStatsStruct, METADATA_PARAMS(0, nullptr) }; // 3526540418
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_BaseStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_weaponS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppStatsCalcComponent, nullptr, "CalcFinalStats", Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::cppStatsCalcComponent_eventCalcFinalStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::cppStatsCalcComponent_eventCalcFinalStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppStatsCalcComponent::execCalcFinalStats)
{
	P_GET_STRUCT_REF(FBasicStatsStruct,Z_Param_Out_BaseStats);
	P_GET_STRUCT_REF(FWeaponData,Z_Param_Out_weaponS);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFinalStatsStruct*)Z_Param__Result=P_THIS->CalcFinalStats(Z_Param_Out_BaseStats,Z_Param_Out_weaponS);
	P_NATIVE_END;
}
// ********** End Class UcppStatsCalcComponent Function CalcFinalStats *****************************

// ********** Begin Class UcppStatsCalcComponent ***************************************************
void UcppStatsCalcComponent::StaticRegisterNativesUcppStatsCalcComponent()
{
	UClass* Class = UcppStatsCalcComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalcFinalStats", &UcppStatsCalcComponent::execCalcFinalStats },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UcppStatsCalcComponent;
UClass* UcppStatsCalcComponent::GetPrivateStaticClass()
{
	using TClass = UcppStatsCalcComponent;
	if (!Z_Registration_Info_UClass_UcppStatsCalcComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("cppStatsCalcComponent"),
			Z_Registration_Info_UClass_UcppStatsCalcComponent.InnerSingleton,
			StaticRegisterNativesUcppStatsCalcComponent,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UcppStatsCalcComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UcppStatsCalcComponent_NoRegister()
{
	return UcppStatsCalcComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UcppStatsCalcComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "cppStatsCalcComponent.h" },
		{ "ModuleRelativePath", "cppStatsCalcComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UcppStatsCalcComponent_CalcFinalStats, "CalcFinalStats" }, // 2168973773
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcppStatsCalcComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UcppStatsCalcComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UcppStatsCalcComponent_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UcppStatsCalcComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UcppStatsCalcComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UcppStatsCalcComponent()
{
	if (!Z_Registration_Info_UClass_UcppStatsCalcComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UcppStatsCalcComponent.OuterSingleton, Z_Construct_UClass_UcppStatsCalcComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UcppStatsCalcComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UcppStatsCalcComponent);
UcppStatsCalcComponent::~UcppStatsCalcComponent() {}
// ********** End Class UcppStatsCalcComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppStatsCalcComponent_h__Script_TEMP2025_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UcppStatsCalcComponent, UcppStatsCalcComponent::StaticClass, TEXT("UcppStatsCalcComponent"), &Z_Registration_Info_UClass_UcppStatsCalcComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppStatsCalcComponent), 2447174696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppStatsCalcComponent_h__Script_TEMP2025_3485892486(TEXT("/Script/TEMP2025"),
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppStatsCalcComponent_h__Script_TEMP2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppStatsCalcComponent_h__Script_TEMP2025_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
