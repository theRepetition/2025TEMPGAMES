// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "cppInventoryManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UcppdataBaseManager;
struct FItemData;
#ifdef TEMP2025_cppInventoryManager_generated_h
#error "cppInventoryManager.generated.h already included, missing '#pragma once' in cppInventoryManager.h"
#endif
#define TEMP2025_cppInventoryManager_generated_h

#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_SPARSE_DATA
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInventoryItems); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execLoadInventory);


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInventoryItems); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execLoadInventory);


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_ACCESSORS
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUcppInventoryManager(); \
	friend struct Z_Construct_UClass_UcppInventoryManager_Statics; \
public: \
	DECLARE_CLASS(UcppInventoryManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TEMP2025"), NO_API) \
	DECLARE_SERIALIZER(UcppInventoryManager)


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUcppInventoryManager(); \
	friend struct Z_Construct_UClass_UcppInventoryManager_Statics; \
public: \
	DECLARE_CLASS(UcppInventoryManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TEMP2025"), NO_API) \
	DECLARE_SERIALIZER(UcppInventoryManager)


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UcppInventoryManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UcppInventoryManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UcppInventoryManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UcppInventoryManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UcppInventoryManager(UcppInventoryManager&&); \
	NO_API UcppInventoryManager(const UcppInventoryManager&); \
public: \
	NO_API virtual ~UcppInventoryManager();


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UcppInventoryManager(UcppInventoryManager&&); \
	NO_API UcppInventoryManager(const UcppInventoryManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UcppInventoryManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UcppInventoryManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UcppInventoryManager) \
	NO_API virtual ~UcppInventoryManager();


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_9_PROLOG
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_SPARSE_DATA \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_RPC_WRAPPERS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_ACCESSORS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_INCLASS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_SPARSE_DATA \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_ACCESSORS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_INCLASS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMP2025_API UClass* StaticClass<class UcppInventoryManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
