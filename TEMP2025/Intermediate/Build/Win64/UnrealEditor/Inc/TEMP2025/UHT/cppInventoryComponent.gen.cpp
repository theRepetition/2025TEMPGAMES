// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/cppInventoryComponent.h"
#include "TEMP2025/ItemStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecppInventoryComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TEMP2025_API UClass* Z_Construct_UClass_UcppInventoryComponent();
	TEMP2025_API UClass* Z_Construct_UClass_UcppInventoryComponent_NoRegister();
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	DEFINE_FUNCTION(UcppInventoryComponent::execSortInventory)
	{
		P_GET_TARRAY(FItemData,Z_Param_TargetInventory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FItemData>*)Z_Param__Result=P_THIS->SortInventory(Z_Param_TargetInventory);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UcppInventoryComponent::execAddItem)
	{
		P_GET_TARRAY_REF(FItemData,Z_Param_Out_TargetInventory);
		P_GET_STRUCT_REF(FItemData,Z_Param_Out_NewItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FItemData>*)Z_Param__Result=P_THIS->AddItem(Z_Param_Out_TargetInventory,Z_Param_Out_NewItem);
		P_NATIVE_END;
	}
	void UcppInventoryComponent::StaticRegisterNativesUcppInventoryComponent()
	{
		UClass* Class = UcppInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &UcppInventoryComponent::execAddItem },
			{ "RemoveItem", &UcppInventoryComponent::execRemoveItem },
			{ "SortInventory", &UcppInventoryComponent::execSortInventory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics
	{
		struct cppInventoryComponent_eventAddItem_Parms
		{
			TArray<FItemData> TargetInventory;
			FItemData NewItem;
			TArray<FItemData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetInventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetInventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewItem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_TargetInventory_Inner = { "TargetInventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 3367904852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_TargetInventory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_TargetInventory = { "TargetInventory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryComponent_eventAddItem_Parms, TargetInventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_TargetInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_TargetInventory_MetaData)) }; // 3367904852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_NewItem_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryComponent_eventAddItem_Parms, NewItem), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_NewItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_NewItem_MetaData)) }; // 3367904852
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 3367904852
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryComponent_eventAddItem_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3367904852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_TargetInventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_TargetInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_NewItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "cppInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcppInventoryComponent, nullptr, "AddItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::cppInventoryComponent_eventAddItem_Parms), Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcppInventoryComponent_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics
	{
		struct cppInventoryComponent_eventRemoveItem_Parms
		{
			TArray<FItemData> TargetInventory;
			FItemData ItemToRemove;
			int32 count;
			TArray<FItemData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetInventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetInventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemToRemove;
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_TargetInventory_Inner = { "TargetInventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 3367904852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_TargetInventory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_TargetInventory = { "TargetInventory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryComponent_eventRemoveItem_Parms, TargetInventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_TargetInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_TargetInventory_MetaData)) }; // 3367904852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ItemToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ItemToRemove = { "ItemToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryComponent_eventRemoveItem_Parms, ItemToRemove), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ItemToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ItemToRemove_MetaData)) }; // 3367904852
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryComponent_eventRemoveItem_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 3367904852
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryComponent_eventRemoveItem_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3367904852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_TargetInventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_TargetInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ItemToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "cppInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcppInventoryComponent, nullptr, "RemoveItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::cppInventoryComponent_eventRemoveItem_Parms), Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcppInventoryComponent_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics
	{
		struct cppInventoryComponent_eventSortInventory_Parms
		{
			TArray<FItemData> TargetInventory;
			TArray<FItemData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetInventory_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetInventory;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::NewProp_TargetInventory_Inner = { "TargetInventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 3367904852
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::NewProp_TargetInventory = { "TargetInventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryComponent_eventSortInventory_Parms, TargetInventory), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3367904852
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 3367904852
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryComponent_eventSortInventory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3367904852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::NewProp_TargetInventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::NewProp_TargetInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "cppInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcppInventoryComponent, nullptr, "SortInventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::cppInventoryComponent_eventSortInventory_Parms), Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcppInventoryComponent_SortInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppInventoryComponent_SortInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UcppInventoryComponent);
	UClass* Z_Construct_UClass_UcppInventoryComponent_NoRegister()
	{
		return UcppInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UcppInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UcppInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UcppInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UcppInventoryComponent_AddItem, "AddItem" }, // 2124540149
		{ &Z_Construct_UFunction_UcppInventoryComponent_RemoveItem, "RemoveItem" }, // 4024936671
		{ &Z_Construct_UFunction_UcppInventoryComponent_SortInventory, "SortInventory" }, // 675219784
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UcppInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "cppInventoryComponent.h" },
		{ "ModuleRelativePath", "cppInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UcppInventoryComponent_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 3367904852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UcppInventoryComponent_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "cppInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UcppInventoryComponent_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UcppInventoryComponent, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UcppInventoryComponent_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UcppInventoryComponent_Statics::NewProp_Inventory_MetaData)) }; // 3367904852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UcppInventoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UcppInventoryComponent_Statics::NewProp_Inventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UcppInventoryComponent_Statics::NewProp_Inventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UcppInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcppInventoryComponent>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UcppInventoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UcppInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UcppInventoryComponent()
	{
		if (!Z_Registration_Info_UClass_UcppInventoryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UcppInventoryComponent.OuterSingleton, Z_Construct_UClass_UcppInventoryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UcppInventoryComponent.OuterSingleton;
	}
	template<> TEMP2025_API UClass* StaticClass<UcppInventoryComponent>()
	{
		return UcppInventoryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UcppInventoryComponent);
	UcppInventoryComponent::~UcppInventoryComponent() {}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UcppInventoryComponent, UcppInventoryComponent::StaticClass, TEXT("UcppInventoryComponent"), &Z_Registration_Info_UClass_UcppInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppInventoryComponent), 1436077071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h_1718409666(TEXT("/Script/TEMP2025"),
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
