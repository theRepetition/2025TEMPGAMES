// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandedType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEMP2025_HandedType_generated_h
#error "HandedType.generated.h already included, missing '#pragma once' in HandedType.h"
#endif
#define TEMP2025_HandedType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_HandedType_h


#define FOREACH_ENUM_EHANDEDTYPE(op) \
	op(EHandedType::OneHanded) \
	op(EHandedType::TwoHanded) \
	op(EHandedType::Range) 

enum class EHandedType : uint8;
template<> struct TIsUEnumClass<EHandedType> { enum { Value = true }; };
template<> TEMP2025_API UEnum* StaticEnum<EHandedType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
