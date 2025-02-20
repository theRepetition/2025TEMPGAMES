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
	TEMP2025_API UClass* Z_Construct_UClass_UcppInventoryManager();
	TEMP2025_API UClass* Z_Construct_UClass_UcppInventoryManager_NoRegister();
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	DEFINE_FUNCTION(UcppInventoryManager::execGetInventoryItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FItemData>*)Z_Param__Result=P_THIS->GetInventoryItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UcppInventoryManager::execRemoveItem)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItem(Z_Param_ItemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UcppInventoryManager::execAddItem)
	{
		P_GET_STRUCT(FItemData,Z_Param_NewItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItem(Z_Param_NewItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UcppInventoryManager::execLoadInventory)
	{
		P_GET_OBJECT(UcppdataBaseManager,Z_Param_DBManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadInventory(Z_Param_DBManager);
		P_NATIVE_END;
	}
	void UcppInventoryManager::StaticRegisterNativesUcppInventoryManager()
	{
		UClass* Class = UcppInventoryManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItem", &UcppInventoryManager::execAddItem },
			{ "GetInventoryItems", &UcppInventoryManager::execGetInventoryItems },
			{ "LoadInventory", &UcppInventoryManager::execLoadInventory },
			{ "RemoveItem", &UcppInventoryManager::execRemoveItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics
	{
		struct cppInventoryManager_eventAddItem_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryManager_eventAddItem_Parms, NewItem), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 364338591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::NewProp_NewItem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// DB\xec\x97\x90\xec\x84\x9c \xec\x9d\xb8\xeb\xb2\xa4\xed\x86\xa0\xeb\xa6\xac \xeb\xa1\x9c\xeb\x93\x9c\n" },
		{ "ModuleRelativePath", "cppInventoryManager.h" },
		{ "ToolTip", "DB\xec\x97\x90\xec\x84\x9c \xec\x9d\xb8\xeb\xb2\xa4\xed\x86\xa0\xeb\xa6\xac \xeb\xa1\x9c\xeb\x93\x9c" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcppInventoryManager, nullptr, "AddItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::cppInventoryManager_eventAddItem_Parms), Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcppInventoryManager_AddItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics
	{
		struct cppInventoryManager_eventGetInventoryItems_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 364338591
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryManager_eventGetInventoryItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 364338591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x82\xad\xec\xa0\x9c\n" },
		{ "ModuleRelativePath", "cppInventoryManager.h" },
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x82\xad\xec\xa0\x9c" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcppInventoryManager, nullptr, "GetInventoryItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::cppInventoryManager_eventGetInventoryItems_Parms), Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics
	{
		struct cppInventoryManager_eventLoadInventory_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::NewProp_DBManager = { "DBManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryManager_eventLoadInventory_Parms, DBManager), Z_Construct_UClass_UcppdataBaseManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::NewProp_DBManager,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// \xea\xb8\xb0\xeb\xb3\xb8 \xec\x83\x9d\xec\x84\xb1\xec\x9e\x90\n" },
		{ "ModuleRelativePath", "cppInventoryManager.h" },
		{ "ToolTip", "\xea\xb8\xb0\xeb\xb3\xb8 \xec\x83\x9d\xec\x84\xb1\xec\x9e\x90" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcppInventoryManager, nullptr, "LoadInventory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::cppInventoryManager_eventLoadInventory_Parms), Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcppInventoryManager_LoadInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics
	{
		struct cppInventoryManager_eventRemoveItem_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppInventoryManager_eventRemoveItem_Parms, ItemName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::NewProp_ItemName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "// \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xb6\x94\xea\xb0\x80\n" },
		{ "ModuleRelativePath", "cppInventoryManager.h" },
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xb6\x94\xea\xb0\x80" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcppInventoryManager, nullptr, "RemoveItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::cppInventoryManager_eventRemoveItem_Parms), Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcppInventoryManager_RemoveItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UcppInventoryManager);
	UClass* Z_Construct_UClass_UcppInventoryManager_NoRegister()
	{
		return UcppInventoryManager::StaticClass();
	}
	struct Z_Construct_UClass_UcppInventoryManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UcppInventoryManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UcppInventoryManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UcppInventoryManager_AddItem, "AddItem" }, // 2994342216
		{ &Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems, "GetInventoryItems" }, // 827326631
		{ &Z_Construct_UFunction_UcppInventoryManager_LoadInventory, "LoadInventory" }, // 1009560229
		{ &Z_Construct_UFunction_UcppInventoryManager_RemoveItem, "RemoveItem" }, // 1631860414
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UcppInventoryManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "cppInventoryManager.h" },
		{ "ModuleRelativePath", "cppInventoryManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UcppInventoryManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcppInventoryManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UcppInventoryManager_Statics::ClassParams = {
		&UcppInventoryManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UcppInventoryManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UcppInventoryManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UcppInventoryManager()
	{
		if (!Z_Registration_Info_UClass_UcppInventoryManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UcppInventoryManager.OuterSingleton, Z_Construct_UClass_UcppInventoryManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UcppInventoryManager.OuterSingleton;
	}
	template<> TEMP2025_API UClass* StaticClass<UcppInventoryManager>()
	{
		return UcppInventoryManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UcppInventoryManager);
	UcppInventoryManager::~UcppInventoryManager() {}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UcppInventoryManager, UcppInventoryManager::StaticClass, TEXT("UcppInventoryManager"), &Z_Registration_Info_UClass_UcppInventoryManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppInventoryManager), 1112716875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_1594809606(TEXT("/Script/TEMP2025"),
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
