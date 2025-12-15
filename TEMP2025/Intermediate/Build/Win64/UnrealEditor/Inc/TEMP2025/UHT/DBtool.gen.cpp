// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/DBtool.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDBtool() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
TEMP2025_API UClass* Z_Construct_UClass_UDBTool();
TEMP2025_API UClass* Z_Construct_UClass_UDBTool_NoRegister();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDBTool Function CreateDatabase ******************************************
struct Z_Construct_UFunction_UDBTool_CreateDatabase_Statics
{
	struct DBTool_eventCreateDatabase_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Database Setup" },
		{ "ModuleRelativePath", "DBtool.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DBTool_eventCreateDatabase_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DBTool_eventCreateDatabase_Parms), &Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDBTool, nullptr, "CreateDatabase", Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::DBTool_eventCreateDatabase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::DBTool_eventCreateDatabase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDBTool_CreateDatabase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDBTool_CreateDatabase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDBTool::execCreateDatabase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CreateDatabase();
	P_NATIVE_END;
}
// ********** End Class UDBTool Function CreateDatabase ********************************************

// ********** Begin Class UDBTool Function InsertTestData ******************************************
struct Z_Construct_UFunction_UDBTool_InsertTestData_Statics
{
	struct DBTool_eventInsertTestData_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Database Setup" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xec\x8b\xa4\xed\x96\x89\xeb\x90\xa0 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "DBtool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xec\x8b\xa4\xed\x96\x89\xeb\x90\xa0 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDBTool_InsertTestData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DBTool_eventInsertTestData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBTool_InsertTestData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DBTool_eventInsertTestData_Parms), &Z_Construct_UFunction_UDBTool_InsertTestData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBTool_InsertTestData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBTool_InsertTestData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTool_InsertTestData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBTool_InsertTestData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDBTool, nullptr, "InsertTestData", Z_Construct_UFunction_UDBTool_InsertTestData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTool_InsertTestData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDBTool_InsertTestData_Statics::DBTool_eventInsertTestData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDBTool_InsertTestData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDBTool_InsertTestData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDBTool_InsertTestData_Statics::DBTool_eventInsertTestData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDBTool_InsertTestData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDBTool_InsertTestData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDBTool::execInsertTestData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InsertTestData();
	P_NATIVE_END;
}
// ********** End Class UDBTool Function InsertTestData ********************************************

// ********** Begin Class UDBTool ******************************************************************
void UDBTool::StaticRegisterNativesUDBTool()
{
	UClass* Class = UDBTool::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateDatabase", &UDBTool::execCreateDatabase },
		{ "InsertTestData", &UDBTool::execInsertTestData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDBTool;
UClass* UDBTool::GetPrivateStaticClass()
{
	using TClass = UDBTool;
	if (!Z_Registration_Info_UClass_UDBTool.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DBTool"),
			Z_Registration_Info_UClass_UDBTool.InnerSingleton,
			StaticRegisterNativesUDBTool,
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
	return Z_Registration_Info_UClass_UDBTool.InnerSingleton;
}
UClass* Z_Construct_UClass_UDBTool_NoRegister()
{
	return UDBTool::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDBTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBtool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "DBtool.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBTool_CreateDatabase, "CreateDatabase" }, // 464817439
		{ &Z_Construct_UFunction_UDBTool_InsertTestData, "InsertTestData" }, // 277812764
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDBTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDBTool_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDBTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UDBTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDBTool()
{
	if (!Z_Registration_Info_UClass_UDBTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDBTool.OuterSingleton, Z_Construct_UClass_UDBTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDBTool.OuterSingleton;
}
UDBTool::UDBTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDBTool);
UDBTool::~UDBTool() {}
// ********** End Class UDBTool ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h__Script_TEMP2025_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDBTool, UDBTool::StaticClass, TEXT("UDBTool"), &Z_Registration_Info_UClass_UDBTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDBTool), 1996983095U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h__Script_TEMP2025_1554883303(TEXT("/Script/TEMP2025"),
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h__Script_TEMP2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h__Script_TEMP2025_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
