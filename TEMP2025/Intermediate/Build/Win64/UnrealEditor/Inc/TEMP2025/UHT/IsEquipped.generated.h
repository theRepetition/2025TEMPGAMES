// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IsEquipped.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEMP2025_IsEquipped_generated_h
#error "IsEquipped.generated.h already included, missing '#pragma once' in IsEquipped.h"
#endif
#define TEMP2025_IsEquipped_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_IsEquipped_h


#define FOREACH_ENUM_EISEQUIPPED(op) \
	op(EIsEquipped::None) \
	op(EIsEquipped::Right) \
	op(EIsEquipped::Left) \
	op(EIsEquipped::TwoHanded) \
	op(EIsEquipped::Armor) \
	op(EIsEquipped::Helm) \
	op(EIsEquipped::ACC) 

enum class EIsEquipped : uint8;
template<> struct TIsUEnumClass<EIsEquipped> { enum { Value = true }; };
template<> TEMP2025_API UEnum* StaticEnum<EIsEquipped>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
