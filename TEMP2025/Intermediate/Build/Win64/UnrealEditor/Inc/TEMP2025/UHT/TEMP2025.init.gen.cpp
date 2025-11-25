// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTEMP2025_init() {}
	TEMP2025_API UFunction* Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TEMP2025;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TEMP2025()
	{
		if (!Z_Registration_Info_UPackage__Script_TEMP2025.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TEMP2025_OnAssetLoadedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TEMP2025",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x2A45CE88,
				0xE89FC4C5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TEMP2025.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TEMP2025.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TEMP2025(Z_Construct_UPackage__Script_TEMP2025, TEXT("/Script/TEMP2025"), Z_Registration_Info_UPackage__Script_TEMP2025, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2A45CE88, 0xE89FC4C5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
