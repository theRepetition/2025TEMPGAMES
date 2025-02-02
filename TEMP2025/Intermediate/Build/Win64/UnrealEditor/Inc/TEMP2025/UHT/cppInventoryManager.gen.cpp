// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/cppInventoryManager.h"
#include "TEMP2025/ItemStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecppInventoryManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TEMP2025_API UClass* Z_Construct_UClass_UcppdataBaseManager_NoRegister();
	TEMP2025_API UClass* Z_Construct_UClass_UInventoryManager();
	TEMP2025_API UClass* Z_Construct_UClass_UInventoryManager_NoRegister();
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryManager::execGetInventoryItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FItemData>*)Z_Param__Result=P_THIS->GetInventoryItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryManager::execRemoveItem)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItem(Z_Param_ItemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryManager::execAddItem)
	{
		P_GET_STRUCT(FItemData,Z_Param_NewItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItem(Z_Param_NewItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryManager::execLoadInventory)
	{
		P_GET_OBJECT(UcppdataBaseManager,Z_Param_DBManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadInventory(Z_Param_DBManager);
		P_NATIVE_END;
	}
	void UInventoryManager::StaticRegisterNativesUInventoryManager()
	{
		UClass* Class = UInventoryManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &UInventoryManager::execAddItem },
			{ "GetInventoryItems", &UInventoryManager::execGetInventoryItems },
			{ "LoadInventory", &UInventoryManager::execLoadInventory },
			{ "RemoveItem", &UInventoryManager::execRemoveItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryManager_AddItem_Statics
	{
		struct InventoryManager_eventAddItem_Parms
		{
			FItemData NewItem;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryManager_AddItem_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryManager_eventAddItem_Parms, NewItem), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 1394131702
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryManager_AddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_AddItem_Statics::NewProp_NewItem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryManager_AddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// DB\xec\x97\x90\xec\x84\x9c \xec\x9d\xb8\xeb\xb2\xa4\xed\x86\xa0\xeb\xa6\xac \xeb\xa1\x9c\xeb\x93\x9c\n" },
		{ "ModuleRelativePath", "cppInventoryManager.h" },
		{ "ToolTip", "DB\xec\x97\x90\xec\x84\x9c \xec\x9d\xb8\xeb\xb2\xa4\xed\x86\xa0\xeb\xa6\xac \xeb\xa1\x9c\xeb\x93\x9c" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManager_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManager, nullptr, "AddItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryManager_AddItem_Statics::InventoryManager_eventAddItem_Parms), Z_Construct_UFunction_UInventoryManager_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_AddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryManager_AddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryManager_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManager_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryManager_GetInventoryItems_Statics
	{
		struct InventoryManager_eventGetInventoryItems_Parms
		{
			TArray<FItemData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryManager_GetInventoryItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 1394131702
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventoryManager_GetInventoryItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryManager_eventGetInventoryItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1394131702
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryManager_GetInventoryItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_GetInventoryItems_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_GetInventoryItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryManager_GetInventoryItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x82\xad\xec\xa0\x9c\n" },
		{ "ModuleRelativePath", "cppInventoryManager.h" },
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x82\xad\xec\xa0\x9c" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManager_GetInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManager, nullptr, "GetInventoryItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryManager_GetInventoryItems_Statics::InventoryManager_eventGetInventoryItems_Parms), Z_Construct_UFunction_UInventoryManager_GetInventoryItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_GetInventoryItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryManager_GetInventoryItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_GetInventoryItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryManager_GetInventoryItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManager_GetInventoryItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryManager_LoadInventory_Statics
	{
		struct InventoryManager_eventLoadInventory_Parms
		{
			UcppdataBaseManager* DBManager;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DBManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryManager_LoadInventory_Statics::NewProp_DBManager = { "DBManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryManager_eventLoadInventory_Parms, DBManager), Z_Construct_UClass_UcppdataBaseManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryManager_LoadInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_LoadInventory_Statics::NewProp_DBManager,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryManager_LoadInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// \xea\xb8\xb0\xeb\xb3\xb8 \xec\x83\x9d\xec\x84\xb1\xec\x9e\x90\n" },
		{ "ModuleRelativePath", "cppInventoryManager.h" },
		{ "ToolTip", "\xea\xb8\xb0\xeb\xb3\xb8 \xec\x83\x9d\xec\x84\xb1\xec\x9e\x90" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManager_LoadInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManager, nullptr, "LoadInventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryManager_LoadInventory_Statics::InventoryManager_eventLoadInventory_Parms), Z_Construct_UFunction_UInventoryManager_LoadInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_LoadInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryManager_LoadInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_LoadInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryManager_LoadInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManager_LoadInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryManager_RemoveItem_Statics
	{
		struct InventoryManager_eventRemoveItem_Parms
		{
			FString ItemName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventoryManager_RemoveItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InventoryManager_eventRemoveItem_Parms, ItemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryManager_RemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryManager_RemoveItem_Statics::NewProp_ItemName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryManager_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xb6\x94\xea\xb0\x80\n" },
		{ "ModuleRelativePath", "cppInventoryManager.h" },
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xb6\x94\xea\xb0\x80" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryManager_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryManager, nullptr, "RemoveItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInventoryManager_RemoveItem_Statics::InventoryManager_eventRemoveItem_Parms), Z_Construct_UFunction_UInventoryManager_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_RemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryManager_RemoveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryManager_RemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryManager_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryManager_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryManager);
	UClass* Z_Construct_UClass_UInventoryManager_NoRegister()
	{
		return UInventoryManager::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryManager_AddItem, "AddItem" }, // 3669691345
		{ &Z_Construct_UFunction_UInventoryManager_GetInventoryItems, "GetInventoryItems" }, // 3634564572
		{ &Z_Construct_UFunction_UInventoryManager_LoadInventory, "LoadInventory" }, // 3192398487
		{ &Z_Construct_UFunction_UInventoryManager_RemoveItem, "RemoveItem" }, // 3001012904
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "cppInventoryManager.h" },
		{ "ModuleRelativePath", "cppInventoryManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryManager_Statics::ClassParams = {
		&UInventoryManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInventoryManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryManager()
	{
		if (!Z_Registration_Info_UClass_UInventoryManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryManager.OuterSingleton, Z_Construct_UClass_UInventoryManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInventoryManager.OuterSingleton;
	}
	template<> TEMP2025_API UClass* StaticClass<UInventoryManager>()
	{
		return UInventoryManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryManager);
	UInventoryManager::~UInventoryManager() {}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryManager, UInventoryManager::StaticClass, TEXT("UInventoryManager"), &Z_Registration_Info_UClass_UInventoryManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryManager), 239186724U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_1501098014(TEXT("/Script/TEMP2025"),
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
