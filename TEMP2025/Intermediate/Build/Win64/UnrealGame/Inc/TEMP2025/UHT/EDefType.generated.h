// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EDefType.h"

#ifdef TEMP2025_EDefType_generated_h
#error "EDefType.generated.h already included, missing '#pragma once' in EDefType.h"
#endif
#define TEMP2025_EDefType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_EDefType_h

// ********** Begin Enum EDefType ******************************************************************
#define FOREACH_ENUM_EDEFTYPE(op) \
	op(EDefType::normal) \
	op(EDefType::Block) \
	op(EDefType::TimedBlock) \
	op(EDefType::Parry) \
	op(EDefType::Dodge) \
	op(EDefType::Blink) 

enum class EDefType : uint8;
template<> struct TIsUEnumClass<EDefType> { enum { Value = true }; };
template<> TEMP2025_API UEnum* StaticEnum<EDefType>();
// ********** End Enum EDefType ********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
