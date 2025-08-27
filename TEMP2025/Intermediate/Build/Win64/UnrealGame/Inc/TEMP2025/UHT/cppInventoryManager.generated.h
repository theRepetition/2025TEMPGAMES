// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "cppInventoryManager.h"

#ifdef TEMP2025_cppInventoryManager_generated_h
#error "cppInventoryManager.generated.h already included, missing '#pragma once' in cppInventoryManager.h"
#endif
#define TEMP2025_cppInventoryManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UcppdataBaseManager;
struct FItemData;

// ********** Begin Class UcppInventoryManager *****************************************************
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInventoryItems); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execLoadInventory);


TEMP2025_API UClass* Z_Construct_UClass_UcppInventoryManager_NoRegister();

#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUcppInventoryManager(); \
	friend struct Z_Construct_UClass_UcppInventoryManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEMP2025_API UClass* Z_Construct_UClass_UcppInventoryManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UcppInventoryManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TEMP2025"), Z_Construct_UClass_UcppInventoryManager_NoRegister) \
	DECLARE_SERIALIZER(UcppInventoryManager)


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UcppInventoryManager(UcppInventoryManager&&) = delete; \
	UcppInventoryManager(const UcppInventoryManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UcppInventoryManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UcppInventoryManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UcppInventoryManager) \
	NO_API virtual ~UcppInventoryManager();


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_9_PROLOG
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_INCLASS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UcppInventoryManager;

// ********** End Class UcppInventoryManager *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
