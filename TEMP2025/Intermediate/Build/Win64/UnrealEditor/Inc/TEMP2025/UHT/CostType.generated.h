// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CostType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEMP2025_CostType_generated_h
#error "CostType.generated.h already included, missing '#pragma once' in CostType.h"
#endif
#define TEMP2025_CostType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_CostType_h


#define FOREACH_ENUM_ECOSTTYPE(op) \
	op(ECostType::Stamina) \
	op(ECostType::Mana) \
	op(ECostType::Ammo) 

enum class ECostType : uint8;
template<> struct TIsUEnumClass<ECostType> { enum { Value = true }; };
template<> TEMP2025_API UEnum* StaticEnum<ECostType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
