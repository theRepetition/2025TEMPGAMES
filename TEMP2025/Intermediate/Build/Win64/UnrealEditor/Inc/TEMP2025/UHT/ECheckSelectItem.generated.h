// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ECheckSelectItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEMP2025_ECheckSelectItem_generated_h
#error "ECheckSelectItem.generated.h already included, missing '#pragma once' in ECheckSelectItem.h"
#endif
#define TEMP2025_ECheckSelectItem_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ECheckSelectItem_h


#define FOREACH_ENUM_ECHECKSELETITEM(op) \
	op(ECheckSeletItem::None) \
	op(ECheckSeletItem::Invenotry) \
	op(ECheckSeletItem::Looting) 

enum class ECheckSeletItem : uint8;
template<> struct TIsUEnumClass<ECheckSeletItem> { enum { Value = true }; };
template<> TEMP2025_API UEnum* StaticEnum<ECheckSeletItem>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
