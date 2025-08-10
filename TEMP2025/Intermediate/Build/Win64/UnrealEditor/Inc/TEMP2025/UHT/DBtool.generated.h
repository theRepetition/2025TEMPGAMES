// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DBtool.h"

#ifdef TEMP2025_DBtool_generated_h
#error "DBtool.generated.h already included, missing '#pragma once' in DBtool.h"
#endif
#define TEMP2025_DBtool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDBTool ******************************************************************
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInsertTestData); \
	DECLARE_FUNCTION(execCreateDatabase);


TEMP2025_API UClass* Z_Construct_UClass_UDBTool_NoRegister();

#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBTool(); \
	friend struct Z_Construct_UClass_UDBTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEMP2025_API UClass* Z_Construct_UClass_UDBTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UDBTool, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TEMP2025"), Z_Construct_UClass_UDBTool_NoRegister) \
	DECLARE_SERIALIZER(UDBTool)


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDBTool(UDBTool&&) = delete; \
	UDBTool(const UDBTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBTool) \
	NO_API virtual ~UDBTool();


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h_8_PROLOG
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h_11_INCLASS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDBTool;

// ********** End Class UDBTool ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_DBtool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
