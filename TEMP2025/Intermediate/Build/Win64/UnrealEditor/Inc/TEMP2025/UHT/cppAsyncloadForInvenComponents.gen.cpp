// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppAsyncloadForInvenComponents.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodecppAsyncloadForInvenComponents() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
TEMP2025_API UClass* Z_Construct_UClass_UcppAsyncloadForInvenComponents();
TEMP2025_API UClass* Z_Construct_UClass_UcppAsyncloadForInvenComponents_NoRegister();
TEMP2025_API UFunction* Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAssetLoadedDelegate ************************************************
struct Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature_Statics
{
	struct _Script_TEMP2025_eventOnAssetLoadedDelegate_Parms
	{
		UStaticMesh* LoadedMesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8 \xec\x84\xa0\xec\x96\xb8: \xeb\xa1\x9c\xeb\x93\x9c\xeb\x90\x9c \xeb\xa9\x94\xec\x8b\x9c\xeb\xa5\xbc \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xeb\xa1\x9c \xec\xa0\x84\xeb\x8b\xac\xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\x9c \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/cppAsyncloadForInvenComponents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8d\xb8\xeb\xa6\xac\xea\xb2\x8c\xec\x9d\xb4\xed\x8a\xb8 \xec\x84\xa0\xec\x96\xb8: \xeb\xa1\x9c\xeb\x93\x9c\xeb\x90\x9c \xeb\xa9\x94\xec\x8b\x9c\xeb\xa5\xbc \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xeb\xa1\x9c \xec\xa0\x84\xeb\x8b\xac\xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\x9c \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature_Statics::NewProp_LoadedMesh = { "LoadedMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_TEMP2025_eventOnAssetLoadedDelegate_Parms, LoadedMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature_Statics::NewProp_LoadedMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_TEMP2025, nullptr, "OnAssetLoadedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature_Statics::_Script_TEMP2025_eventOnAssetLoadedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature_Statics::_Script_TEMP2025_eventOnAssetLoadedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAssetLoadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAssetLoadedDelegate, UStaticMesh* LoadedMesh)
{
	struct _Script_TEMP2025_eventOnAssetLoadedDelegate_Parms
	{
		UStaticMesh* LoadedMesh;
	};
	_Script_TEMP2025_eventOnAssetLoadedDelegate_Parms Parms;
	Parms.LoadedMesh=LoadedMesh;
	OnAssetLoadedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAssetLoadedDelegate **************************************************

// ********** Begin Class UcppAsyncloadForInvenComponents Function StartLoadStaticMesh *************
struct Z_Construct_UFunction_UcppAsyncloadForInvenComponents_StartLoadStaticMesh_Statics
{
	struct cppAsyncloadForInvenComponents_eventStartLoadStaticMesh_Parms
	{
		TSoftObjectPtr<UStaticMesh> MeshToLoad;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equip Loading" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xed\x98\xb8\xec\xb6\x9c\xed\x95\x98\xec\x97\xac \xeb\xb9\x84\xeb\x8f\x99\xea\xb8\xb0 \xeb\xa1\x9c\xeb\x93\x9c\xeb\xa5\xbc \xec\x8b\x9c\xec\x9e\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/cppAsyncloadForInvenComponents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xed\x98\xb8\xec\xb6\x9c\xed\x95\x98\xec\x97\xac \xeb\xb9\x84\xeb\x8f\x99\xea\xb8\xb0 \xeb\xa1\x9c\xeb\x93\x9c\xeb\xa5\xbc \xec\x8b\x9c\xec\x9e\x91" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MeshToLoad;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UcppAsyncloadForInvenComponents_StartLoadStaticMesh_Statics::NewProp_MeshToLoad = { "MeshToLoad", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppAsyncloadForInvenComponents_eventStartLoadStaticMesh_Parms, MeshToLoad), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppAsyncloadForInvenComponents_StartLoadStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppAsyncloadForInvenComponents_StartLoadStaticMesh_Statics::NewProp_MeshToLoad,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppAsyncloadForInvenComponents_StartLoadStaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppAsyncloadForInvenComponents_StartLoadStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppAsyncloadForInvenComponents, nullptr, "StartLoadStaticMesh", Z_Construct_UFunction_UcppAsyncloadForInvenComponents_StartLoadStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppAsyncloadForInvenComponents_StartLoadStaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UcppAsyncloadForInvenComponents_StartLoadStaticMesh_Statics::cppAsyncloadForInvenComponents_eventStartLoadStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppAsyncloadForInvenComponents_StartLoadStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppAsyncloadForInvenComponents_StartLoadStaticMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UcppAsyncloadForInvenComponents_StartLoadStaticMesh_Statics::cppAsyncloadForInvenComponents_eventStartLoadStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UcppAsyncloadForInvenComponents_StartLoadStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppAsyncloadForInvenComponents_StartLoadStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppAsyncloadForInvenComponents::execStartLoadStaticMesh)
{
	P_GET_SOFTOBJECT(TSoftObjectPtr<UStaticMesh>,Z_Param_MeshToLoad);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartLoadStaticMesh(Z_Param_MeshToLoad);
	P_NATIVE_END;
}
// ********** End Class UcppAsyncloadForInvenComponents Function StartLoadStaticMesh ***************

// ********** Begin Class UcppAsyncloadForInvenComponents ******************************************
void UcppAsyncloadForInvenComponents::StaticRegisterNativesUcppAsyncloadForInvenComponents()
{
	UClass* Class = UcppAsyncloadForInvenComponents::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartLoadStaticMesh", &UcppAsyncloadForInvenComponents::execStartLoadStaticMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UcppAsyncloadForInvenComponents;
UClass* UcppAsyncloadForInvenComponents::GetPrivateStaticClass()
{
	using TClass = UcppAsyncloadForInvenComponents;
	if (!Z_Registration_Info_UClass_UcppAsyncloadForInvenComponents.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("cppAsyncloadForInvenComponents"),
			Z_Registration_Info_UClass_UcppAsyncloadForInvenComponents.InnerSingleton,
			StaticRegisterNativesUcppAsyncloadForInvenComponents,
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
	return Z_Registration_Info_UClass_UcppAsyncloadForInvenComponents.InnerSingleton;
}
UClass* Z_Construct_UClass_UcppAsyncloadForInvenComponents_NoRegister()
{
	return UcppAsyncloadForInvenComponents::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UcppAsyncloadForInvenComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "cppAsyncloadForInvenComponents.h" },
		{ "ModuleRelativePath", "Public/cppAsyncloadForInvenComponents.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStaticMeshLoaded_MetaData[] = {
		{ "Category", "Equip Loading" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xa1\x9c\xeb\x93\x9c \xec\x99\x84\xeb\xa3\x8c \xec\x8b\x9c \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xeb\xa1\x9c \xec\xa0\x84\xec\x86\xa1\xeb\x90\x98\xeb\x8a\x94 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8\n" },
#endif
		{ "ModuleRelativePath", "Public/cppAsyncloadForInvenComponents.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xa1\x9c\xeb\x93\x9c \xec\x99\x84\xeb\xa3\x8c \xec\x8b\x9c \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xeb\xa1\x9c \xec\xa0\x84\xec\x86\xa1\xeb\x90\x98\xeb\x8a\x94 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaticMeshLoaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UcppAsyncloadForInvenComponents_StartLoadStaticMesh, "StartLoadStaticMesh" }, // 1178616313
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcppAsyncloadForInvenComponents>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UcppAsyncloadForInvenComponents_Statics::NewProp_OnStaticMeshLoaded = { "OnStaticMeshLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UcppAsyncloadForInvenComponents, OnStaticMeshLoaded), Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStaticMeshLoaded_MetaData), NewProp_OnStaticMeshLoaded_MetaData) }; // 2949130806
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UcppAsyncloadForInvenComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UcppAsyncloadForInvenComponents_Statics::NewProp_OnStaticMeshLoaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UcppAsyncloadForInvenComponents_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UcppAsyncloadForInvenComponents_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UcppAsyncloadForInvenComponents_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UcppAsyncloadForInvenComponents_Statics::ClassParams = {
	&UcppAsyncloadForInvenComponents::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UcppAsyncloadForInvenComponents_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UcppAsyncloadForInvenComponents_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UcppAsyncloadForInvenComponents_Statics::Class_MetaDataParams), Z_Construct_UClass_UcppAsyncloadForInvenComponents_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UcppAsyncloadForInvenComponents()
{
	if (!Z_Registration_Info_UClass_UcppAsyncloadForInvenComponents.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UcppAsyncloadForInvenComponents.OuterSingleton, Z_Construct_UClass_UcppAsyncloadForInvenComponents_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UcppAsyncloadForInvenComponents.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UcppAsyncloadForInvenComponents);
UcppAsyncloadForInvenComponents::~UcppAsyncloadForInvenComponents() {}
// ********** End Class UcppAsyncloadForInvenComponents ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_cppAsyncloadForInvenComponents_h__Script_TEMP2025_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UcppAsyncloadForInvenComponents, UcppAsyncloadForInvenComponents::StaticClass, TEXT("UcppAsyncloadForInvenComponents"), &Z_Registration_Info_UClass_UcppAsyncloadForInvenComponents, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppAsyncloadForInvenComponents), 123385237U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_cppAsyncloadForInvenComponents_h__Script_TEMP2025_4180718897(TEXT("/Script/TEMP2025"),
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_cppAsyncloadForInvenComponents_h__Script_TEMP2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_cppAsyncloadForInvenComponents_h__Script_TEMP2025_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
