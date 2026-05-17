// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/ItemInterface.h"
#include "TEMP2025/ItemStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeItemInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TEMP2025_API UClass* Z_Construct_UClass_UItemInterface();
TEMP2025_API UClass* Z_Construct_UClass_UItemInterface_NoRegister();
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UItemInterface Function GetItemData **********************************
struct ItemInterface_eventGetItemData_Parms
{
	FItemData ReturnValue;
};
FItemData IItemInterface::GetItemData()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetItemData instead.");
	ItemInterface_eventGetItemData_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UItemInterface_GetItemData = FName(TEXT("GetItemData"));
FItemData IItemInterface::Execute_GetItemData(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UItemInterface::StaticClass()));
	ItemInterface_eventGetItemData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UItemInterface_GetItemData);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IItemInterface*)(O->GetNativeInterfaceAddress(UItemInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetItemData_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UItemInterface_GetItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BP\xec\x97\x90\xec\x84\x9c \xea\xb5\xac\xed\x98\x84\xed\x95\xa0 \xed\x95\xa8\xec\x88\x98 \xec\x84\xa0\xec\x96\xb8\n" },
#endif
		{ "ModuleRelativePath", "ItemInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BP\xec\x97\x90\xec\x84\x9c \xea\xb5\xac\xed\x98\x84\xed\x95\xa0 \xed\x95\xa8\xec\x88\x98 \xec\x84\xa0\xec\x96\xb8" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetItemData constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItemData constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItemData Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemInterface_GetItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemInterface_eventGetItemData_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 724998862
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemInterface_GetItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemInterface_GetItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInterface_GetItemData_Statics::PropPointers) < 2048);
// ********** End Function GetItemData Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemInterface_GetItemData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UItemInterface, nullptr, "GetItemData", 	Z_Construct_UFunction_UItemInterface_GetItemData_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInterface_GetItemData_Statics::PropPointers), 
sizeof(ItemInterface_eventGetItemData_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInterface_GetItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemInterface_GetItemData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ItemInterface_eventGetItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemInterface_GetItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemInterface_GetItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IItemInterface::execGetItemData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FItemData*)Z_Param__Result=P_THIS->GetItemData_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UItemInterface Function GetItemData ************************************

// ********** Begin Interface UItemInterface *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UItemInterface;
UClass* UItemInterface::GetPrivateStaticClass()
{
	using TClass = UItemInterface;
	if (!Z_Registration_Info_UClass_UItemInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ItemInterface"),
			Z_Registration_Info_UClass_UItemInterface.InnerSingleton,
			StaticRegisterNativesUItemInterface,
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
	return Z_Registration_Info_UClass_UItemInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UItemInterface_NoRegister()
{
	return UItemInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UItemInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ItemInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UItemInterface constinit property declarations ***********************
// ********** End Interface UItemInterface constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetItemData"), .Pointer = &IItemInterface::execGetItemData },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemInterface_GetItemData, "GetItemData" }, // 657276567
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IItemInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UItemInterface_Statics
UObject* (*const Z_Construct_UClass_UItemInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemInterface_Statics::ClassParams = {
	&UItemInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemInterface_Statics::Class_MetaDataParams)
};
void UItemInterface::StaticRegisterNativesUItemInterface()
{
	UClass* Class = UItemInterface::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UItemInterface_Statics::Funcs));
}
UClass* Z_Construct_UClass_UItemInterface()
{
	if (!Z_Registration_Info_UClass_UItemInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemInterface.OuterSingleton, Z_Construct_UClass_UItemInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemInterface.OuterSingleton;
}
UItemInterface::UItemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UItemInterface);
// ********** End Interface UItemInterface *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h__Script_TEMP2025_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemInterface, UItemInterface::StaticClass, TEXT("UItemInterface"), &Z_Registration_Info_UClass_UItemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemInterface), 680174439U) },
	};
}; // Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h__Script_TEMP2025_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h__Script_TEMP2025_3968743159{
	TEXT("/Script/TEMP2025"),
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h__Script_TEMP2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h__Script_TEMP2025_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
