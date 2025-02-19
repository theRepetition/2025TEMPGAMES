// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEMP2025_ObjectType_generated_h
#error "ObjectType.generated.h already included, missing '#pragma once' in ObjectType.h"
#endif
#define TEMP2025_ObjectType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ObjectType_h


#define FOREACH_ENUM_EOBJECTTYPE(op) \
	op(EObjectType::Item) \
	op(EObjectType::NPC) \
	op(EObjectType::Misc) \
	op(EObjectType::Door) \
	op(EObjectType::IntracntionOBJ) \
	op(EObjectType::MovableOBJ) 

enum class EObjectType : uint8;
template<> struct TIsUEnumClass<EObjectType> { enum { Value = true }; };
template<> TEMP2025_API UEnum* StaticEnum<EObjectType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
