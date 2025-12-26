// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/cppItemComponent.h"
#include "TEMP2025/ItemStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodecppItemComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TEMP2025_API UClass* Z_Construct_UClass_UcppItemComponent();
TEMP2025_API UClass* Z_Construct_UClass_UcppItemComponent_NoRegister();
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UcppItemComponent Function PickUpItem ************************************
struct Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics
{
	struct cppItemComponent_eventPickUpItem_Parms
	{
		AActor* ItemActor;
		FItemData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "cppItemComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function PickUpItem constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PickUpItem constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PickUpItem Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::NewProp_ItemActor = { "ItemActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppItemComponent_eventPickUpItem_Parms, ItemActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppItemComponent_eventPickUpItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 1250017706
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::NewProp_ItemActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::PropPointers) < 2048);
// ********** End Function PickUpItem Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppItemComponent, nullptr, "PickUpItem", 	Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::cppItemComponent_eventPickUpItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::cppItemComponent_eventPickUpItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UcppItemComponent_PickUpItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppItemComponent::execPickUpItem)
{
	P_GET_OBJECT(AActor,Z_Param_ItemActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FItemData*)Z_Param__Result=P_THIS->PickUpItem(Z_Param_ItemActor);
	P_NATIVE_END;
}
// ********** End Class UcppItemComponent Function PickUpItem **************************************

// ********** Begin Class UcppItemComponent ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UcppItemComponent;
UClass* UcppItemComponent::GetPrivateStaticClass()
{
	using TClass = UcppItemComponent;
	if (!Z_Registration_Info_UClass_UcppItemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("cppItemComponent"),
			Z_Registration_Info_UClass_UcppItemComponent.InnerSingleton,
			StaticRegisterNativesUcppItemComponent,
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
	return Z_Registration_Info_UClass_UcppItemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UcppItemComponent_NoRegister()
{
	return UcppItemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UcppItemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "cppItemComponent.h" },
		{ "ModuleRelativePath", "cppItemComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UcppItemComponent constinit property declarations ************************
// ********** End Class UcppItemComponent constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("PickUpItem"), .Pointer = &UcppItemComponent::execPickUpItem },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UcppItemComponent_PickUpItem, "PickUpItem" }, // 3727469857
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcppItemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UcppItemComponent_Statics
UObject* (*const Z_Construct_UClass_UcppItemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UcppItemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UcppItemComponent_Statics::ClassParams = {
	&UcppItemComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UcppItemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UcppItemComponent_Statics::Class_MetaDataParams)
};
void UcppItemComponent::StaticRegisterNativesUcppItemComponent()
{
	UClass* Class = UcppItemComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UcppItemComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UcppItemComponent()
{
	if (!Z_Registration_Info_UClass_UcppItemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UcppItemComponent.OuterSingleton, Z_Construct_UClass_UcppItemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UcppItemComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UcppItemComponent);
UcppItemComponent::~UcppItemComponent() {}
// ********** End Class UcppItemComponent **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppItemComponent_h__Script_TEMP2025_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UcppItemComponent, UcppItemComponent::StaticClass, TEXT("UcppItemComponent"), &Z_Registration_Info_UClass_UcppItemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppItemComponent), 3175537077U) },
	};
}; // Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppItemComponent_h__Script_TEMP2025_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppItemComponent_h__Script_TEMP2025_1207384419{
	TEXT("/Script/TEMP2025"),
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppItemComponent_h__Script_TEMP2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppItemComponent_h__Script_TEMP2025_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
