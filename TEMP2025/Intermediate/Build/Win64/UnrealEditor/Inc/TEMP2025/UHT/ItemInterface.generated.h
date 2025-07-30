// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemInterface.h"

#ifdef TEMP2025_ItemInterface_generated_h
#error "ItemInterface.generated.h already included, missing '#pragma once' in ItemInterface.h"
#endif
#define TEMP2025_ItemInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FItemData;

// ********** Begin Interface UItemInterface *******************************************************
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FItemData GetItemData_Implementation() { return FItemData(); }; \
	DECLARE_FUNCTION(execGetItemData);


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_CALLBACK_WRAPPERS
TEMP2025_API UClass* Z_Construct_UClass_UItemInterface_NoRegister();

#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEMP2025_API UItemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UItemInterface(UItemInterface&&) = delete; \
	UItemInterface(const UItemInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEMP2025_API, UItemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemInterface) \
	virtual ~UItemInterface() = default;


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUItemInterface(); \
	friend struct Z_Construct_UClass_UItemInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEMP2025_API UClass* Z_Construct_UClass_UItemInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UItemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TEMP2025"), Z_Construct_UClass_UItemInterface_NoRegister) \
	DECLARE_SERIALIZER(UItemInterface)


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IItemInterface() {} \
public: \
	typedef UItemInterface UClassType; \
	typedef IItemInterface ThisClass; \
	static FItemData Execute_GetItemData(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_9_PROLOG
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_CALLBACK_WRAPPERS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UItemInterface;

// ********** End Interface UItemInterface *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
