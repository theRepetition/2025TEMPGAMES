// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/cppLootingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecppLootingComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TEMP2025_API UClass* Z_Construct_UClass_UcppLootingComponent();
	TEMP2025_API UClass* Z_Construct_UClass_UcppLootingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	void UcppLootingComponent::StaticRegisterNativesUcppLootingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UcppLootingComponent);
	UClass* Z_Construct_UClass_UcppLootingComponent_NoRegister()
	{
		return UcppLootingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UcppLootingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UcppLootingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UcppLootingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "cppLootingComponent.h" },
		{ "ModuleRelativePath", "cppLootingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UcppLootingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcppLootingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UcppLootingComponent_Statics::ClassParams = {
		&UcppLootingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UcppLootingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UcppLootingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UcppLootingComponent()
	{
		if (!Z_Registration_Info_UClass_UcppLootingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UcppLootingComponent.OuterSingleton, Z_Construct_UClass_UcppLootingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UcppLootingComponent.OuterSingleton;
	}
	template<> TEMP2025_API UClass* StaticClass<UcppLootingComponent>()
	{
		return UcppLootingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UcppLootingComponent);
	UcppLootingComponent::~UcppLootingComponent() {}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppLootingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppLootingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UcppLootingComponent, UcppLootingComponent::StaticClass, TEXT("UcppLootingComponent"), &Z_Registration_Info_UClass_UcppLootingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppLootingComponent), 3819212842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppLootingComponent_h_4178784492(TEXT("/Script/TEMP2025"),
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppLootingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppLootingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
