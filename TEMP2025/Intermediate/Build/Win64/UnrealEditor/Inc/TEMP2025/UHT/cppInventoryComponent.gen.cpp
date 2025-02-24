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
	DEFINE_FUNCTION(UcppInventoryComponent::execRemoveItem)
	{
		P_GET_TARRAY_REF(FItemData,Z_Param_Out_PlayerInventory);
		P_GET_STRUCT(FItemData,Z_Param_ItemToRemove);
		P_GET_PROPERTY(FIntProperty,Z_Param_count);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItem(Z_Param_Out_PlayerInventory,Z_Param_ItemToRemove,Z_Param_count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UcppInventoryComponent::execAddItem)
	{
		P_GET_TARRAY_REF(FItemData,Z_Param_Out_PlayerInventory);
		P_GET_STRUCT(FItemData,Z_Param_NewItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItem(Z_Param_Out_PlayerInventory,Z_Param_NewItem);
		P_NATIVE_END;
	}
	void UcppInventoryComponent::StaticRegisterNativesUcppInventoryComponent()
	{
		UClass* Class = UcppInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &UcppInventoryComponent::execAddItem },
			{ "RemoveItem", &UcppInventoryComponent::execRemoveItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics
	{
		struct cppInventoryComponent_eventAddItem_Parms
		{
			TArray<FItemData> PlayerInventory;
			FItemData NewItem;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerInventory_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerInventory;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_PlayerInventory_Inner = { "PlayerInventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 408481391
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_PlayerInventory = { "PlayerInventory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryComponent_eventAddItem_Parms, PlayerInventory), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 408481391
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryComponent_eventAddItem_Parms, NewItem), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 408481391
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_PlayerInventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_PlayerInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_AddItem_Statics::NewProp_NewItem,
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
			TArray<FItemData> PlayerInventory;
			FItemData ItemToRemove;
			int32 count;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerInventory_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerInventory;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemToRemove;
		static const UECodeGen_Private::FIntPropertyParams NewProp_count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_PlayerInventory_Inner = { "PlayerInventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 408481391
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_PlayerInventory = { "PlayerInventory", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryComponent_eventRemoveItem_Parms, PlayerInventory), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 408481391
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ItemToRemove = { "ItemToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryComponent_eventRemoveItem_Parms, ItemToRemove), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 408481391
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryComponent_eventRemoveItem_Parms, count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_PlayerInventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_PlayerInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_ItemToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryComponent_RemoveItem_Statics::NewProp_count,
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
		{ &Z_Construct_UFunction_UcppInventoryComponent_AddItem, "AddItem" }, // 1439908025
		{ &Z_Construct_UFunction_UcppInventoryComponent_RemoveItem, "RemoveItem" }, // 3329303329
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UcppInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "cppInventoryComponent.h" },
		{ "ModuleRelativePath", "cppInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UcppInventoryComponent_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 408481391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UcppInventoryComponent_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "cppInventoryComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UcppInventoryComponent_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UcppInventoryComponent, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UcppInventoryComponent_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UcppInventoryComponent_Statics::NewProp_Inventory_MetaData)) }; // 408481391
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
		{ Z_Construct_UClass_UcppInventoryComponent, UcppInventoryComponent::StaticClass, TEXT("UcppInventoryComponent"), &Z_Registration_Info_UClass_UcppInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppInventoryComponent), 582008705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h_1713266089(TEXT("/Script/TEMP2025"),
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
