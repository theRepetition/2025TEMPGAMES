// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/cppItemComponent.h"
#include "TEMP2025/ItemStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecppItemComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TEMP2025_API UClass* Z_Construct_UClass_UcppItemComponent();
	TEMP2025_API UClass* Z_Construct_UClass_UcppItemComponent_NoRegister();
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	DEFINE_FUNCTION(UcppItemComponent::execPickUpItem)
	{
		P_GET_OBJECT(AActor,Z_Param_ItemActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FItemData*)Z_Param__Result=P_THIS->PickUpItem(Z_Param_ItemActor);
		P_NATIVE_END;
	}
	void UcppItemComponent::StaticRegisterNativesUcppItemComponent()
	{
		UClass* Class = UcppItemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PickUpItem", &UcppItemComponent::execPickUpItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics
	{
		struct cppItemComponent_eventPickUpItem_Parms
		{
			AActor* ItemActor;
			FItemData ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::NewProp_ItemActor = { "ItemActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppItemComponent_eventPickUpItem_Parms, ItemActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppItemComponent_eventPickUpItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 2624522578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::NewProp_ItemActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "cppItemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UcppItemComponent, nullptr, "PickUpItem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::cppItemComponent_eventPickUpItem_Parms), Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UcppItemComponent_PickUpItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UcppItemComponent_PickUpItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UcppItemComponent);
	UClass* Z_Construct_UClass_UcppItemComponent_NoRegister()
	{
		return UcppItemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UcppItemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UcppItemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UcppItemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UcppItemComponent_PickUpItem, "PickUpItem" }, // 3788194373
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UcppItemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "cppItemComponent.h" },
		{ "ModuleRelativePath", "cppItemComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UcppItemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UcppItemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UcppItemComponent_Statics::ClassParams = {
		&UcppItemComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UcppItemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UcppItemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UcppItemComponent()
	{
		if (!Z_Registration_Info_UClass_UcppItemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UcppItemComponent.OuterSingleton, Z_Construct_UClass_UcppItemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UcppItemComponent.OuterSingleton;
	}
	template<> TEMP2025_API UClass* StaticClass<UcppItemComponent>()
	{
		return UcppItemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UcppItemComponent);
	UcppItemComponent::~UcppItemComponent() {}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppItemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppItemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UcppItemComponent, UcppItemComponent::StaticClass, TEXT("UcppItemComponent"), &Z_Registration_Info_UClass_UcppItemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UcppItemComponent), 1238054769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppItemComponent_h_512842848(TEXT("/Script/TEMP2025"),
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppItemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_cppItemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
