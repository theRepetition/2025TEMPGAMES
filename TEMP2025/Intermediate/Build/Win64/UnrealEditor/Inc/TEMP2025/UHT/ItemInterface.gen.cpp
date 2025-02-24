// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TEMP2025/ItemInterface.h"
#include "TEMP2025/ItemStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TEMP2025_API UClass* Z_Construct_UClass_UItemInterface();
	TEMP2025_API UClass* Z_Construct_UClass_UItemInterface_NoRegister();
	TEMP2025_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	UPackage* Z_Construct_UPackage__Script_TEMP2025();
// End Cross Module References
	DEFINE_FUNCTION(IItemInterface::execGetItemData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FItemData*)Z_Param__Result=P_THIS->GetItemData_Implementation();
		P_NATIVE_END;
	}
	struct ItemInterface_eventGetItemData_Parms
	{
		FItemData ReturnValue;
	};
	FItemData IItemInterface::GetItemData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetItemData instead.");
		ItemInterface_eventGetItemData_Parms Parms;
		return Parms.ReturnValue;
	}
	void UItemInterface::StaticRegisterNativesUItemInterface()
	{
		UClass* Class = UItemInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetItemData", &IItemInterface::execGetItemData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemInterface_GetItemData_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemInterface_GetItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ItemInterface_eventGetItemData_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemData, METADATA_PARAMS(nullptr, 0) }; // 408481391
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemInterface_GetItemData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemInterface_GetItemData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemInterface_GetItemData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "Comment", "// BP\xec\x97\x90\xec\x84\x9c \xea\xb5\xac\xed\x98\x84\xed\x95\xa0 \xed\x95\xa8\xec\x88\x98 \xec\x84\xa0\xec\x96\xb8\n" },
		{ "ModuleRelativePath", "ItemInterface.h" },
		{ "ToolTip", "BP\xec\x97\x90\xec\x84\x9c \xea\xb5\xac\xed\x98\x84\xed\x95\xa0 \xed\x95\xa8\xec\x88\x98 \xec\x84\xa0\xec\x96\xb8" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemInterface_GetItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemInterface, nullptr, "GetItemData", nullptr, nullptr, sizeof(ItemInterface_eventGetItemData_Parms), Z_Construct_UFunction_UItemInterface_GetItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInterface_GetItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemInterface_GetItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInterface_GetItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemInterface_GetItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemInterface_GetItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemInterface);
	UClass* Z_Construct_UClass_UItemInterface_NoRegister()
	{
		return UItemInterface::StaticClass();
	}
	struct Z_Construct_UClass_UItemInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TEMP2025,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemInterface_GetItemData, "GetItemData" }, // 513742925
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ItemInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IItemInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemInterface_Statics::ClassParams = {
		&UItemInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UItemInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemInterface()
	{
		if (!Z_Registration_Info_UClass_UItemInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemInterface.OuterSingleton, Z_Construct_UClass_UItemInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItemInterface.OuterSingleton;
	}
	template<> TEMP2025_API UClass* StaticClass<UItemInterface>()
	{
		return UItemInterface::StaticClass();
	}
	UItemInterface::UItemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemInterface);
	UItemInterface::~UItemInterface() {}
	static FName NAME_UItemInterface_GetItemData = FName(TEXT("GetItemData"));
	FItemData IItemInterface::Execute_GetItemData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItemInterface::StaticClass()));
		ItemInterface_eventGetItemData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UItemInterface_GetItemData);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IItemInterface*)(O->GetNativeInterfaceAddress(UItemInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetItemData_Implementation();
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItemInterface, UItemInterface::StaticClass, TEXT("UItemInterface"), &Z_Registration_Info_UClass_UItemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemInterface), 2593462976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_2649985382(TEXT("/Script/TEMP2025"),
		Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TempGames_2025TEMPGAMES_TEMP2025_Source_TEMP2025_ItemInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
