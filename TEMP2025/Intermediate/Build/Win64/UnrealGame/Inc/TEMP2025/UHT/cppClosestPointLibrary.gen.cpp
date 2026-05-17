// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/cppClosestPointLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodecppClosestPointLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
TEMP2025_API UClass* Z_Construct_UClass_UcppClosestPointLibrary();
TEMP2025_API UClass* Z_Construct_UClass_UcppClosestPointLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UcppClosestPointLibrary Function GetClosestPointRelativeToActor **********
struct Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics
{
	struct cppClosestPointLibrary_eventGetClosestPointRelativeToActor_Parms
	{
		AActor* TargetActor;
		UPrimitiveComponent* TargetComponent;
		FVector HitOrigin;
		FVector OutLocalPoint;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "cppClosestPointLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetClosestPointRelativeToActor constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocalPoint;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetClosestPointRelativeToActor constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetClosestPointRelativeToActor Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppClosestPointLibrary_eventGetClosestPointRelativeToActor_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppClosestPointLibrary_eventGetClosestPointRelativeToActor_Parms, TargetComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetComponent_MetaData), NewProp_TargetComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::NewProp_HitOrigin = { "HitOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppClosestPointLibrary_eventGetClosestPointRelativeToActor_Parms, HitOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitOrigin_MetaData), NewProp_HitOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::NewProp_OutLocalPoint = { "OutLocalPoint", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppClosestPointLibrary_eventGetClosestPointRelativeToActor_Parms, OutLocalPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((cppClosestPointLibrary_eventGetClosestPointRelativeToActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(cppClosestPointLibrary_eventGetClosestPointRelativeToActor_Parms), &Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::NewProp_TargetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::NewProp_HitOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::NewProp_OutLocalPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::PropPointers) < 2048);
// ********** End Function GetClosestPointRelativeToActor Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppClosestPointLibrary, nullptr, "GetClosestPointRelativeToActor", 	Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::cppClosestPointLibrary_eventGetClosestPointRelativeToActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::cppClosestPointLibrary_eventGetClosestPointRelativeToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppClosestPointLibrary::execGetClosestPointRelativeToActor)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_TargetComponent);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_HitOrigin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocalPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UcppClosestPointLibrary::GetClosestPointRelativeToActor(Z_Param_TargetActor,Z_Param_TargetComponent,Z_Param_Out_HitOrigin,Z_Param_Out_OutLocalPoint);
	P_NATIVE_END;
}
// ********** End Class UcppClosestPointLibrary Function GetClosestPointRelativeToActor ************

// ********** Begin Class UcppClosestPointLibrary **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UcppClosestPointLibrary;
UClass* UcppClosestPointLibrary::GetPrivateStaticClass()
{
	using TClass = UcppClosestPointLibrary;
	if (!Z_Registration_Info_UClass_UcppClosestPointLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("cppClosestPointLibrary"),
			Z_Registration_Info_UClass_UcppClosestPointLibrary.InnerSingleton,
			StaticRegisterNativesUcppClosestPointLibrary,
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
	return Z_Registration_Info_UClass_UcppClosestPointLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UcppClosestPointLibrary_NoRegister()
{
	return UcppClosestPointLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UcppClosestPointLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "cppClosestPointLibrary.h" },
		{ "ModuleRelativePath", "cppClosestPointLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UcppClosestPointLibrary constinit property declarations ******************
// ********** End Class UcppClosestPointLibrary constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetClosestPointRelativeToActor"), .Pointer = &UcppClosestPointLibrary::execGetClosestPointRelativeToActor },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UcppClosestPointLibrary_GetClosestPointRelativeToActor, "GetClosestPointRelativeToActor" }, // 628617564
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcppClosestPointLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UcppClosestPointLibrary_Statics
UObject* (*const Z_Construct_UClass_UcppClosestPointLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UcppClosestPointLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UcppClosestPointLibrary_Statics::ClassParams = {
	&UcppClosestPointLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UcppClosestPointLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UcppClosestPointLibrary_Statics::Class_MetaDataParams)
};
void UcppClosestPointLibrary::StaticRegisterNativesUcppClosestPointLibrary()
{
	UClass* Class = UcppClosestPointLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UcppClosestPointLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UcppClosestPointLibrary()
{
	if (!Z_Registration_Info_UClass_UcppClosestPointLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UcppClosestPointLibrary.OuterSingleton, Z_Construct_UClass_UcppClosestPointLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UcppClosestPointLibrary.OuterSingleton;
}
UcppClosestPointLibrary::UcppClosestPointLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UcppClosestPointLibrary);
UcppClosestPointLibrary::~UcppClosestPointLibrary() {}
// ********** End Class UcppClosestPointLibrary ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppClosestPointLibrary_h__Script_TEMP2025_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UcppClosestPointLibrary, UcppClosestPointLibrary::StaticClass, TEXT("UcppClosestPointLibrary"), &Z_Registration_Info_UClass_UcppClosestPointLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppClosestPointLibrary), 4173999553U) },
	};
}; // Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppClosestPointLibrary_h__Script_TEMP2025_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppClosestPointLibrary_h__Script_TEMP2025_2937291699{
	TEXT("/Script/TEMP2025"),
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppClosestPointLibrary_h__Script_TEMP2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppClosestPointLibrary_h__Script_TEMP2025_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
