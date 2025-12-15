// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/cppNPCInteraction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodecppNPCInteraction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TEMP2025_API UClass* Z_Construct_UClass_UcppNPCInteraction();
TEMP2025_API UClass* Z_Construct_UClass_UcppNPCInteraction_NoRegister();
TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EPlayerRelation();
UPackage* Z_Construct_UPackage__Script_TEMP2025();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EPlayerRelation ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerRelation;
static UEnum* EPlayerRelation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerRelation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerRelation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TEMP2025_EPlayerRelation, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("EPlayerRelation"));
	}
	return Z_Registration_Info_UEnum_EPlayerRelation.OuterSingleton;
}
template<> TEMP2025_NON_ATTRIBUTED_API UEnum* StaticEnum<EPlayerRelation>()
{
	return EPlayerRelation_StaticEnum();
}
struct Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "Friendly.Comment", "// \n" },
		{ "Friendly.DisplayName", "Friendly" },
		{ "Friendly.Name", "EPlayerRelation::Friendly" },
		{ "Hostile.Comment", "// \n" },
		{ "Hostile.DisplayName", "Hostile" },
		{ "Hostile.Name", "EPlayerRelation::Hostile" },
		{ "ModuleRelativePath", "cppNPCInteraction.h" },
		{ "Neutral.Comment", "// \n" },
		{ "Neutral.DisplayName", "Neutral" },
		{ "Neutral.Name", "EPlayerRelation::Neutral" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerRelation::Neutral", (int64)EPlayerRelation::Neutral },
		{ "EPlayerRelation::Friendly", (int64)EPlayerRelation::Friendly },
		{ "EPlayerRelation::Hostile", (int64)EPlayerRelation::Hostile },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TEMP2025,
	nullptr,
	"EPlayerRelation",
	"EPlayerRelation",
	Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TEMP2025_EPlayerRelation()
{
	if (!Z_Registration_Info_UEnum_EPlayerRelation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerRelation.InnerSingleton, Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerRelation.InnerSingleton;
}
// ********** End Enum EPlayerRelation *************************************************************

// ********** Begin Class UcppNPCInteraction Function GetRelationFromValue *************************
struct Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics
{
	struct cppNPCInteraction_eventGetRelationFromValue_Parms
	{
		int32 RelationshipValue;
		EPlayerRelation ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb4\x80\xea\xb3\x84\xeb\x8f\x84\xeb\xa5\xbc \xea\xb8\xb0\xeb\xb0\x98\xec\x9c\xbc\xeb\xa1\x9c \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\x83\x81\xed\x83\x9c\xeb\xa5\xbc \xec\xb2\x98\xeb\xa6\xac\n" },
#endif
		{ "ModuleRelativePath", "cppNPCInteraction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb4\x80\xea\xb3\x84\xeb\x8f\x84\xeb\xa5\xbc \xea\xb8\xb0\xeb\xb0\x98\xec\x9c\xbc\xeb\xa1\x9c \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\x83\x81\xed\x83\x9c\xeb\xa5\xbc \xec\xb2\x98\xeb\xa6\xac" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetRelationFromValue constinit property declarations ******************
	static const UECodeGen_Private::FIntPropertyParams NewProp_RelationshipValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRelationFromValue constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRelationFromValue Property Definitions *****************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::NewProp_RelationshipValue = { "RelationshipValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppNPCInteraction_eventGetRelationFromValue_Parms, RelationshipValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppNPCInteraction_eventGetRelationFromValue_Parms, ReturnValue), Z_Construct_UEnum_TEMP2025_EPlayerRelation, METADATA_PARAMS(0, nullptr) }; // 589245968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::NewProp_RelationshipValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::PropPointers) < 2048);
// ********** End Function GetRelationFromValue Property Definitions *******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppNPCInteraction, nullptr, "GetRelationFromValue", 	Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::cppNPCInteraction_eventGetRelationFromValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::cppNPCInteraction_eventGetRelationFromValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppNPCInteraction::execGetRelationFromValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_RelationshipValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EPlayerRelation*)Z_Param__Result=P_THIS->GetRelationFromValue(Z_Param_RelationshipValue);
	P_NATIVE_END;
}
// ********** End Class UcppNPCInteraction Function GetRelationFromValue ***************************

// ********** Begin Class UcppNPCInteraction Function ProcessPlayerState ***************************
struct Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics
{
	struct cppNPCInteraction_eventProcessPlayerState_Parms
	{
		FString PlayerName;
		FString TestString;
		EPlayerRelation PlayerRelation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \n" },
#endif
		{ "ModuleRelativePath", "cppNPCInteraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessPlayerState constinit property declarations ********************
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestString;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerRelation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerRelation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessPlayerState constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessPlayerState Property Definitions *******************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppNPCInteraction_eventProcessPlayerState_Parms, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_TestString = { "TestString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppNPCInteraction_eventProcessPlayerState_Parms, TestString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestString_MetaData), NewProp_TestString_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerRelation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerRelation = { "PlayerRelation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppNPCInteraction_eventProcessPlayerState_Parms, PlayerRelation), Z_Construct_UEnum_TEMP2025_EPlayerRelation, METADATA_PARAMS(0, nullptr) }; // 589245968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_TestString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerRelation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerRelation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::PropPointers) < 2048);
// ********** End Function ProcessPlayerState Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppNPCInteraction, nullptr, "ProcessPlayerState", 	Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::cppNPCInteraction_eventProcessPlayerState_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::cppNPCInteraction_eventProcessPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppNPCInteraction::execProcessPlayerState)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
	P_GET_PROPERTY(FStrProperty,Z_Param_TestString);
	P_GET_ENUM(EPlayerRelation,Z_Param_PlayerRelation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessPlayerState(Z_Param_PlayerName,Z_Param_TestString,EPlayerRelation(Z_Param_PlayerRelation));
	P_NATIVE_END;
}
// ********** End Class UcppNPCInteraction Function ProcessPlayerState *****************************

// ********** Begin Class UcppNPCInteraction Function ProcessPlayerStateWithValue ******************
struct Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics
{
	struct cppNPCInteraction_eventProcessPlayerStateWithValue_Parms
	{
		FString PlayerName;
		FString TestString;
		int32 RelationshipValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "cppNPCInteraction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ProcessPlayerStateWithValue constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TestString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RelationshipValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ProcessPlayerStateWithValue constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ProcessPlayerStateWithValue Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppNPCInteraction_eventProcessPlayerStateWithValue_Parms, PlayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerName_MetaData), NewProp_PlayerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_TestString = { "TestString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppNPCInteraction_eventProcessPlayerStateWithValue_Parms, TestString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestString_MetaData), NewProp_TestString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_RelationshipValue = { "RelationshipValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(cppNPCInteraction_eventProcessPlayerStateWithValue_Parms, RelationshipValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_TestString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_RelationshipValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::PropPointers) < 2048);
// ********** End Function ProcessPlayerStateWithValue Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UcppNPCInteraction, nullptr, "ProcessPlayerStateWithValue", 	Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::cppNPCInteraction_eventProcessPlayerStateWithValue_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::cppNPCInteraction_eventProcessPlayerStateWithValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UcppNPCInteraction::execProcessPlayerStateWithValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
	P_GET_PROPERTY(FStrProperty,Z_Param_TestString);
	P_GET_PROPERTY(FIntProperty,Z_Param_RelationshipValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessPlayerStateWithValue(Z_Param_PlayerName,Z_Param_TestString,Z_Param_RelationshipValue);
	P_NATIVE_END;
}
// ********** End Class UcppNPCInteraction Function ProcessPlayerStateWithValue ********************

// ********** Begin Class UcppNPCInteraction *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UcppNPCInteraction;
UClass* UcppNPCInteraction::GetPrivateStaticClass()
{
	using TClass = UcppNPCInteraction;
	if (!Z_Registration_Info_UClass_UcppNPCInteraction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("cppNPCInteraction"),
			Z_Registration_Info_UClass_UcppNPCInteraction.InnerSingleton,
			StaticRegisterNativesUcppNPCInteraction,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UcppNPCInteraction.InnerSingleton;
}
UClass* Z_Construct_UClass_UcppNPCInteraction_NoRegister()
{
	return UcppNPCInteraction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UcppNPCInteraction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "cppNPCInteraction.h" },
		{ "ModuleRelativePath", "cppNPCInteraction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UcppNPCInteraction constinit property declarations ***********************
// ********** End Class UcppNPCInteraction constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetRelationFromValue"), .Pointer = &UcppNPCInteraction::execGetRelationFromValue },
		{ .NameUTF8 = UTF8TEXT("ProcessPlayerState"), .Pointer = &UcppNPCInteraction::execProcessPlayerState },
		{ .NameUTF8 = UTF8TEXT("ProcessPlayerStateWithValue"), .Pointer = &UcppNPCInteraction::execProcessPlayerStateWithValue },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue, "GetRelationFromValue" }, // 524427034
		{ &Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState, "ProcessPlayerState" }, // 2526059906
		{ &Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue, "ProcessPlayerStateWithValue" }, // 3585828933
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcppNPCInteraction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UcppNPCInteraction_Statics
UObject* (*const Z_Construct_UClass_UcppNPCInteraction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UcppNPCInteraction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UcppNPCInteraction_Statics::ClassParams = {
	&UcppNPCInteraction::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UcppNPCInteraction_Statics::Class_MetaDataParams), Z_Construct_UClass_UcppNPCInteraction_Statics::Class_MetaDataParams)
};
void UcppNPCInteraction::StaticRegisterNativesUcppNPCInteraction()
{
	UClass* Class = UcppNPCInteraction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UcppNPCInteraction_Statics::Funcs));
}
UClass* Z_Construct_UClass_UcppNPCInteraction()
{
	if (!Z_Registration_Info_UClass_UcppNPCInteraction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UcppNPCInteraction.OuterSingleton, Z_Construct_UClass_UcppNPCInteraction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UcppNPCInteraction.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UcppNPCInteraction);
UcppNPCInteraction::~UcppNPCInteraction() {}
// ********** End Class UcppNPCInteraction *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h__Script_TEMP2025_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerRelation_StaticEnum, TEXT("EPlayerRelation"), &Z_Registration_Info_UEnum_EPlayerRelation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 589245968U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UcppNPCInteraction, UcppNPCInteraction::StaticClass, TEXT("UcppNPCInteraction"), &Z_Registration_Info_UClass_UcppNPCInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppNPCInteraction), 2137895185U) },
	};
}; // Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h__Script_TEMP2025_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h__Script_TEMP2025_2928964881{
	TEXT("/Script/TEMP2025"),
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h__Script_TEMP2025_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h__Script_TEMP2025_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h__Script_TEMP2025_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h__Script_TEMP2025_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
