// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/CustomVehicleController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomVehicleController() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_ACustomVehicleController_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_ACustomVehicleController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ACustomVehicleController_DrawBuoyancyPoints();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ACustomVehicleController_EnableBuoyancy();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ACustomVehicleController_EnterVehicle();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ACustomVehicleController_ExitVehicle();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ACustomVehicleController_GetIsDriving();
// End Cross Module References
	void ACustomVehicleController::StaticRegisterNativesACustomVehicleController()
	{
		UClass* Class = ACustomVehicleController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawBuoyancyPoints", &ACustomVehicleController::execDrawBuoyancyPoints },
			{ "EnableBuoyancy", &ACustomVehicleController::execEnableBuoyancy },
			{ "EnterVehicle", &ACustomVehicleController::execEnterVehicle },
			{ "ExitVehicle", &ACustomVehicleController::execExitVehicle },
			{ "GetIsDriving", &ACustomVehicleController::execGetIsDriving },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ACustomVehicleController_DrawBuoyancyPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/CustomVehicleController.h" },
				{ "ToolTip", "--Custom debugging console commands--" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomVehicleController, "DrawBuoyancyPoints", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACustomVehicleController_EnableBuoyancy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/CustomVehicleController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomVehicleController, "EnableBuoyancy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020600, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACustomVehicleController_EnterVehicle()
	{
		struct CustomVehicleController_eventEnterVehicle_Parms
		{
			APawn* Vehicle;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Vehicle = { UE4CodeGen_Private::EPropertyClass::Object, "Vehicle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CustomVehicleController_eventEnterVehicle_Parms, Vehicle), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vehicle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Vehicle" },
				{ "ModuleRelativePath", "Classes/CustomVehicleController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomVehicleController, "EnterVehicle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(CustomVehicleController_eventEnterVehicle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACustomVehicleController_ExitVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Vehicle" },
				{ "ModuleRelativePath", "Classes/CustomVehicleController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomVehicleController, "ExitVehicle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACustomVehicleController_GetIsDriving()
	{
		struct CustomVehicleController_eventGetIsDriving_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((CustomVehicleController_eventGetIsDriving_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CustomVehicleController_eventGetIsDriving_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Vehicle" },
				{ "ModuleRelativePath", "Classes/CustomVehicleController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomVehicleController, "GetIsDriving", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020400, sizeof(CustomVehicleController_eventGetIsDriving_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACustomVehicleController_NoRegister()
	{
		return ACustomVehicleController::StaticClass();
	}
	UClass* Z_Construct_UClass_ACustomVehicleController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ACustomVehicleController_DrawBuoyancyPoints, "DrawBuoyancyPoints" }, // 978138322
				{ &Z_Construct_UFunction_ACustomVehicleController_EnableBuoyancy, "EnableBuoyancy" }, // 3334688307
				{ &Z_Construct_UFunction_ACustomVehicleController_EnterVehicle, "EnterVehicle" }, // 3232012648
				{ &Z_Construct_UFunction_ACustomVehicleController_ExitVehicle, "ExitVehicle" }, // 514191983
				{ &Z_Construct_UFunction_ACustomVehicleController_GetIsDriving, "GetIsDriving" }, // 3454979619
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "CustomVehicleController.h" },
				{ "ModuleRelativePath", "Classes/CustomVehicleController.h" },
				{ "ToolTip", "Custom player controller that has custom functionality to help possess vehicles." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[] = {
				{ "ModuleRelativePath", "Classes/CustomVehicleController.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerPawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000020, 1, nullptr, STRUCT_OFFSET(ACustomVehicleController, PlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(NewProp_PlayerPawn_MetaData, ARRAY_COUNT(NewProp_PlayerPawn_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerPawn,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACustomVehicleController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACustomVehicleController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900284u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomVehicleController, 341993189);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomVehicleController(Z_Construct_UClass_ACustomVehicleController, &ACustomVehicleController::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("ACustomVehicleController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomVehicleController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
