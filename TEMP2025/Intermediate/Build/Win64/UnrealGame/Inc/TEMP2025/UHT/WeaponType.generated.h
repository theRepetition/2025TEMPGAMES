// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WeaponType.h"

#ifdef TEMP2025_WeaponType_generated_h
#error "WeaponType.generated.h already included, missing '#pragma once' in WeaponType.h"
#endif
#define TEMP2025_WeaponType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_WeaponType_h

// ********** Begin Enum EWeaponType ***************************************************************
#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(EWeaponType::Nothing) \
	op(EWeaponType::OneHandedSword) \
	op(EWeaponType::TwoHandedSword) \
	op(EWeaponType::OneHandedAxe) \
	op(EWeaponType::TwoHandedAxe) \
	op(EWeaponType::OneHandedMace) \
	op(EWeaponType::TwoHandedMace) \
	op(EWeaponType::OneHandedPolearm) \
	op(EWeaponType::TwoHandedPolearm) \
	op(EWeaponType::LongBow) \
	op(EWeaponType::ShortBow) \
	op(EWeaponType::CrossBow) \
	op(EWeaponType::HandCannon) \
	op(EWeaponType::Staff) \
	op(EWeaponType::Wand) 

enum class EWeaponType : uint8;
template<> struct TIsUEnumClass<EWeaponType> { enum { Value = true }; };
template<> TEMP2025_NON_ATTRIBUTED_API UEnum* StaticEnum<EWeaponType>();
// ********** End Enum EWeaponType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
