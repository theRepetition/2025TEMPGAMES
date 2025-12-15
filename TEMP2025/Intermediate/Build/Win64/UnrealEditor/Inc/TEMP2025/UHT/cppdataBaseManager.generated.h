// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "cppdataBaseManager.h"

#ifdef TEMP2025_cppdataBaseManager_generated_h
#error "cppdataBaseManager.generated.h already included, missing '#pragma once' in cppdataBaseManager.h"
#endif
#define TEMP2025_cppdataBaseManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItemData;

// ********** Begin Class UcppdataBaseManager ******************************************************
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAllItems); \
	DECLARE_FUNCTION(execCloseDatabase); \
	DECLARE_FUNCTION(execOpenDatabase);


struct Z_Construct_UClass_UcppdataBaseManager_Statics;
TEMP2025_API UClass* Z_Construct_UClass_UcppdataBaseManager_NoRegister();

#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUcppdataBaseManager(); \
	friend struct ::Z_Construct_UClass_UcppdataBaseManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEMP2025_API UClass* ::Z_Construct_UClass_UcppdataBaseManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UcppdataBaseManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TEMP2025"), Z_Construct_UClass_UcppdataBaseManager_NoRegister) \
	DECLARE_SERIALIZER(UcppdataBaseManager)


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UcppdataBaseManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UcppdataBaseManager(UcppdataBaseManager&&) = delete; \
	UcppdataBaseManager(const UcppdataBaseManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UcppdataBaseManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UcppdataBaseManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UcppdataBaseManager) \
	NO_API virtual ~UcppdataBaseManager();


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h_12_PROLOG
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h_15_INCLASS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UcppdataBaseManager;

// ********** End Class UcppdataBaseManager ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppdataBaseManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
