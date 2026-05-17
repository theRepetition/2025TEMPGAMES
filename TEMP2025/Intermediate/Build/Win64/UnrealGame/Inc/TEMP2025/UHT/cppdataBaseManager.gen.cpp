// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/cppdataBaseManager.h"
#include "TEMP2025/ItemStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodecppdataBaseManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TEMP2025_API UClass* Z_Construct_UClass_UcppdataBaseManager();
TEMP2025_API UClass* Z_Construct_UClass_UcppdataBaseManager_NoRegister();
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UcppdataBaseManager Function CloseDatabase *******************************
struct Z_Construct_UFunction_UcppdataBaseManager_CloseDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Database" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x9c\x85 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\xb2\xa0\xec\x9d\xb4\xec\x8a\xa4 \xeb\x8b\xab\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "cppdataBaseManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x9c\x85 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\xb2\xa0\xec\x9d\xb4\xec\x8a\xa4 \xeb\x8b\xab\xea\xb8\xb0" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function CloseDatabase constinit property declarations *************************
// ********** End Function CloseDatabase constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppdataBaseManager_CloseDatabase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppdataBaseManager, nullptr, "CloseDatabase", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppdataBaseManager_CloseDatabase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppdataBaseManager_CloseDatabase_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UcppdataBaseManager_CloseDatabase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppdataBaseManager_CloseDatabase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppdataBaseManager::execCloseDatabase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseDatabase();
	P_NATIVE_END;
}
// ********** End Class UcppdataBaseManager Function CloseDatabase *********************************

// ********** Begin Class UcppdataBaseManager Function GetAllItems *********************************
struct Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics
{
	struct cppdataBaseManager_eventGetAllItems_Parms
	{
		TArray<FItemData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Database" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x9c\x85 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xa0\x84\xec\xb2\xb4 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xea\xb8\xb0 (ItemID \xed\x8f\xac\xed\x95\xa8)\n" },
#endif
		{ "ModuleRelativePath", "cppdataBaseManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x9c\x85 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xa0\x84\xec\xb2\xb4 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xea\xb8\xb0 (ItemID \xed\x8f\xac\xed\x95\xa8)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllItems constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllItems constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllItems Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(0, nullptr) }; // 724998862
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppdataBaseManager_eventGetAllItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 724998862
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::PropPointers) < 2048);
// ********** End Function GetAllItems Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppdataBaseManager, nullptr, "GetAllItems", 	Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::cppdataBaseManager_eventGetAllItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::cppdataBaseManager_eventGetAllItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UcppdataBaseManager_GetAllItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppdataBaseManager::execGetAllItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FItemData>*)Z_Param__Result=P_THIS->GetAllItems();
	P_NATIVE_END;
}
// ********** End Class UcppdataBaseManager Function GetAllItems ***********************************

// ********** Begin Class UcppdataBaseManager Function OpenDatabase ********************************
struct Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics
{
	struct cppdataBaseManager_eventOpenDatabase_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Database" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x9c\x85 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\xb2\xa0\xec\x9d\xb4\xec\x8a\xa4 \xec\x97\xb4\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "cppdataBaseManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x9c\x85 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\xb2\xa0\xec\x9d\xb4\xec\x8a\xa4 \xec\x97\xb4\xea\xb8\xb0" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OpenDatabase constinit property declarations **************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OpenDatabase constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OpenDatabase Property Definitions *************************************
void Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((cppdataBaseManager_eventOpenDatabase_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(cppdataBaseManager_eventOpenDatabase_Parms), &Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::PropPointers) < 2048);
// ********** End Function OpenDatabase Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppdataBaseManager, nullptr, "OpenDatabase", 	Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::cppdataBaseManager_eventOpenDatabase_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::cppdataBaseManager_eventOpenDatabase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppdataBaseManager::execOpenDatabase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OpenDatabase();
	P_NATIVE_END;
}
// ********** End Class UcppdataBaseManager Function OpenDatabase **********************************

// ********** Begin Class UcppdataBaseManager ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UcppdataBaseManager;
UClass* UcppdataBaseManager::GetPrivateStaticClass()
{
	using TClass = UcppdataBaseManager;
	if (!Z_Registration_Info_UClass_UcppdataBaseManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("cppdataBaseManager"),
			Z_Registration_Info_UClass_UcppdataBaseManager.InnerSingleton,
			StaticRegisterNativesUcppdataBaseManager,
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
	return Z_Registration_Info_UClass_UcppdataBaseManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UcppdataBaseManager_NoRegister()
{
	return UcppdataBaseManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UcppdataBaseManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "cppdataBaseManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "cppdataBaseManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UcppdataBaseManager constinit property declarations **********************
// ********** End Class UcppdataBaseManager constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CloseDatabase"), .Pointer = &UcppdataBaseManager::execCloseDatabase },
		{ .NameUTF8 = UTF8TEXT("GetAllItems"), .Pointer = &UcppdataBaseManager::execGetAllItems },
		{ .NameUTF8 = UTF8TEXT("OpenDatabase"), .Pointer = &UcppdataBaseManager::execOpenDatabase },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UcppdataBaseManager_CloseDatabase, "CloseDatabase" }, // 4081531185
		{ &Z_Construct_UFunction_UcppdataBaseManager_GetAllItems, "GetAllItems" }, // 972697466
		{ &Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase, "OpenDatabase" }, // 518392192
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcppdataBaseManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UcppdataBaseManager_Statics
UObject* (*const Z_Construct_UClass_UcppdataBaseManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UcppdataBaseManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UcppdataBaseManager_Statics::ClassParams = {
	&UcppdataBaseManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UcppdataBaseManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UcppdataBaseManager_Statics::Class_MetaDataParams)
};
void UcppdataBaseManager::StaticRegisterNativesUcppdataBaseManager()
{
	UClass* Class = UcppdataBaseManager::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UcppdataBaseManager_Statics::Funcs));
}
UClass* Z_Construct_UClass_UcppdataBaseManager()
{
	if (!Z_Registration_Info_UClass_UcppdataBaseManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UcppdataBaseManager.OuterSingleton, Z_Construct_UClass_UcppdataBaseManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UcppdataBaseManager.OuterSingleton;
}
UcppdataBaseManager::UcppdataBaseManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UcppdataBaseManager);
UcppdataBaseManager::~UcppdataBaseManager() {}
// ********** End Class UcppdataBaseManager ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h__Script_TEMP2025_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UcppdataBaseManager, UcppdataBaseManager::StaticClass, TEXT("UcppdataBaseManager"), &Z_Registration_Info_UClass_UcppdataBaseManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppdataBaseManager), 567153685U) },
	};
}; // Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h__Script_TEMP2025_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h__Script_TEMP2025_193039512{
	TEXT("/Script/TEMP2025"),
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h__Script_TEMP2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h__Script_TEMP2025_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
