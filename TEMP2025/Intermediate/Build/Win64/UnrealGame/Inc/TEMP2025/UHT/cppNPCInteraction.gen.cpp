// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/cppNPCInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecppNPCInteraction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TEMP2025_API UClass* Z_Construct_UClass_UcppNPCInteraction();
	TEMP2025_API UClass* Z_Construct_UClass_UcppNPCInteraction_NoRegister();
	TEMP2025_API UEnum* Z_Construct_UEnum_TEMP2025_EPlayerRelation();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerRelation;
	static UEnum* EPlayerRelation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerRelation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerRelation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TEMP2025_EPlayerRelation, (UObject*)Z_Construct_UPackage__Script_TEMP2025(), TEXT("EPlayerRelation"));
		}
		return Z_Registration_Info_UEnum_EPlayerRelation.OuterSingleton;
	}
	template<> TEMP2025_API UEnum* StaticEnum<EPlayerRelation>()
	{
		return EPlayerRelation_StaticEnum();
	}
	struct Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::Enumerators[] = {
		{ "EPlayerRelation::Neutral", (int64)EPlayerRelation::Neutral },
		{ "EPlayerRelation::Friendly", (int64)EPlayerRelation::Friendly },
		{ "EPlayerRelation::Hostile", (int64)EPlayerRelation::Hostile },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// \n" },
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
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TEMP2025,
		nullptr,
		"EPlayerRelation",
		"EPlayerRelation",
		Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TEMP2025_EPlayerRelation()
	{
		if (!Z_Registration_Info_UEnum_EPlayerRelation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerRelation.InnerSingleton, Z_Construct_UEnum_TEMP2025_EPlayerRelation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerRelation.InnerSingleton;
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
	DEFINE_FUNCTION(UcppNPCInteraction::execGetRelationFromValue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RelationshipValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlayerRelation*)Z_Param__Result=P_THIS->GetRelationFromValue(Z_Param_RelationshipValue);
		P_NATIVE_END;
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
	void UcppNPCInteraction::StaticRegisterNativesUcppNPCInteraction()
	{
		UClass* Class = UcppNPCInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRelationFromValue", &UcppNPCInteraction::execGetRelationFromValue },
			{ "ProcessPlayerState", &UcppNPCInteraction::execProcessPlayerState },
			{ "ProcessPlayerStateWithValue", &UcppNPCInteraction::execProcessPlayerStateWithValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics
	{
		struct cppNPCInteraction_eventGetRelationFromValue_Parms
		{
			int32 RelationshipValue;
			EPlayerRelation ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_RelationshipValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::NewProp_RelationshipValue = { "RelationshipValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppNPCInteraction_eventGetRelationFromValue_Parms, RelationshipValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppNPCInteraction_eventGetRelationFromValue_Parms, ReturnValue), Z_Construct_UEnum_TEMP2025_EPlayerRelation, METADATA_PARAMS(nullptr, 0) }; // 612692160
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::NewProp_RelationshipValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// \xea\xb4\x80\xea\xb3\x84\xeb\x8f\x84\xeb\xa5\xbc \xea\xb8\xb0\xeb\xb0\x98\xec\x9c\xbc\xeb\xa1\x9c \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\x83\x81\xed\x83\x9c\xeb\xa5\xbc \xec\xb2\x98\xeb\xa6\xac\n" },
		{ "ModuleRelativePath", "cppNPCInteraction.h" },
		{ "ToolTip", "\xea\xb4\x80\xea\xb3\x84\xeb\x8f\x84\xeb\xa5\xbc \xea\xb8\xb0\xeb\xb0\x98\xec\x9c\xbc\xeb\xa1\x9c \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\x83\x81\xed\x83\x9c\xeb\xa5\xbc \xec\xb2\x98\xeb\xa6\xac" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcppNPCInteraction, nullptr, "GetRelationFromValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::cppNPCInteraction_eventGetRelationFromValue_Parms), Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics
	{
		struct cppNPCInteraction_eventProcessPlayerState_Parms
		{
			FString PlayerName;
			FString TestString;
			EPlayerRelation PlayerRelation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayerRelation_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlayerRelation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppNPCInteraction_eventProcessPlayerState_Parms, PlayerName), METADATA_PARAMS(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_TestString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_TestString = { "TestString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppNPCInteraction_eventProcessPlayerState_Parms, TestString), METADATA_PARAMS(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_TestString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_TestString_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerRelation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerRelation = { "PlayerRelation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppNPCInteraction_eventProcessPlayerState_Parms, PlayerRelation), Z_Construct_UEnum_TEMP2025_EPlayerRelation, METADATA_PARAMS(nullptr, 0) }; // 612692160
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_TestString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerRelation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::NewProp_PlayerRelation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "Comment", "// \n" },
		{ "ModuleRelativePath", "cppNPCInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcppNPCInteraction, nullptr, "ProcessPlayerState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::cppNPCInteraction_eventProcessPlayerState_Parms), Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics
	{
		struct cppNPCInteraction_eventProcessPlayerStateWithValue_Parms
		{
			FString PlayerName;
			FString TestString;
			int32 RelationshipValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestString;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RelationshipValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppNPCInteraction_eventProcessPlayerStateWithValue_Parms, PlayerName), METADATA_PARAMS(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_TestString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_TestString = { "TestString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppNPCInteraction_eventProcessPlayerStateWithValue_Parms, TestString), METADATA_PARAMS(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_TestString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_TestString_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_RelationshipValue = { "RelationshipValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppNPCInteraction_eventProcessPlayerStateWithValue_Parms, RelationshipValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_TestString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::NewProp_RelationshipValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "cppNPCInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcppNPCInteraction, nullptr, "ProcessPlayerStateWithValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::cppNPCInteraction_eventProcessPlayerStateWithValue_Parms), Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UcppNPCInteraction);
	UClass* Z_Construct_UClass_UcppNPCInteraction_NoRegister()
	{
		return UcppNPCInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UcppNPCInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UcppNPCInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UcppNPCInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UcppNPCInteraction_GetRelationFromValue, "GetRelationFromValue" }, // 3870650161
		{ &Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerState, "ProcessPlayerState" }, // 423993499
		{ &Z_Construct_UFunction_UcppNPCInteraction_ProcessPlayerStateWithValue, "ProcessPlayerStateWithValue" }, // 2733432325
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UcppNPCInteraction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "cppNPCInteraction.h" },
		{ "ModuleRelativePath", "cppNPCInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UcppNPCInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcppNPCInteraction>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UcppNPCInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UcppNPCInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UcppNPCInteraction()
	{
		if (!Z_Registration_Info_UClass_UcppNPCInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UcppNPCInteraction.OuterSingleton, Z_Construct_UClass_UcppNPCInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UcppNPCInteraction.OuterSingleton;
	}
	template<> TEMP2025_API UClass* StaticClass<UcppNPCInteraction>()
	{
		return UcppNPCInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UcppNPCInteraction);
	UcppNPCInteraction::~UcppNPCInteraction() {}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics::EnumInfo[] = {
		{ EPlayerRelation_StaticEnum, TEXT("EPlayerRelation"), &Z_Registration_Info_UEnum_EPlayerRelation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 612692160U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UcppNPCInteraction, UcppNPCInteraction::StaticClass, TEXT("UcppNPCInteraction"), &Z_Registration_Info_UClass_UcppNPCInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppNPCInteraction), 408330853U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_2470758503(TEXT("/Script/TEMP2025"),
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppNPCInteraction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
