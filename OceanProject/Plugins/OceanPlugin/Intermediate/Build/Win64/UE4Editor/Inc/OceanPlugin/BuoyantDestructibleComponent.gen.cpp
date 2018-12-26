// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BuoyantDestructibleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuoyantDestructibleComponent() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyantDestructibleComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyantDestructibleComponent();
	APEXDESTRUCTION_API UClass* Z_Construct_UClass_UDestructibleComponent();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References
	void UBuoyantDestructibleComponent::StaticRegisterNativesUBuoyantDestructibleComponent()
	{
	}
	UClass* Z_Construct_UClass_UBuoyantDestructibleComponent_NoRegister()
	{
		return UBuoyantDestructibleComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UBuoyantDestructibleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDestructibleComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Physics" },
				{ "HideCategories", "Object Mesh Components|SkinnedMesh Mirroring Activation Components|Activation Object Mesh Components|SkinnedMesh Mirroring Activation Components|Activation Object Mobility Trigger" },
				{ "IncludePath", "BuoyantDestructibleComponent.h" },
				{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkStabilizationThreshold_MetaData[] = {
				{ "Category", "Advanced" },
				{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
				{ "ToolTip", "* Sets the mass-normalized kinetic energy threshold below which an actor may participate in stabilization.\n* (This value has no effect if PxSceneFlag::eENABLE_STABILIZATION was not enabled on the PxSceneDesc)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChunkStabilizationThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "ChunkStabilizationThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, ChunkStabilizationThreshold), METADATA_PARAMS(NewProp_ChunkStabilizationThreshold_MetaData, ARRAY_COUNT(NewProp_ChunkStabilizationThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkSleepThreshold_MetaData[] = {
				{ "Category", "Advanced" },
				{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
				{ "ToolTip", "* Sets the mass-normalized kinetic energy threshold below which an actor may go to sleep.\n* Default physx value is ~50.0f (we set it 0 to avoid weird sleeping chunks on water)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChunkSleepThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "ChunkSleepThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, ChunkSleepThreshold), METADATA_PARAMS(NewProp_ChunkSleepThreshold_MetaData, ARRAY_COUNT(NewProp_ChunkSleepThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveForceMultiplier_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaveForceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "WaveForceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, WaveForceMultiplier), METADATA_PARAMS(NewProp_WaveForceMultiplier_MetaData, ARRAY_COUNT(NewProp_WaveForceMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableWaveForces_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
			};
#endif
			auto NewProp_EnableWaveForces_SetBit = [](void* Obj){ ((UBuoyantDestructibleComponent*)Obj)->EnableWaveForces = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableWaveForces = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableWaveForces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantDestructibleComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableWaveForces_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableWaveForces_MetaData, ARRAY_COUNT(NewProp_EnableWaveForces_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDebugPoints_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
			};
#endif
			auto NewProp_DrawDebugPoints_SetBit = [](void* Obj){ ((UBuoyantDestructibleComponent*)Obj)->DrawDebugPoints = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebugPoints = { UE4CodeGen_Private::EPropertyClass::Bool, "DrawDebugPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantDestructibleComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DrawDebugPoints_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DrawDebugPoints_MetaData, ARRAY_COUNT(NewProp_DrawDebugPoints_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestPointRadius_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
				{ "ToolTip", "Radius of the test point" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestPointRadius = { UE4CodeGen_Private::EPropertyClass::Float, "TestPointRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, TestPointRadius), METADATA_PARAMS(NewProp_TestPointRadius_MetaData, ARRAY_COUNT(NewProp_TestPointRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxUnderwaterVelocity_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxUnderwaterVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MaxUnderwaterVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, MaxUnderwaterVelocity), METADATA_PARAMS(NewProp_MaxUnderwaterVelocity_MetaData, ARRAY_COUNT(NewProp_MaxUnderwaterVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampMaxVelocity_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
			};
#endif
			auto NewProp_ClampMaxVelocity_SetBit = [](void* Obj){ ((UBuoyantDestructibleComponent*)Obj)->ClampMaxVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClampMaxVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "ClampMaxVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyantDestructibleComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ClampMaxVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ClampMaxVelocity_MetaData, ARRAY_COUNT(NewProp_ClampMaxVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityDamper_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityDamper = { UE4CodeGen_Private::EPropertyClass::Struct, "VelocityDamper", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, VelocityDamper), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_VelocityDamper_MetaData, ARRAY_COUNT(NewProp_VelocityDamper_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidAngularDamping_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
				{ "ToolTip", "Angular damping when chunk is in fluid" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidAngularDamping = { UE4CodeGen_Private::EPropertyClass::Float, "FluidAngularDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, FluidAngularDamping), METADATA_PARAMS(NewProp_FluidAngularDamping_MetaData, ARRAY_COUNT(NewProp_FluidAngularDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidLinearDamping_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
				{ "ToolTip", "Linear damping when chunk is in fluid" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidLinearDamping = { UE4CodeGen_Private::EPropertyClass::Float, "FluidLinearDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, FluidLinearDamping), METADATA_PARAMS(NewProp_FluidLinearDamping_MetaData, ARRAY_COUNT(NewProp_FluidLinearDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidDensity_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
				{ "ToolTip", "Density of water" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidDensity = { UE4CodeGen_Private::EPropertyClass::Float, "FluidDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, FluidDensity), METADATA_PARAMS(NewProp_FluidDensity_MetaData, ARRAY_COUNT(NewProp_FluidDensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkDensity_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
				{ "ToolTip", "Density of each chunk" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChunkDensity = { UE4CodeGen_Private::EPropertyClass::Float, "ChunkDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, ChunkDensity), METADATA_PARAMS(NewProp_ChunkDensity_MetaData, ARRAY_COUNT(NewProp_ChunkDensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OceanManager_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyantDestructibleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OceanManager = { UE4CodeGen_Private::EPropertyClass::Object, "OceanManager", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyantDestructibleComponent, OceanManager), Z_Construct_UClass_AOceanManager_NoRegister, METADATA_PARAMS(NewProp_OceanManager_MetaData, ARRAY_COUNT(NewProp_OceanManager_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChunkStabilizationThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChunkSleepThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaveForceMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableWaveForces,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawDebugPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestPointRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxUnderwaterVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClampMaxVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VelocityDamper,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FluidAngularDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FluidLinearDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FluidDensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChunkDensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OceanManager,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBuoyantDestructibleComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBuoyantDestructibleComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuoyantDestructibleComponent, 3024861005);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuoyantDestructibleComponent(Z_Construct_UClass_UBuoyantDestructibleComponent, &UBuoyantDestructibleComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UBuoyantDestructibleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuoyantDestructibleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
