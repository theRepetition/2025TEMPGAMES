// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UIType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEMP2025_UIType_generated_h
#error "UIType.generated.h already included, missing '#pragma once' in UIType.h"
#endif
#define TEMP2025_UIType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_UIType_h


#define FOREACH_ENUM_EUITYPE(op) \
	op(EUIType::None) \
	op(EUIType::Map) \
	op(EUIType::Inventory) \
	op(EUIType::Menu) \
	op(EUIType::Profile) \
	op(EUIType::Quest) 

enum class EUIType : uint8;
template<> struct TIsUEnumClass<EUIType> { enum { Value = true }; };
template<> TEMP2025_API UEnum* StaticEnum<EUIType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
