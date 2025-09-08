// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeaponDefinition.h"

#ifdef TEMP2025_WeaponDefinition_generated_h
#error "WeaponDefinition.generated.h already included, missing '#pragma once' in WeaponDefinition.h"
#endif
#define TEMP2025_WeaponDefinition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWeaponDefinitionTypes ********************************************
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_WeaponDefinition_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeaponDefinitionTypes_Statics; \
	TEMP2025_API static class UScriptStruct* StaticStruct();


struct FWeaponDefinitionTypes;
// ********** End ScriptStruct FWeaponDefinitionTypes **********************************************

// ********** Begin Class UWeaponDefinition ********************************************************
TEMP2025_API UClass* Z_Construct_UClass_UWeaponDefinition_NoRegister();

#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_WeaponDefinition_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponDefinition(); \
	friend struct Z_Construct_UClass_UWeaponDefinition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEMP2025_API UClass* Z_Construct_UClass_UWeaponDefinition_NoRegister(); \
public: \
	DECLARE_CLASS2(UWeaponDefinition, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TEMP2025"), Z_Construct_UClass_UWeaponDefinition_NoRegister) \
	DECLARE_SERIALIZER(UWeaponDefinition)


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_WeaponDefinition_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWeaponDefinition(UWeaponDefinition&&) = delete; \
	UWeaponDefinition(const UWeaponDefinition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponDefinition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponDefinition) \
	NO_API virtual ~UWeaponDefinition();


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_WeaponDefinition_h_22_PROLOG
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_WeaponDefinition_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_WeaponDefinition_h_25_INCLASS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_WeaponDefinition_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWeaponDefinition;

// ********** End Class UWeaponDefinition **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_Public_WeaponDefinition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
