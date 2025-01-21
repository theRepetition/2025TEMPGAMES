// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/Public/CPP_NPC_Interaction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_NPC_Interaction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TEMP2025_API UClass* Z_Construct_UClass_UCPP_NPC_Interaction();
	TEMP2025_API UClass* Z_Construct_UClass_UCPP_NPC_Interaction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	void UCPP_NPC_Interaction::StaticRegisterNativesUCPP_NPC_Interaction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_NPC_Interaction);
	UClass* Z_Construct_UClass_UCPP_NPC_Interaction_NoRegister()
	{
		return UCPP_NPC_Interaction::StaticClass();
	}
	struct Z_Construct_UClass_UCPP_NPC_Interaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPP_NPC_Interaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_NPC_Interaction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CPP_NPC_Interaction.h" },
		{ "ModuleRelativePath", "Public/CPP_NPC_Interaction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPP_NPC_Interaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_NPC_Interaction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_NPC_Interaction_Statics::ClassParams = {
		&UCPP_NPC_Interaction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCPP_NPC_Interaction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_NPC_Interaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCPP_NPC_Interaction()
	{
		if (!Z_Registration_Info_UClass_UCPP_NPC_Interaction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_NPC_Interaction.OuterSingleton, Z_Construct_UClass_UCPP_NPC_Interaction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCPP_NPC_Interaction.OuterSingleton;
	}
	template<> TEMP2025_API UClass* StaticClass<UCPP_NPC_Interaction>()
	{
		return UCPP_NPC_Interaction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_NPC_Interaction);
	UCPP_NPC_Interaction::~UCPP_NPC_Interaction() {}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_CPP_NPC_Interaction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_CPP_NPC_Interaction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_NPC_Interaction, UCPP_NPC_Interaction::StaticClass, TEXT("UCPP_NPC_Interaction"), &Z_Registration_Info_UClass_UCPP_NPC_Interaction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_NPC_Interaction), 2808010484U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_CPP_NPC_Interaction_h_3167993364(TEXT("/Script/TEMP2025"),
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_CPP_NPC_Interaction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_CPP_NPC_Interaction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
