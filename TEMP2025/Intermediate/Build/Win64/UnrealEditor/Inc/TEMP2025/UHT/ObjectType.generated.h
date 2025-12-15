// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectType.h"

#ifdef TEMP2025_ObjectType_generated_h
#error "ObjectType.generated.h already included, missing '#pragma once' in ObjectType.h"
#endif
#define TEMP2025_ObjectType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ObjectType_h

// ********** Begin Enum EObjectType ***************************************************************
#define FOREACH_ENUM_EOBJECTTYPE(op) \
	op(EObjectType::None) \
	op(EObjectType::Item) \
	op(EObjectType::NPC) \
	op(EObjectType::Corpse) \
	op(EObjectType::Misc) \
	op(EObjectType::Door) \
	op(EObjectType::IntracntionOBJ) \
	op(EObjectType::LootableOBJ) \
	op(EObjectType::MovableOBJ) 

enum class EObjectType : uint8;
template<> struct TIsUEnumClass<EObjectType> { enum { Value = true }; };
template<> TEMP2025_NON_ATTRIBUTED_API UEnum* StaticEnum<EObjectType>();
// ********** End Enum EObjectType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
