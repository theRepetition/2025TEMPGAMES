// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/cppInventoryComponent.h"
#include "TEMP2025/ItemStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodecppInventoryComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TEMP2025_API UClass* Z_Construct_UClass_UcppInventoryComponent();
TEMP2025_API UClass* Z_Construct_UClass_UcppInventoryComponent_NoRegister();
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UcppInventoryComponent Function AddItem **********************************
struct Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics
{
	struct cppInventoryComponent_eventAddItem_Parms
	{
		TArray<FItemData> TargetInventory;
		FItemData NewItem;
		TArray<FItemData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "cppInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetInventory_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddItem constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetInventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetInventory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddItem constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddItem Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_TargetInventory_Inner = { "TargetInventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 4108981227
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_TargetInventory = { "TargetInventory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppInventoryComponent_eventAddItem_Parms, TargetInventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetInventory_MetaData), NewProp_TargetInventory_MetaData) }; // 4108981227
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppInventoryComponent_eventAddItem_Parms, NewItem), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewItem_MetaData), NewProp_NewItem_MetaData) }; // 4108981227
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 4108981227
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppInventoryComponent_eventAddItem_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4108981227
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_TargetInventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_TargetInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_NewItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::PropPointers) < 2048);
// ********** End Function AddItem Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppInventoryComponent, nullptr, "AddItem", 	Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::cppInventoryComponent_eventAddItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::cppInventoryComponent_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UcppInventoryComponent_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppInventoryComponent::execAddItem)
{
	P_GET_TARRAY_REF(FItemData,Z_Param_Out_TargetInventory);
	P_GET_STRUCT_REF(FItemData,Z_Param_Out_NewItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FItemData>*)Z_Param__Result=P_THIS->AddItem(Z_Param_Out_TargetInventory,Z_Param_Out_NewItem);
	P_NATIVE_END;
}
// ********** End Class UcppInventoryComponent Function AddItem ************************************

