// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "cppNPCInteraction.h"

#ifdef TEMP2025_cppNPCInteraction_generated_h
#error "cppNPCInteraction.generated.h already included, missing '#pragma once' in cppNPCInteraction.h"
#endif
#define TEMP2025_cppNPCInteraction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerRelation : uint8;

// ********** Begin Class UcppNPCInteraction *******************************************************
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProcessPlayerStateWithValue); \
	DECLARE_FUNCTION(execGetRelationFromValue); \
	DECLARE_FUNCTION(execProcessPlayerState);


struct Z_Construct_UClass_UcppNPCInteraction_Statics;
TEMP2025_API UClass* Z_Construct_UClass_UcppNPCInteraction_NoRegister();

#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUcppNPCInteraction(); \
	friend struct ::Z_Construct_UClass_UcppNPCInteraction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEMP2025_API UClass* ::Z_Construct_UClass_UcppNPCInteraction_NoRegister(); \
public: \
	DECLARE_CLASS2(UcppNPCInteraction, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TEMP2025"), Z_Construct_UClass_UcppNPCInteraction_NoRegister) \
	DECLARE_SERIALIZER(UcppNPCInteraction)


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UcppNPCInteraction(UcppNPCInteraction&&) = delete; \
	UcppNPCInteraction(const UcppNPCInteraction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UcppNPCInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UcppNPCInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UcppNPCInteraction) \
	NO_API virtual ~UcppNPCInteraction();


#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_16_PROLOG
#define FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_19_INCLASS_NO_PURE_DECLS \
	FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UcppNPCInteraction;

// ********** End Class UcppNPCInteraction *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h

// ********** Begin Enum EPlayerRelation ***********************************************************
#define FOREACH_ENUM_EPLAYERRELATION(op) \
	op(EPlayerRelation::Neutral) \
	op(EPlayerRelation::Friendly) \
	op(EPlayerRelation::Hostile) 

enum class EPlayerRelation : uint8;
template<> struct TIsUEnumClass<EPlayerRelation> { enum { Value = true }; };
template<> TEMP2025_NON_ATTRIBUTED_API UEnum* StaticEnum<EPlayerRelation>();
// ********** End Enum EPlayerRelation *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
