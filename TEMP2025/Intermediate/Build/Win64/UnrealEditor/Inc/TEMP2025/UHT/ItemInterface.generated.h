// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItemData;
#ifdef TEMP2025_ItemInterface_generated_h
#error "ItemInterface.generated.h already included, missing '#pragma once' in ItemInterface.h"
#endif
#define TEMP2025_ItemInterface_generated_h

#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_SPARSE_DATA
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_RPC_WRAPPERS \
	virtual FItemData GetItemData_Implementation() { return FItemData(); }; \
 \
	DECLARE_FUNCTION(execGetItemData);


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FItemData GetItemData_Implementation() { return FItemData(); }; \
 \
	DECLARE_FUNCTION(execGetItemData);


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_ACCESSORS
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_CALLBACK_WRAPPERS
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEMP2025_API UItemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEMP2025_API, UItemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TEMP2025_API UItemInterface(UItemInterface&&); \
	TEMP2025_API UItemInterface(const UItemInterface&); \
public: \
	TEMP2025_API virtual ~UItemInterface();


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEMP2025_API UItemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TEMP2025_API UItemInterface(UItemInterface&&); \
	TEMP2025_API UItemInterface(const UItemInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEMP2025_API, UItemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemInterface) \
	TEMP2025_API virtual ~UItemInterface();


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUItemInterface(); \
	friend struct Z_Construct_UClass_UItemInterface_Statics; \
public: \
	DECLARE_CLASS(UItemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TEMP2025"), TEMP2025_API) \
	DECLARE_SERIALIZER(UItemInterface)


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_GENERATED_UINTERFACE_BODY() \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


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


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IItemInterface() {} \
public: \
	typedef UItemInterface UClassType; \
	typedef IItemInterface ThisClass; \
	static FItemData Execute_GetItemData(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_9_PROLOG
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_SPARSE_DATA \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_RPC_WRAPPERS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_ACCESSORS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_CALLBACK_WRAPPERS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_SPARSE_DATA \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_ACCESSORS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_CALLBACK_WRAPPERS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMP2025_API UClass* StaticClass<class UItemInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
