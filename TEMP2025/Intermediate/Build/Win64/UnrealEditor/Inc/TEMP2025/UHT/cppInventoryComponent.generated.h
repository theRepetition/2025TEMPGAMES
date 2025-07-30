// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "cppInventoryComponent.h"

#ifdef TEMP2025_cppInventoryComponent_generated_h
#error "cppInventoryComponent.generated.h already included, missing '#pragma once' in cppInventoryComponent.h"
#endif
#define TEMP2025_cppInventoryComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FItemData;

// ********** Begin Class UcppInventoryComponent ***************************************************
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSortInventory); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem);


TEMP2025_API UClass* Z_Construct_UClass_UcppInventoryComponent_NoRegister();

#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUcppInventoryComponent(); \
	friend struct Z_Construct_UClass_UcppInventoryComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEMP2025_API UClass* Z_Construct_UClass_UcppInventoryComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UcppInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TEMP2025"), Z_Construct_UClass_UcppInventoryComponent_NoRegister) \
	DECLARE_SERIALIZER(UcppInventoryComponent)


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UcppInventoryComponent(UcppInventoryComponent&&) = delete; \
	UcppInventoryComponent(const UcppInventoryComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UcppInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UcppInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UcppInventoryComponent) \
	NO_API virtual ~UcppInventoryComponent();


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h_9_PROLOG
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UcppInventoryComponent;

// ********** End Class UcppInventoryComponent *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppInventoryComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
