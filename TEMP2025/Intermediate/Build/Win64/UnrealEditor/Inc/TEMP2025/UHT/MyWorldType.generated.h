// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyWorldType.h"

#ifdef TEMP2025_MyWorldType_generated_h
#error "MyWorldType.generated.h already included, missing '#pragma once' in MyWorldType.h"
#endif
#define TEMP2025_MyWorldType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_MyWorldType_h

// ********** Begin Enum EMyWorldType **************************************************************
#define FOREACH_ENUM_EMYWORLDTYPE(op) \
	op(EMyWorldType::Camp) \
	op(EMyWorldType::Dungeon) 

enum class EMyWorldType : uint8;
template<> struct TIsUEnumClass<EMyWorldType> { enum { Value = true }; };
template<> TEMP2025_NON_ATTRIBUTED_API UEnum* StaticEnum<EMyWorldType>();
// ********** End Enum EMyWorldType ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
