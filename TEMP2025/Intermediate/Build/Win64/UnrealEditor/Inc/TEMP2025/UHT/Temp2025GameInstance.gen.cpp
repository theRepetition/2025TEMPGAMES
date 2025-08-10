// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/Temp2025GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTemp2025GameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
TEMP2025_API UClass* Z_Construct_UClass_UcppdataBaseManager_NoRegister();
TEMP2025_API UClass* Z_Construct_UClass_UcppInventoryManager_NoRegister();
TEMP2025_API UClass* Z_Construct_UClass_UTemp2025GameInstance();
TEMP2025_API UClass* Z_Construct_UClass_UTemp2025GameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTemp2025GameInstance ****************************************************
void UTemp2025GameInstance::StaticRegisterNativesUTemp2025GameInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTemp2025GameInstance;
UClass* UTemp2025GameInstance::GetPrivateStaticClass()
{
	using TClass = UTemp2025GameInstance;
	if (!Z_Registration_Info_UClass_UTemp2025GameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Temp2025GameInstance"),
			Z_Registration_Info_UClass_UTemp2025GameInstance.InnerSingleton,
			StaticRegisterNativesUTemp2025GameInstance,
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
	return Z_Registration_Info_UClass_UTemp2025GameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UTemp2025GameInstance_NoRegister()
{
	return UTemp2025GameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTemp2025GameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Temp2025GameInstance.h" },
		{ "ModuleRelativePath", "Temp2025GameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DBManager_MetaData[] = {
		{ "Category", "Database" },
		{ "ModuleRelativePath", "Temp2025GameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoryManager_MetaData[] = {
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Temp2025GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DBManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemp2025GameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTemp2025GameInstance_Statics::NewProp_DBManager = { "DBManager", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemp2025GameInstance, DBManager), Z_Construct_UClass_UcppdataBaseManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DBManager_MetaData), NewProp_DBManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTemp2025GameInstance_Statics::NewProp_InventoryManager = { "InventoryManager", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTemp2025GameInstance, InventoryManager), Z_Construct_UClass_UcppInventoryManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoryManager_MetaData), NewProp_InventoryManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTemp2025GameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemp2025GameInstance_Statics::NewProp_DBManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemp2025GameInstance_Statics::NewProp_InventoryManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTemp2025GameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTemp2025GameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTemp2025GameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemp2025GameInstance_Statics::ClassParams = {
	&UTemp2025GameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTemp2025GameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTemp2025GameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTemp2025GameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UTemp2025GameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTemp2025GameInstance()
{
	if (!Z_Registration_Info_UClass_UTemp2025GameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemp2025GameInstance.OuterSingleton, Z_Construct_UClass_UTemp2025GameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTemp2025GameInstance.OuterSingleton;
}
UTemp2025GameInstance::UTemp2025GameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTemp2025GameInstance);
UTemp2025GameInstance::~UTemp2025GameInstance() {}
// ********** End Class UTemp2025GameInstance ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Temp2025GameInstance_h__Script_TEMP2025_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTemp2025GameInstance, UTemp2025GameInstance::StaticClass, TEXT("UTemp2025GameInstance"), &Z_Registration_Info_UClass_UTemp2025GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemp2025GameInstance), 136151945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Temp2025GameInstance_h__Script_TEMP2025_352477230(TEXT("/Script/TEMP2025"),
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Temp2025GameInstance_h__Script_TEMP2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Temp2025GameInstance_h__Script_TEMP2025_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
