// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Public/SQLiteManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQLiteManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TEMP2025_API UClass* Z_Construct_UClass_USQLiteManager();
	TEMP2025_API UClass* Z_Construct_UClass_USQLiteManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	void USQLiteManager::StaticRegisterNativesUSQLiteManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USQLiteManager);
	UClass* Z_Construct_UClass_USQLiteManager_NoRegister()
	{
		return USQLiteManager::StaticClass();
	}
	struct Z_Construct_UClass_USQLiteManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQLiteManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQLiteManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SQLiteManager.h" },
		{ "ModuleRelativePath", "Public/SQLiteManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQLiteManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQLiteManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USQLiteManager_Statics::ClassParams = {
		&USQLiteManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USQLiteManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQLiteManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQLiteManager()
	{
		if (!Z_Registration_Info_UClass_USQLiteManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USQLiteManager.OuterSingleton, Z_Construct_UClass_USQLiteManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USQLiteManager.OuterSingleton;
	}
	template<> TEMP2025_API UClass* StaticClass<USQLiteManager>()
	{
		return USQLiteManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQLiteManager);
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_SQLiteManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_SQLiteManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USQLiteManager, USQLiteManager::StaticClass, TEXT("USQLiteManager"), &Z_Registration_Info_UClass_USQLiteManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USQLiteManager), 146174987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_SQLiteManager_h_3414671195(TEXT("/Script/TEMP2025"),
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_SQLiteManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_SQLiteManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
