// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/cppInventoryManager.h"
#include "TEMP2025/ItemStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodecppInventoryManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TEMP2025_API UClass* Z_Construct_UClass_UcppdataBaseManager_NoRegister();
TEMP2025_API UClass* Z_Construct_UClass_UcppInventoryManager();
TEMP2025_API UClass* Z_Construct_UClass_UcppInventoryManager_NoRegister();
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UcppInventoryManager Function AddItem ************************************
struct Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics
{
	struct cppInventoryManager_eventAddItem_Parms
	{
		FItemData NewItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DB\xec\x97\x90\xec\x84\x9c \xec\x9d\xb8\xeb\xb2\xa4\xed\x86\xa0\xeb\xa6\xac \xeb\xa1\x9c\xeb\x93\x9c\n" },
#endif
		{ "ModuleRelativePath", "cppInventoryManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DB\xec\x97\x90\xec\x84\x9c \xec\x9d\xb8\xeb\xb2\xa4\xed\x86\xa0\xeb\xa6\xac \xeb\xa1\x9c\xeb\x93\x9c" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function AddItem constinit property declarations *******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddItem constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddItem Property Definitions ******************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppInventoryManager_eventAddItem_Parms, NewItem), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 4108981227
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::NewProp_NewItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::PropPointers) < 2048);
// ********** End Function AddItem Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppInventoryManager, nullptr, "AddItem", 	Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::cppInventoryManager_eventAddItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::cppInventoryManager_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UcppInventoryManager_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppInventoryManager_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppInventoryManager::execAddItem)
{
	P_GET_STRUCT(FItemData,Z_Param_NewItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItem(Z_Param_NewItem);
	P_NATIVE_END;
}
// ********** End Class UcppInventoryManager Function AddItem **************************************

// ********** Begin Class UcppInventoryManager Function GetInventoryItems **************************
struct Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics
{
	struct cppInventoryManager_eventGetInventoryItems_Parms
	{
		TArray<FItemData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x82\xad\xec\xa0\x9c\n" },
#endif
		{ "ModuleRelativePath", "cppInventoryManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x82\xad\xec\xa0\x9c" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetInventoryItems constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInventoryItems constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInventoryItems Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 4108981227
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppInventoryManager_eventGetInventoryItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4108981227
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::PropPointers) < 2048);
// ********** End Function GetInventoryItems Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppInventoryManager, nullptr, "GetInventoryItems", 	Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::cppInventoryManager_eventGetInventoryItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::cppInventoryManager_eventGetInventoryItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppInventoryManager::execGetInventoryItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FItemData>*)Z_Param__Result=P_THIS->GetInventoryItems();
	P_NATIVE_END;
}
// ********** End Class UcppInventoryManager Function GetInventoryItems ****************************

// ********** Begin Class UcppInventoryManager Function LoadInventory ******************************
struct Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics
{
	struct cppInventoryManager_eventLoadInventory_Parms
	{
		UcppdataBaseManager* DBManager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb8\xb0\xeb\xb3\xb8 \xec\x83\x9d\xec\x84\xb1\xec\x9e\x90\n" },
#endif
		{ "ModuleRelativePath", "cppInventoryManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb8\xb0\xeb\xb3\xb8 \xec\x83\x9d\xec\x84\xb1\xec\x9e\x90" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function LoadInventory constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DBManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LoadInventory constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LoadInventory Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::NewProp_DBManager = { "DBManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppInventoryManager_eventLoadInventory_Parms, DBManager), Z_Construct_UClass_UcppdataBaseManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::NewProp_DBManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::PropPointers) < 2048);
// ********** End Function LoadInventory Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppInventoryManager, nullptr, "LoadInventory", 	Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::cppInventoryManager_eventLoadInventory_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::cppInventoryManager_eventLoadInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UcppInventoryManager_LoadInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppInventoryManager_LoadInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppInventoryManager::execLoadInventory)
{
	P_GET_OBJECT(UcppdataBaseManager,Z_Param_DBManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadInventory(Z_Param_DBManager);
	P_NATIVE_END;
}
// ********** End Class UcppInventoryManager Function LoadInventory ********************************

// ********** Begin Class UcppInventoryManager Function RemoveItem *********************************
struct Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics
{
	struct cppInventoryManager_eventRemoveItem_Parms
	{
		FString ItemName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xb6\x94\xea\xb0\x80\n" },
#endif
		{ "ModuleRelativePath", "cppInventoryManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xb6\x94\xea\xb0\x80" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveItem constinit property declarations ****************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveItem constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveItem Property Definitions ***************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppInventoryManager_eventRemoveItem_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::NewProp_ItemName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::PropPointers) < 2048);
// ********** End Function RemoveItem Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppInventoryManager, nullptr, "RemoveItem", 	Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::cppInventoryManager_eventRemoveItem_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::cppInventoryManager_eventRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UcppInventoryManager_RemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppInventoryManager_RemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppInventoryManager::execRemoveItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItem(Z_Param_ItemName);
	P_NATIVE_END;
}
// ********** End Class UcppInventoryManager Function RemoveItem ***********************************

// ********** Begin Class UcppInventoryManager *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UcppInventoryManager;
UClass* UcppInventoryManager::GetPrivateStaticClass()
{
	using TClass = UcppInventoryManager;
	if (!Z_Registration_Info_UClass_UcppInventoryManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("cppInventoryManager"),
			Z_Registration_Info_UClass_UcppInventoryManager.InnerSingleton,
			StaticRegisterNativesUcppInventoryManager,
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
	return Z_Registration_Info_UClass_UcppInventoryManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UcppInventoryManager_NoRegister()
{
	return UcppInventoryManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UcppInventoryManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "cppInventoryManager.h" },
		{ "ModuleRelativePath", "cppInventoryManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UcppInventoryManager constinit property declarations *********************
// ********** End Class UcppInventoryManager constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddItem"), .Pointer = &UcppInventoryManager::execAddItem },
		{ .NameUTF8 = UTF8TEXT("GetInventoryItems"), .Pointer = &UcppInventoryManager::execGetInventoryItems },
		{ .NameUTF8 = UTF8TEXT("LoadInventory"), .Pointer = &UcppInventoryManager::execLoadInventory },
		{ .NameUTF8 = UTF8TEXT("RemoveItem"), .Pointer = &UcppInventoryManager::execRemoveItem },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UcppInventoryManager_AddItem, "AddItem" }, // 1974736990
		{ &Z_Construct_UFunction_UcppInventoryManager_GetInventoryItems, "GetInventoryItems" }, // 3559684759
		{ &Z_Construct_UFunction_UcppInventoryManager_LoadInventory, "LoadInventory" }, // 3329738940
		{ &Z_Construct_UFunction_UcppInventoryManager_RemoveItem, "RemoveItem" }, // 2324541839
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcppInventoryManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UcppInventoryManager_Statics
UObject* (*const Z_Construct_UClass_UcppInventoryManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UcppInventoryManager_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UcppInventoryManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UcppInventoryManager_Statics::Class_MetaDataParams)
};
void UcppInventoryManager::StaticRegisterNativesUcppInventoryManager()
{
	UClass* Class = UcppInventoryManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UcppInventoryManager_Statics::Funcs));
}
UClass* Z_Construct_UClass_UcppInventoryManager()
{
	if (!Z_Registration_Info_UClass_UcppInventoryManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UcppInventoryManager.OuterSingleton, Z_Construct_UClass_UcppInventoryManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UcppInventoryManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UcppInventoryManager);
UcppInventoryManager::~UcppInventoryManager() {}
// ********** End Class UcppInventoryManager *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h__Script_TEMP2025_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UcppInventoryManager, UcppInventoryManager::StaticClass, TEXT("UcppInventoryManager"), &Z_Registration_Info_UClass_UcppInventoryManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppInventoryManager), 3824725186U) },
	};
}; // Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h__Script_TEMP2025_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h__Script_TEMP2025_3886056396{
	TEXT("/Script/TEMP2025"),
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h__Script_TEMP2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h__Script_TEMP2025_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
