// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Fish/FlockFish.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlockFish() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AFlockFish_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AFlockFish();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_AFlockFish_OnBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_AFlockFish_OnEndOverlap();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void AFlockFish::StaticRegisterNativesAFlockFish()
	{
		UClass* Class = AFlockFish::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &AFlockFish::execOnBeginOverlap },
			{ "OnEndOverlap", &AFlockFish::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AFlockFish_OnBeginOverlap()
	{
		struct FlockFish_eventOnBeginOverlap_Parms
		{
			UPrimitiveComponent* activatedComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_sweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "sweepResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnBeginOverlap_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_sweepResult_MetaData, ARRAY_COUNT(NewProp_sweepResult_MetaData)) };
			auto NewProp_bFromSweep_SetBit = [](void* Obj){ ((FlockFish_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FlockFish_eventOnBeginOverlap_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFromSweep_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "otherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnBeginOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp = { UE4CodeGen_Private::EPropertyClass::Object, "otherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnBeginOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_otherComp_MetaData, ARRAY_COUNT(NewProp_otherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor = { UE4CodeGen_Private::EPropertyClass::Object, "otherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnBeginOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activatedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_activatedComp = { UE4CodeGen_Private::EPropertyClass::Object, "activatedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnBeginOverlap_Parms, activatedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_activatedComp_MetaData, ARRAY_COUNT(NewProp_activatedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_sweepResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFromSweep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_otherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_otherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_otherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_activatedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlockFish, "OnBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00480401, sizeof(FlockFish_eventOnBeginOverlap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFlockFish_OnEndOverlap()
	{
		struct FlockFish_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* activatedComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "otherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnEndOverlap_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherComp = { UE4CodeGen_Private::EPropertyClass::Object, "otherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnEndOverlap_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_otherComp_MetaData, ARRAY_COUNT(NewProp_otherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_otherActor = { UE4CodeGen_Private::EPropertyClass::Object, "otherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnEndOverlap_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activatedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_activatedComp = { UE4CodeGen_Private::EPropertyClass::Object, "activatedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(FlockFish_eventOnEndOverlap_Parms, activatedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_activatedComp_MetaData, ARRAY_COUNT(NewProp_activatedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_otherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_otherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_otherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_activatedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlockFish, "OnEndOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(FlockFish_eventOnEndOverlap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFlockFish_NoRegister()
	{
		return AFlockFish::StaticClass();
	}
	UClass* Z_Construct_UClass_AFlockFish()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AFlockFish_OnBeginOverlap, "OnBeginOverlap" }, // 468219160
				{ &Z_Construct_UFunction_AFlockFish_OnEndOverlap, "OnEndOverlap" }, // 678504420
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Fish/FlockFish.h" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugMode_MetaData[] = {
				{ "Category", "TESTING" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Run fish in debug mode" },
			};
#endif
			auto NewProp_DebugMode_SetBit = [](void* Obj){ ((AFlockFish*)Obj)->DebugMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugMode = { UE4CodeGen_Private::EPropertyClass::Bool, "DebugMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFlockFish), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DebugMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DebugMode_MetaData, ARRAY_COUNT(NewProp_DebugMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateEveryTick_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "When set to 0, update every tick, otherwise update after specified time" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateEveryTick = { UE4CodeGen_Private::EPropertyClass::Float, "UpdateEveryTick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, UpdateEveryTick), METADATA_PARAMS(NewProp_UpdateEveryTick_MetaData, ARRAY_COUNT(NewProp_UpdateEveryTick_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumNeighborsToEvaluate_MetaData[] = {
				{ "Category", "Optimization" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Max number of neighbors to evaluate on a Tick (0 for all neighbors)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumNeighborsToEvaluate = { UE4CodeGen_Private::EPropertyClass::Float, "NumNeighborsToEvaluate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, NumNeighborsToEvaluate), METADATA_PARAMS(NewProp_NumNeighborsToEvaluate_MetaData, ARRAY_COUNT(NewProp_NumNeighborsToEvaluate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomZSeekMax_MetaData[] = {
				{ "Category", "Environment Variables" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Custom Z range for targeting (NULL will use full range of min/max)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomZSeekMax = { UE4CodeGen_Private::EPropertyClass::Float, "CustomZSeekMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, CustomZSeekMax), METADATA_PARAMS(NewProp_CustomZSeekMax_MetaData, ARRAY_COUNT(NewProp_CustomZSeekMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomZSeekMin_MetaData[] = {
				{ "Category", "Environment Variables" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Custom Z range for targeting (NULL will use full range of min/max)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomZSeekMin = { UE4CodeGen_Private::EPropertyClass::Float, "CustomZSeekMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, CustomZSeekMin), METADATA_PARAMS(NewProp_CustomZSeekMin_MetaData, ARRAY_COUNT(NewProp_CustomZSeekMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_underwaterMax_MetaData[] = {
				{ "Category", "Environment Variables" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "volume that is considered underwater" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_underwaterMax = { UE4CodeGen_Private::EPropertyClass::Struct, "underwaterMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, underwaterMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_underwaterMax_MetaData, ARRAY_COUNT(NewProp_underwaterMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_underwaterMin_MetaData[] = {
				{ "Category", "Environment Variables" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "volume that is considered underwater" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_underwaterMin = { UE4CodeGen_Private::EPropertyClass::Struct, "underwaterMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, underwaterMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_underwaterMin_MetaData, ARRAY_COUNT(NewProp_underwaterMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerType_MetaData[] = {
				{ "Category", "Environment Variables" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Player the fish will avoid" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_playerType = { UE4CodeGen_Private::EPropertyClass::Class, "playerType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, playerType), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_playerType_MetaData, ARRAY_COUNT(NewProp_playerType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceForce_MetaData[] = {
				{ "Category", "Advanced Settings" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Avoidance force" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceForce = { UE4CodeGen_Private::EPropertyClass::Float, "AvoidanceForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, AvoidanceForce), METADATA_PARAMS(NewProp_AvoidanceForce_MetaData, ARRAY_COUNT(NewProp_AvoidanceForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidForceMultiplier_MetaData[] = {
				{ "Category", "Advanced Settings" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Avoid Distance Multiplier" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidForceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "AvoidForceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, AvoidForceMultiplier), METADATA_PARAMS(NewProp_AvoidForceMultiplier_MetaData, ARRAY_COUNT(NewProp_AvoidForceMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeekDecelerationMultiplier_MetaData[] = {
				{ "Category", "Advanced Settings" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Multiplies with delta time since last tick when lerping to regular speed (While Seeking)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeekDecelerationMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "SeekDecelerationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, SeekDecelerationMultiplier), METADATA_PARAMS(NewProp_SeekDecelerationMultiplier_MetaData, ARRAY_COUNT(NewProp_SeekDecelerationMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseAccelerationMultiplier_MetaData[] = {
				{ "Category", "Advanced Settings" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Multiplies with delta time since last tick when lerping to max speed (While Chasing)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChaseAccelerationMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "ChaseAccelerationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, ChaseAccelerationMultiplier), METADATA_PARAMS(NewProp_ChaseAccelerationMultiplier_MetaData, ARRAY_COUNT(NewProp_ChaseAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeAccelerationMultiplier_MetaData[] = {
				{ "Category", "Advanced Settings" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Multiplies with delta time since last tick when lerping to max speed (While Fleeing)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FleeAccelerationMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "FleeAccelerationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, FleeAccelerationMultiplier), METADATA_PARAMS(NewProp_FleeAccelerationMultiplier_MetaData, ARRAY_COUNT(NewProp_FleeAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleeDistanceMultiplier_MetaData[] = {
				{ "Category", "Advanced Settings" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Multiplies With Radius of Fish Interaction Sphere for Flee Distance" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FleeDistanceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "FleeDistanceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, FleeDistanceMultiplier), METADATA_PARAMS(NewProp_FleeDistanceMultiplier_MetaData, ARRAY_COUNT(NewProp_FleeDistanceMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeperationDistanceMultiplier_MetaData[] = {
				{ "Category", "Advanced Settings" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Multiplies With Radius of Fish Interaction Sphere for neighbor seperation" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeperationDistanceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "SeperationDistanceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, SeperationDistanceMultiplier), METADATA_PARAMS(NewProp_SeperationDistanceMultiplier_MetaData, ARRAY_COUNT(NewProp_SeperationDistanceMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distBehindSpeedUpRange_MetaData[] = {
				{ "Category", "Fish Attributes" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Go faster when fish is this distance behind leader" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distBehindSpeedUpRange = { UE4CodeGen_Private::EPropertyClass::Float, "distBehindSpeedUpRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, distBehindSpeedUpRange), METADATA_PARAMS(NewProp_distBehindSpeedUpRange_MetaData, ARRAY_COUNT(NewProp_distBehindSpeedUpRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hungerResetTime_MetaData[] = {
				{ "Category", "Fish Attributes" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "time after eating until it is hungry again" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_hungerResetTime = { UE4CodeGen_Private::EPropertyClass::Float, "hungerResetTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, hungerResetTime), METADATA_PARAMS(NewProp_hungerResetTime_MetaData, ARRAY_COUNT(NewProp_hungerResetTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_turnFrequency_MetaData[] = {
				{ "Category", "Fish Attributes" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Frequency of turning ( turn every \"turnFrequency\" seconds)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_turnFrequency = { UE4CodeGen_Private::EPropertyClass::Float, "turnFrequency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, turnFrequency), METADATA_PARAMS(NewProp_turnFrequency_MetaData, ARRAY_COUNT(NewProp_turnFrequency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_turnSpeed_MetaData[] = {
				{ "Category", "Fish Attributes" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Speed at which the fish turns (Try to have predators be slightly faster)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_turnSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "turnSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, turnSpeed), METADATA_PARAMS(NewProp_turnSpeed_MetaData, ARRAY_COUNT(NewProp_turnSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxSpeed_MetaData[] = {
				{ "Category", "Fish Attributes" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Max Speed" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "maxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, maxSpeed), METADATA_PARAMS(NewProp_maxSpeed_MetaData, ARRAY_COUNT(NewProp_maxSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
				{ "Category", "Fish Attributes" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Defualt Speed" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed = { UE4CodeGen_Private::EPropertyClass::Float, "speed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, speed), METADATA_PARAMS(NewProp_speed_MetaData, ARRAY_COUNT(NewProp_speed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_followDist_MetaData[] = {
				{ "Category", "Fish Attributes" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Distance to that fish will try to remain behind leader" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_followDist = { UE4CodeGen_Private::EPropertyClass::Float, "followDist", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, followDist), METADATA_PARAMS(NewProp_followDist_MetaData, ARRAY_COUNT(NewProp_followDist_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_neighborType_MetaData[] = {
				{ "Category", "Fish Attributes" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Neighbor type of the fish ( typically itself, but needed for code atm)" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_neighborType = { UE4CodeGen_Private::EPropertyClass::Class, "neighborType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, neighborType), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_neighborType_MetaData, ARRAY_COUNT(NewProp_neighborType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_preyTypes_MetaData[] = {
				{ "Category", "Fish Attributes" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Prey that the fish will attack" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_preyTypes = { UE4CodeGen_Private::EPropertyClass::Array, "preyTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, preyTypes), METADATA_PARAMS(NewProp_preyTypes_MetaData, ARRAY_COUNT(NewProp_preyTypes_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_preyTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "preyTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enemyTypes_MetaData[] = {
				{ "Category", "Fish Attributes" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Enemies that fish will flee from" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_enemyTypes = { UE4CodeGen_Private::EPropertyClass::Array, "enemyTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, enemyTypes), METADATA_PARAMS(NewProp_enemyTypes_MetaData, ARRAY_COUNT(NewProp_enemyTypes_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_enemyTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "enemyTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fishFlockMax_MetaData[] = {
				{ "Category", "LocationSpawnFish" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_fishFlockMax = { UE4CodeGen_Private::EPropertyClass::Struct, "fishFlockMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, fishFlockMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_fishFlockMax_MetaData, ARRAY_COUNT(NewProp_fishFlockMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fishFlockMin_MetaData[] = {
				{ "Category", "LocationSpawnFish" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "flock fish" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_fishFlockMin = { UE4CodeGen_Private::EPropertyClass::Struct, "fishFlockMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFlockFish, fishFlockMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_fishFlockMin_MetaData, ARRAY_COUNT(NewProp_fishFlockMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isLeader_MetaData[] = {
				{ "Category", "Fish Attributes" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Is this fish a leader" },
			};
#endif
			auto NewProp_isLeader_SetBit = [](void* Obj){ ((AFlockFish*)Obj)->isLeader = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLeader = { UE4CodeGen_Private::EPropertyClass::Bool, "isLeader", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFlockFish), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isLeader_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isLeader_MetaData, ARRAY_COUNT(NewProp_isLeader_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FishInteractionSphere_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Interaction" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Fish/FlockFish.h" },
				{ "ToolTip", "Fish interaction sphere" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FishInteractionSphere = { UE4CodeGen_Private::EPropertyClass::Object, "FishInteractionSphere", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AFlockFish, FishInteractionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_FishInteractionSphere_MetaData, ARRAY_COUNT(NewProp_FishInteractionSphere_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdateEveryTick,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumNeighborsToEvaluate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomZSeekMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomZSeekMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_underwaterMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_underwaterMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_playerType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AvoidanceForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AvoidForceMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SeekDecelerationMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChaseAccelerationMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FleeAccelerationMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FleeDistanceMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SeperationDistanceMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_distBehindSpeedUpRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_hungerResetTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_turnFrequency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_turnSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_maxSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_speed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_followDist,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_neighborType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_preyTypes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_preyTypes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_enemyTypes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_enemyTypes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fishFlockMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fishFlockMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isLeader,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FishInteractionSphere,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFlockFish>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFlockFish::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlockFish, 3147852453);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlockFish(Z_Construct_UClass_AFlockFish, &AFlockFish::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("AFlockFish"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlockFish);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
