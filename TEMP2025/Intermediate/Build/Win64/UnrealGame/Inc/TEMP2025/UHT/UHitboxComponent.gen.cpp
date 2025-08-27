// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/UHitboxComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUHitboxComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
TEMP2025_API UClass* Z_Construct_UClass_UHitboxComponent();
TEMP2025_API UClass* Z_Construct_UClass_UHitboxComponent_NoRegister();
TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EAttackDirection();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHitboxComponent *********************************************************
void UHitboxComponent::StaticRegisterNativesUHitboxComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHitboxComponent;
UClass* UHitboxComponent::GetPrivateStaticClass()
{
	using TClass = UHitboxComponent;
	if (!Z_Registration_Info_UClass_UHitboxComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HitboxComponent"),
			Z_Registration_Info_UClass_UHitboxComponent.InnerSingleton,
			StaticRegisterNativesUHitboxComponent,
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
	return Z_Registration_Info_UClass_UHitboxComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UHitboxComponent_NoRegister()
{
	return UHitboxComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHitboxComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "UHitboxComponent.h" },
		{ "ModuleRelativePath", "UHitboxComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitZoneType_MetaData[] = {
		{ "Category", "Hitbox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x96\xb4\xeb\x96\xa4 \xeb\xb6\x80\xec\x9c\x84\xec\x9d\xb8\xec\xa7\x80 \xea\xb5\xac\xeb\xb6\x84\xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\x9c Enum\n" },
#endif
		{ "ModuleRelativePath", "UHitboxComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x96\xb4\xeb\x96\xa4 \xeb\xb6\x80\xec\x9c\x84\xec\x9d\xb8\xec\xa7\x80 \xea\xb5\xac\xeb\xb6\x84\xed\x95\x98\xea\xb8\xb0 \xec\x9c\x84\xed\x95\x9c Enum" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_HitZoneType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HitZoneType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHitboxComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHitboxComponent_Statics::NewProp_HitZoneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHitboxComponent_Statics::NewProp_HitZoneType = { "HitZoneType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHitboxComponent, HitZoneType), Z_Construct_UEnum_TEMP2025_EAttackDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitZoneType_MetaData), NewProp_HitZoneType_MetaData) }; // 4248136193
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHitboxComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitboxComponent_Statics::NewProp_HitZoneType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHitboxComponent_Statics::NewProp_HitZoneType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitboxComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHitboxComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBoxComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitboxComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitboxComponent_Statics::ClassParams = {
	&UHitboxComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHitboxComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHitboxComponent_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitboxComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitboxComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHitboxComponent()
{
	if (!Z_Registration_Info_UClass_UHitboxComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitboxComponent.OuterSingleton, Z_Construct_UClass_UHitboxComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitboxComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHitboxComponent);
UHitboxComponent::~UHitboxComponent() {}
// ********** End Class UHitboxComponent ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_UHitboxComponent_h__Script_TEMP2025_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitboxComponent, UHitboxComponent::StaticClass, TEXT("UHitboxComponent"), &Z_Registration_Info_UClass_UHitboxComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitboxComponent), 2713953213U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_UHitboxComponent_h__Script_TEMP2025_2942924884(TEXT("/Script/TEMP2025"),
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_UHitboxComponent_h__Script_TEMP2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_UHitboxComponent_h__Script_TEMP2025_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