// ********** Begin Class UcppInventoryComponent Function RemoveItem *******************************
struct Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics
{
	struct cppInventoryComponent_eventRemoveItem_Parms
	{
		TArray<FItemData> TargetInventory;
		FItemData ItemToRemove;
		int32 count;
		TArray<FItemData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "cppInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetInventory_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveItem constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetInventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetInventory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemToRemove;
	static const UECodeGen_Private::FIntPropertyParams NewProp_count;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveItem constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveItem Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_TargetInventory_Inner = { "TargetInventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 4108981227
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_TargetInventory = { "TargetInventory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppInventoryComponent_eventRemoveItem_Parms, TargetInventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetInventory_MetaData), NewProp_TargetInventory_MetaData) }; // 4108981227
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ItemToRemove = { "ItemToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppInventoryComponent_eventRemoveItem_Parms, ItemToRemove), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemToRemove_MetaData), NewProp_ItemToRemove_MetaData) }; // 4108981227
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppInventoryComponent_eventRemoveItem_Parms, count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 4108981227
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppInventoryComponent_eventRemoveItem_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4108981227
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_TargetInventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_TargetInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ItemToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::PropPointers) < 2048);
// ********** End Function RemoveItem Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppInventoryComponent, nullptr, "RemoveItem", 	Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::cppInventoryComponent_eventRemoveItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::cppInventoryComponent_eventRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UcppInventoryComponent_RemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppInventoryComponent::execRemoveItem)
{
	P_GET_TARRAY_REF(FItemData,Z_Param_Out_TargetInventory);
	P_GET_STRUCT_REF(FItemData,Z_Param_Out_ItemToRemove);
	P_GET_PROPERTY(FIntProperty,Z_Param_count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FItemData>*)Z_Param__Result=P_THIS->RemoveItem(Z_Param_Out_TargetInventory,Z_Param_Out_ItemToRemove,Z_Param_count);
	P_NATIVE_END;
}
// ********** End Class UcppInventoryComponent Function RemoveItem *********************************

// ********** Begin Class UcppInventoryComponent Function SortInventory ****************************
struct Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics
{
	struct cppInventoryComponent_eventSortInventory_Parms
	{
		TArray<FItemData> TargetInventory;
		TArray<FItemData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "cppInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SortInventory constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetInventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetInventory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SortInventory constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SortInventory Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::NewProp_TargetInventory_Inner = { "TargetInventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 4108981227
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::NewProp_TargetInventory = { "TargetInventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppInventoryComponent_eventSortInventory_Parms, TargetInventory), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4108981227
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 4108981227
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppInventoryComponent_eventSortInventory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4108981227
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::NewProp_TargetInventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::NewProp_TargetInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::PropPointers) < 2048);
// ********** End Function SortInventory Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppInventoryComponent, nullptr, "SortInventory", 	Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::cppInventoryComponent_eventSortInventory_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::cppInventoryComponent_eventSortInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UcppInventoryComponent_SortInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppInventoryComponent::execSortInventory)
{
	P_GET_TARRAY(FItemData,Z_Param_TargetInventory);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FItemData>*)Z_Param__Result=P_THIS->SortInventory(Z_Param_TargetInventory);
	P_NATIVE_END;
}
// ********** End Class UcppInventoryComponent Function SortInventory ******************************

// ********** Begin Class UcppInventoryComponent ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UcppInventoryComponent;
UClass* UcppInventoryComponent::GetPrivateStaticClass()
{
	using TClass = UcppInventoryComponent;
	if (!Z_Registration_Info_UClass_UcppInventoryComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("cppInventoryComponent"),
			Z_Registration_Info_UClass_UcppInventoryComponent.InnerSingleton,
			StaticRegisterNativesUcppInventoryComponent,
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
	return Z_Registration_Info_UClass_UcppInventoryComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UcppInventoryComponent_NoRegister()
{
	return UcppInventoryComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UcppInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "cppInventoryComponent.h" },
		{ "ModuleRelativePath", "cppInventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "cppInventoryComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UcppInventoryComponent constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inventory_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UcppInventoryComponent constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddItem"), .Pointer = &UcppInventoryComponent::execAddItem },
		{ .NameUTF8 = UTF8TEXT("RemoveItem"), .Pointer = &UcppInventoryComponent::execRemoveItem },
		{ .NameUTF8 = UTF8TEXT("SortInventory"), .Pointer = &UcppInventoryComponent::execSortInventory },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UcppInventoryComponent_AddItem, "AddItem" }, // 568486202
		{ &Z_Construct_UFunction_UcppInventoryComponent_RemoveItem, "RemoveItem" }, // 4096250026
		{ &Z_Construct_UFunction_UcppInventoryComponent_SortInventory, "SortInventory" }, // 273262285
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcppInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UcppInventoryComponent_Statics

// ********** Begin Class UcppInventoryComponent Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UcppInventoryComponent_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 4108981227
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UcppInventoryComponent_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UcppInventoryComponent, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) }; // 4108981227
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UcppInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UcppInventoryComponent_Statics::NewProp_Inventory_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UcppInventoryComponent_Statics::NewProp_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UcppInventoryComponent_Statics::PropPointers) < 2048);
// ********** End Class UcppInventoryComponent Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UcppInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UcppInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UcppInventoryComponent_Statics::ClassParams = {
	&UcppInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UcppInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UcppInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UcppInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UcppInventoryComponent_Statics::Class_MetaDataParams)
};
void UcppInventoryComponent::StaticRegisterNativesUcppInventoryComponent()
{
	UClass* Class = UcppInventoryComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UcppInventoryComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UcppInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UcppInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UcppInventoryComponent.OuterSingleton, Z_Construct_UClass_UcppInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UcppInventoryComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UcppInventoryComponent);
UcppInventoryComponent::~UcppInventoryComponent() {}
// ********** End Class UcppInventoryComponent *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h__Script_TEMP2025_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UcppInventoryComponent, UcppInventoryComponent::StaticClass, TEXT("UcppInventoryComponent"), &Z_Registration_Info_UClass_UcppInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppInventoryComponent), 1372817689U) },
	};
}; // Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h__Script_TEMP2025_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h__Script_TEMP2025_1097898521{
	TEXT("/Script/TEMP2025"),
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h__Script_TEMP2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h__Script_TEMP2025_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
