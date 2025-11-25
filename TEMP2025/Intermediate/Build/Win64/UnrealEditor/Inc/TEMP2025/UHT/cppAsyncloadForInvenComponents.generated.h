// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "cppAsyncloadForInvenComponents.h"

#ifdef TEMP2025_cppAsyncloadForInvenComponents_generated_h
#error "cppAsyncloadForInvenComponents.generated.h already included, missing '#pragma once' in cppAsyncloadForInvenComponents.h"
#endif
#define TEMP2025_cppAsyncloadForInvenComponents_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UStaticMesh;

// ********** Begin Delegate FOnAssetLoadedDelegate ************************************************
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_cppAsyncloadForInvenComponents_h_9_DELEGATE \
TEMP2025_API void FOnAssetLoadedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAssetLoadedDelegate, UStaticMesh* LoadedMesh);


// ********** End Delegate FOnAssetLoadedDelegate **************************************************

// ********** Begin Class UcppAsyncloadForInvenComponents ******************************************
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_cppAsyncloadForInvenComponents_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartLoadStaticMesh);


TEMP2025_API UClass* Z_Construct_UClass_UcppAsyncloadForInvenComponents_NoRegister();

#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_cppAsyncloadForInvenComponents_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUcppAsyncloadForInvenComponents(); \
	friend struct Z_Construct_UClass_UcppAsyncloadForInvenComponents_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEMP2025_API UClass* Z_Construct_UClass_UcppAsyncloadForInvenComponents_NoRegister(); \
public: \
	DECLARE_CLASS2(UcppAsyncloadForInvenComponents, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TEMP2025"), Z_Construct_UClass_UcppAsyncloadForInvenComponents_NoRegister) \
	DECLARE_SERIALIZER(UcppAsyncloadForInvenComponents)


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_cppAsyncloadForInvenComponents_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UcppAsyncloadForInvenComponents(UcppAsyncloadForInvenComponents&&) = delete; \
	UcppAsyncloadForInvenComponents(const UcppAsyncloadForInvenComponents&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UcppAsyncloadForInvenComponents); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UcppAsyncloadForInvenComponents); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UcppAsyncloadForInvenComponents) \
	NO_API virtual ~UcppAsyncloadForInvenComponents();


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_cppAsyncloadForInvenComponents_h_11_PROLOG
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_cppAsyncloadForInvenComponents_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_cppAsyncloadForInvenComponents_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_cppAsyncloadForInvenComponents_h_14_INCLASS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_cppAsyncloadForInvenComponents_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UcppAsyncloadForInvenComponents;

// ********** End Class UcppAsyncloadForInvenComponents ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_cppAsyncloadForInvenComponents_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
