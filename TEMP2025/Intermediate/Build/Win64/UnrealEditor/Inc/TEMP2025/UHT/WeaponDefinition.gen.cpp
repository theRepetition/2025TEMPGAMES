// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeaponDefinition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWeaponDefinition() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
TEMP2025_API UClass* Z_Construct_UClass_UWeaponDefinition();
TEMP2025_API UClass* Z_Construct_UClass_UWeaponDefinition_NoRegister();
TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponDefinitionTypes();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWeaponDefinitionTypes ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWeaponDefinitionTypes;
class UScriptStruct* FWeaponDefinitionTypes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponDefinitionTypes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWeaponDefinitionTypes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeaponDefinitionTypes, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("WeaponDefinitionTypes"));
	}
	return Z_Registration_Info_UScriptStruct_FWeaponDefinitionTypes.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWeaponDefinitionTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AssetManager\xec\x9a\xa9 \xed\x83\x80\xec\x9e\x85 \xec\x83\x81\xec\x88\x98: \"WeaponDefinition\" */" },
#endif
		{ "ModuleRelativePath", "Public/WeaponDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AssetManager\xec\x9a\xa9 \xed\x83\x80\xec\x9e\x85 \xec\x83\x81\xec\x88\x98: \"WeaponDefinition\"" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeaponDefinitionTypes>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeaponDefinitionTypes_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	nullptr,
	&NewStructOps,
	"WeaponDefinitionTypes",
	nullptr,
	0,
	sizeof(FWeaponDefinitionTypes),
	alignof(FWeaponDefinitionTypes),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeaponDefinitionTypes_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWeaponDefinitionTypes_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWeaponDefinitionTypes()
{
	if (!Z_Registration_Info_UScriptStruct_FWeaponDefinitionTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWeaponDefinitionTypes.InnerSingleton, Z_Construct_UScriptStruct_FWeaponDefinitionTypes_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWeaponDefinitionTypes.InnerSingleton;
}
// ********** End ScriptStruct FWeaponDefinitionTypes **********************************************

// ********** Begin Class UWeaponDefinition ********************************************************
void UWeaponDefinition::StaticRegisterNativesUWeaponDefinition()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UWeaponDefinition;
UClass* UWeaponDefinition::GetPrivateStaticClass()
{
	using TClass = UWeaponDefinition;
	if (!Z_Registration_Info_UClass_UWeaponDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("WeaponDefinition"),
			Z_Registration_Info_UClass_UWeaponDefinition.InnerSingleton,
			StaticRegisterNativesUWeaponDefinition,
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
	return Z_Registration_Info_UClass_UWeaponDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_UWeaponDefinition_NoRegister()
{
	return UWeaponDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UWeaponDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WeaponDefinition.h" },
		{ "ModuleRelativePath", "Public/WeaponDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WeaponDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandSocketName_MetaData[] = {
		{ "Category", "Weapon|Sockets" },
		{ "ModuleRelativePath", "Public/WeaponDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SheathSocketName_MetaData[] = {
		{ "Category", "Weapon|Sockets" },
		{ "ModuleRelativePath", "Public/WeaponDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandOffset_MetaData[] = {
		{ "Category", "Weapon|Offsets" },
		{ "ModuleRelativePath", "Public/WeaponDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SheathOffset_MetaData[] = {
		{ "Category", "Weapon|Offsets" },
		{ "ModuleRelativePath", "Public/WeaponDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponActorClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WeaponDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HandSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SheathSocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SheathOffset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWeaponDefinition_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDefinition, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponDefinition_Statics::NewProp_HandSocketName = { "HandSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDefinition, HandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandSocketName_MetaData), NewProp_HandSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponDefinition_Statics::NewProp_SheathSocketName = { "SheathSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDefinition, SheathSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SheathSocketName_MetaData), NewProp_SheathSocketName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponDefinition_Statics::NewProp_HandOffset = { "HandOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDefinition, HandOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandOffset_MetaData), NewProp_HandOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponDefinition_Statics::NewProp_SheathOffset = { "SheathOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDefinition, SheathOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SheathOffset_MetaData), NewProp_SheathOffset_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponDefinition_Statics::NewProp_WeaponActorClass = { "WeaponActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeaponDefinition, WeaponActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponActorClass_MetaData), NewProp_WeaponActorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDefinition_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDefinition_Statics::NewProp_HandSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDefinition_Statics::NewProp_SheathSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDefinition_Statics::NewProp_HandOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDefinition_Statics::NewProp_SheathOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponDefinition_Statics::NewProp_WeaponActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeaponDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeaponDefinition_Statics::ClassParams = {
	&UWeaponDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWeaponDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeaponDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeaponDefinition()
{
	if (!Z_Registration_Info_UClass_UWeaponDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeaponDefinition.OuterSingleton, Z_Construct_UClass_UWeaponDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeaponDefinition.OuterSingleton;
}
UWeaponDefinition::UWeaponDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponDefinition);
UWeaponDefinition::~UWeaponDefinition() {}
// ********** End Class UWeaponDefinition **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_WeaponDefinition_h__Script_TEMP2025_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWeaponDefinitionTypes::StaticStruct, Z_Construct_UScriptStruct_FWeaponDefinitionTypes_Statics::NewStructOps, TEXT("WeaponDefinitionTypes"), &Z_Registration_Info_UScriptStruct_FWeaponDefinitionTypes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeaponDefinitionTypes), 3392190818U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeaponDefinition, UWeaponDefinition::StaticClass, TEXT("UWeaponDefinition"), &Z_Registration_Info_UClass_UWeaponDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeaponDefinition), 927555043U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_WeaponDefinition_h__Script_TEMP2025_634176499(TEXT("/Script/TEMP2025"),
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_WeaponDefinition_h__Script_TEMP2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_WeaponDefinition_h__Script_TEMP2025_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_WeaponDefinition_h__Script_TEMP2025_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_WeaponDefinition_h__Script_TEMP2025_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
