// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/cppdataBaseManager.h"
#include "TEMP2025/ItemStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecppdataBaseManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TEMP2025_API UClass* Z_Construct_UClass_UcppdataBaseManager();
	TEMP2025_API UClass* Z_Construct_UClass_UcppdataBaseManager_NoRegister();
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	DEFINE_FUNCTION(UcppdataBaseManager::execGetAllItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FItemData>*)Z_Param__Result=P_THIS->GetAllItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UcppdataBaseManager::execCloseDatabase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseDatabase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UcppdataBaseManager::execOpenDatabase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OpenDatabase();
		P_NATIVE_END;
	}
	void UcppdataBaseManager::StaticRegisterNativesUcppdataBaseManager()
	{
		UClass* Class = UcppdataBaseManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDatabase", &UcppdataBaseManager::execCloseDatabase },
			{ "GetAllItems", &UcppdataBaseManager::execGetAllItems },
			{ "OpenDatabase", &UcppdataBaseManager::execOpenDatabase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UcppdataBaseManager_CloseDatabase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppdataBaseManager_CloseDatabase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Database" },
		{ "Comment", "// \xe2\x9c\x85 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\xb2\xa0\xec\x9d\xb4\xec\x8a\xa4 \xeb\x8b\xab\xea\xb8\xb0\n" },
		{ "ModuleRelativePath", "cppdataBaseManager.h" },
		{ "ToolTip", "\xe2\x9c\x85 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\xb2\xa0\xec\x9d\xb4\xec\x8a\xa4 \xeb\x8b\xab\xea\xb8\xb0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppdataBaseManager_CloseDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcppdataBaseManager, nullptr, "CloseDatabase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcppdataBaseManager_CloseDatabase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppdataBaseManager_CloseDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcppdataBaseManager_CloseDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppdataBaseManager_CloseDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics
	{
		struct cppdataBaseManager_eventGetAllItems_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 2266293243
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppdataBaseManager_eventGetAllItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2266293243
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Database" },
		{ "Comment", "// \xe2\x9c\x85 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xa0\x84\xec\xb2\xb4 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xea\xb8\xb0 (ItemID \xed\x8f\xac\xed\x95\xa8)\n" },
		{ "ModuleRelativePath", "cppdataBaseManager.h" },
		{ "ToolTip", "\xe2\x9c\x85 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xa0\x84\xec\xb2\xb4 \xea\xb0\x80\xec\xa0\xb8\xec\x98\xa4\xea\xb8\xb0 (ItemID \xed\x8f\xac\xed\x95\xa8)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcppdataBaseManager, nullptr, "GetAllItems", nullptr, nullptr, sizeof(Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::cppdataBaseManager_eventGetAllItems_Parms), Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcppdataBaseManager_GetAllItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppdataBaseManager_GetAllItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics
	{
		struct cppdataBaseManager_eventOpenDatabase_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((cppdataBaseManager_eventOpenDatabase_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(cppdataBaseManager_eventOpenDatabase_Parms), &Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Database" },
		{ "Comment", "// \xe2\x9c\x85 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\xb2\xa0\xec\x9d\xb4\xec\x8a\xa4 \xec\x97\xb4\xea\xb8\xb0\n" },
		{ "ModuleRelativePath", "cppdataBaseManager.h" },
		{ "ToolTip", "\xe2\x9c\x85 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\xb2\xa0\xec\x9d\xb4\xec\x8a\xa4 \xec\x97\xb4\xea\xb8\xb0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcppdataBaseManager, nullptr, "OpenDatabase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::cppdataBaseManager_eventOpenDatabase_Parms), Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UcppdataBaseManager);
	UClass* Z_Construct_UClass_UcppdataBaseManager_NoRegister()
	{
		return UcppdataBaseManager::StaticClass();
	}
	struct Z_Construct_UClass_UcppdataBaseManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UcppdataBaseManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UcppdataBaseManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UcppdataBaseManager_CloseDatabase, "CloseDatabase" }, // 1545517493
		{ &Z_Construct_UFunction_UcppdataBaseManager_GetAllItems, "GetAllItems" }, // 1270752754
		{ &Z_Construct_UFunction_UcppdataBaseManager_OpenDatabase, "OpenDatabase" }, // 4162189630
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UcppdataBaseManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "cppdataBaseManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "cppdataBaseManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UcppdataBaseManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcppdataBaseManager>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UcppdataBaseManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UcppdataBaseManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UcppdataBaseManager()
	{
		if (!Z_Registration_Info_UClass_UcppdataBaseManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UcppdataBaseManager.OuterSingleton, Z_Construct_UClass_UcppdataBaseManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UcppdataBaseManager.OuterSingleton;
	}
	template<> TEMP2025_API UClass* StaticClass<UcppdataBaseManager>()
	{
		return UcppdataBaseManager::StaticClass();
	}
	UcppdataBaseManager::UcppdataBaseManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UcppdataBaseManager);
	UcppdataBaseManager::~UcppdataBaseManager() {}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UcppdataBaseManager, UcppdataBaseManager::StaticClass, TEXT("UcppdataBaseManager"), &Z_Registration_Info_UClass_UcppdataBaseManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppdataBaseManager), 2941675510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h_3049180953(TEXT("/Script/TEMP2025"),
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
