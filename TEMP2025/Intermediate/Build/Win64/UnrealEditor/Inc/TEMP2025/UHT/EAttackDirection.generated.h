// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EAttackDirection.h"

#ifdef TEMP2025_EAttackDirection_generated_h
#error "EAttackDirection.generated.h already included, missing '#pragma once' in EAttackDirection.h"
#endif
#define TEMP2025_EAttackDirection_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_EAttackDirection_h

// ********** Begin Enum EAttackDirection **********************************************************
#define FOREACH_ENUM_EATTACKDIRECTION(op) \
	op(EAttackDirection::None) \
	op(EAttackDirection::Left) \
	op(EAttackDirection::Right) \
	op(EAttackDirection::Up) \
	op(EAttackDirection::Med) \
	op(EAttackDirection::Back) \
	op(EAttackDirection::BlindSpot) 

enum class EAttackDirection : uint8;
template<> struct TIsUEnumClass<EAttackDirection> { enum { Value = true }; };
template<> TEMP2025_NON_ATTRIBUTED_API UEnum* StaticEnum<EAttackDirection>();
// ********** End Enum EAttackDirection ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
