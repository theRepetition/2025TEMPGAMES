// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/DBtool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBtool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TEMP2025_API UClass* Z_Construct_UClass_UDBTool();
	TEMP2025_API UClass* Z_Construct_UClass_UDBTool_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	DEFINE_FUNCTION(UDBTool::execInsertTestData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InsertTestData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBTool::execCreateDatabase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateDatabase();
		P_NATIVE_END;
	}
	void UDBTool::StaticRegisterNativesUDBTool()
	{
		UClass* Class = UDBTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDatabase", &UDBTool::execCreateDatabase },
			{ "InsertTestData", &UDBTool::execInsertTestData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBTool_CreateDatabase_Statics
	{
		struct DBTool_eventCreateDatabase_Parms
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
	void Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBTool_eventCreateDatabase_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DBTool_eventCreateDatabase_Parms), &Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Database Setup" },
		{ "Comment", "// \xe2\x9c\x85 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\xb2\xa0\xec\x9d\xb4\xec\x8a\xa4 \xec\x83\x9d\xec\x84\xb1 \xeb\xb0\x8f \xed\x85\x8c\xec\x9d\xb4\xeb\xb8\x94 \xec\x8a\xa4\xed\x82\xa4\xeb\xa7\x88 \xec\x84\xa4\xec\xa0\x95\n" },
		{ "ModuleRelativePath", "DBtool.h" },
		{ "ToolTip", "\xe2\x9c\x85 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0\xeb\xb2\xa0\xec\x9d\xb4\xec\x8a\xa4 \xec\x83\x9d\xec\x84\xb1 \xeb\xb0\x8f \xed\x85\x8c\xec\x9d\xb4\xeb\xb8\x94 \xec\x8a\xa4\xed\x82\xa4\xeb\xa7\x88 \xec\x84\xa4\xec\xa0\x95" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTool, nullptr, "CreateDatabase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::DBTool_eventCreateDatabase_Parms), Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTool_CreateDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBTool_InsertTestData_Statics
	{
		struct DBTool_eventInsertTestData_Parms
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
	void Z_Construct_UFunction_UDBTool_InsertTestData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBTool_eventInsertTestData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBTool_InsertTestData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DBTool_eventInsertTestData_Parms), &Z_Construct_UFunction_UDBTool_InsertTestData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTool_InsertTestData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTool_InsertTestData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBTool_InsertTestData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Database Setup" },
		{ "Comment", "// \xe2\x9c\x85 \xec\xb4\x88\xea\xb8\xb0 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0 (\xed\x85\x8c\xec\x8a\xa4\xed\x8a\xb8 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0) \xec\x82\xbd\xec\x9e\x85\n" },
		{ "ModuleRelativePath", "DBtool.h" },
		{ "ToolTip", "\xe2\x9c\x85 \xec\xb4\x88\xea\xb8\xb0 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0 (\xed\x85\x8c\xec\x8a\xa4\xed\x8a\xb8 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0) \xec\x82\xbd\xec\x9e\x85" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTool_InsertTestData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBTool, nullptr, "InsertTestData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDBTool_InsertTestData_Statics::DBTool_eventInsertTestData_Parms), Z_Construct_UFunction_UDBTool_InsertTestData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTool_InsertTestData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBTool_InsertTestData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTool_InsertTestData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBTool_InsertTestData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDBTool_InsertTestData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDBTool);
	UClass* Z_Construct_UClass_UDBTool_NoRegister()
	{
		return UDBTool::StaticClass();
	}
	struct Z_Construct_UClass_UDBTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBTool_CreateDatabase, "CreateDatabase" }, // 4037471422
		{ &Z_Construct_UFunction_UDBTool_InsertTestData, "InsertTestData" }, // 2098460283
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBtool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DBtool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDBTool_Statics::ClassParams = {
		&UDBTool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBTool()
	{
		if (!Z_Registration_Info_UClass_UDBTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDBTool.OuterSingleton, Z_Construct_UClass_UDBTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDBTool.OuterSingleton;
	}
	template<> TEMP2025_API UClass* StaticClass<UDBTool>()
	{
		return UDBTool::StaticClass();
	}
	UDBTool::UDBTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBTool);
	UDBTool::~UDBTool() {}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDBTool, UDBTool::StaticClass, TEXT("UDBTool"), &Z_Registration_Info_UClass_UDBTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDBTool), 2487337259U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h_1869493371(TEXT("/Script/TEMP2025"),
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
