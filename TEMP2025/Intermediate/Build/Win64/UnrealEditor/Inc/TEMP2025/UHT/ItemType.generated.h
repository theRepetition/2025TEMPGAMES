// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEMP2025_ItemType_generated_h
#error "ItemType.generated.h already included, missing '#pragma once' in ItemType.h"
#endif
#define TEMP2025_ItemType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemType_h


#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Weapon) \
	op(EItemType::Armor) \
	op(EItemType::Consumable) \
	op(EItemType::Misc) \
	op(EItemType::Book) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> TEMP2025_API UEnum* StaticEnum<EItemType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
