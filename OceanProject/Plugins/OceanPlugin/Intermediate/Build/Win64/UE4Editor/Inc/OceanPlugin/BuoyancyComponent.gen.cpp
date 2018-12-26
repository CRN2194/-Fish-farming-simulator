// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BuoyancyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuoyancyComponent() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyancyComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyancyComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References
	void UBuoyancyComponent::StaticRegisterNativesUBuoyancyComponent()
	{
	}
	UClass* Z_Construct_UClass_UBuoyancyComponent_NoRegister()
	{
		return UBuoyancyComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UBuoyancyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Movement" },
				{ "HideCategories", "PlanarMovement Components|Movement|Planar Velocity" },
				{ "IncludePath", "BuoyancyComponent.h" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
				{ "ToolTip", "Buoyancy component\nOceanManager is required in the level for this to work." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveForceMultiplier_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaveForceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "WaveForceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, WaveForceMultiplier), METADATA_PARAMS(NewProp_WaveForceMultiplier_MetaData, ARRAY_COUNT(NewProp_WaveForceMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableWaveForces_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
				{ "ToolTip", "Waves will push objects towards the wave direction set in the Ocean Manager.\n-STILL WIP-" },
			};
#endif
			auto NewProp_EnableWaveForces_SetBit = [](void* Obj){ ((UBuoyancyComponent*)Obj)->EnableWaveForces = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableWaveForces = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableWaveForces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyancyComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableWaveForces_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableWaveForces_MetaData, ARRAY_COUNT(NewProp_EnableWaveForces_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StayUprightDesiredRotation_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StayUprightDesiredRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "StayUprightDesiredRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, StayUprightDesiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_StayUprightDesiredRotation_MetaData, ARRAY_COUNT(NewProp_StayUprightDesiredRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StayUprightDamping_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StayUprightDamping = { UE4CodeGen_Private::EPropertyClass::Float, "StayUprightDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, StayUprightDamping), METADATA_PARAMS(NewProp_StayUprightDamping_MetaData, ARRAY_COUNT(NewProp_StayUprightDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StayUprightStiffness_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StayUprightStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "StayUprightStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, StayUprightStiffness), METADATA_PARAMS(NewProp_StayUprightStiffness_MetaData, ARRAY_COUNT(NewProp_StayUprightStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableStayUprightConstraint_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
				{ "ToolTip", "Stay upright physics constraint (inspired by UDK's StayUprightSpring)\n-STILL WIP-" },
			};
#endif
			auto NewProp_EnableStayUprightConstraint_SetBit = [](void* Obj){ ((UBuoyancyComponent*)Obj)->EnableStayUprightConstraint = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableStayUprightConstraint = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableStayUprightConstraint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyancyComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableStayUprightConstraint_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableStayUprightConstraint_MetaData, ARRAY_COUNT(NewProp_EnableStayUprightConstraint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDebugPoints_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
			};
#endif
			auto NewProp_DrawDebugPoints_SetBit = [](void* Obj){ ((UBuoyancyComponent*)Obj)->DrawDebugPoints = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebugPoints = { UE4CodeGen_Private::EPropertyClass::Bool, "DrawDebugPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyancyComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DrawDebugPoints_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DrawDebugPoints_MetaData, ARRAY_COUNT(NewProp_DrawDebugPoints_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointDensityOverride_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
				{ "ToolTip", "Per-point mesh density override, can be used for half-sinking objects etc." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointDensityOverride = { UE4CodeGen_Private::EPropertyClass::Array, "PointDensityOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, PointDensityOverride), METADATA_PARAMS(NewProp_PointDensityOverride_MetaData, ARRAY_COUNT(NewProp_PointDensityOverride_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointDensityOverride_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "PointDensityOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestPoints_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
				{ "ToolTip", "Test point array. At least one point is required for buoyancy." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TestPoints = { UE4CodeGen_Private::EPropertyClass::Array, "TestPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, TestPoints), METADATA_PARAMS(NewProp_TestPoints_MetaData, ARRAY_COUNT(NewProp_TestPoints_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TestPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestPointRadius_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
				{ "ToolTip", "Radius of the points." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestPointRadius = { UE4CodeGen_Private::EPropertyClass::Float, "TestPointRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, TestPointRadius), METADATA_PARAMS(NewProp_TestPointRadius_MetaData, ARRAY_COUNT(NewProp_TestPointRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxUnderwaterVelocity_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxUnderwaterVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MaxUnderwaterVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, MaxUnderwaterVelocity), METADATA_PARAMS(NewProp_MaxUnderwaterVelocity_MetaData, ARRAY_COUNT(NewProp_MaxUnderwaterVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampMaxVelocity_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
			};
#endif
			auto NewProp_ClampMaxVelocity_SetBit = [](void* Obj){ ((UBuoyancyComponent*)Obj)->ClampMaxVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClampMaxVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "ClampMaxVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyancyComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ClampMaxVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ClampMaxVelocity_MetaData, ARRAY_COUNT(NewProp_ClampMaxVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityDamper_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityDamper = { UE4CodeGen_Private::EPropertyClass::Struct, "VelocityDamper", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, VelocityDamper), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_VelocityDamper_MetaData, ARRAY_COUNT(NewProp_VelocityDamper_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidAngularDamping_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
				{ "ToolTip", "Angular damping when object is in fluid." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidAngularDamping = { UE4CodeGen_Private::EPropertyClass::Float, "FluidAngularDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, FluidAngularDamping), METADATA_PARAMS(NewProp_FluidAngularDamping_MetaData, ARRAY_COUNT(NewProp_FluidAngularDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidLinearDamping_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
				{ "ToolTip", "Linear damping when object is in fluid." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidLinearDamping = { UE4CodeGen_Private::EPropertyClass::Float, "FluidLinearDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, FluidLinearDamping), METADATA_PARAMS(NewProp_FluidLinearDamping_MetaData, ARRAY_COUNT(NewProp_FluidLinearDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidDensity_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
				{ "ToolTip", "Density of water. Typically you don't need to change this." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidDensity = { UE4CodeGen_Private::EPropertyClass::Float, "FluidDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, FluidDensity), METADATA_PARAMS(NewProp_FluidDensity_MetaData, ARRAY_COUNT(NewProp_FluidDensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshDensity_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
				{ "ToolTip", "Density of mesh." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshDensity = { UE4CodeGen_Private::EPropertyClass::Float, "MeshDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, MeshDensity), METADATA_PARAMS(NewProp_MeshDensity_MetaData, ARRAY_COUNT(NewProp_MeshDensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OceanManager_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyComponent.h" },
				{ "ToolTip", "OceanManager used by the component, if unassigned component will auto-detect" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OceanManager = { UE4CodeGen_Private::EPropertyClass::Object, "OceanManager", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyComponent, OceanManager), Z_Construct_UClass_AOceanManager_NoRegister, METADATA_PARAMS(NewProp_OceanManager_MetaData, ARRAY_COUNT(NewProp_OceanManager_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaveForceMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableWaveForces,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StayUprightDesiredRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StayUprightDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StayUprightStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableStayUprightConstraint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawDebugPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointDensityOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointDensityOverride_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestPoints_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestPointRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxUnderwaterVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClampMaxVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VelocityDamper,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FluidAngularDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FluidLinearDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FluidDensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshDensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OceanManager,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBuoyancyComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBuoyancyComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UBuoyancyComponent, 1808332305);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuoyancyComponent(Z_Construct_UClass_UBuoyancyComponent, &UBuoyancyComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UBuoyancyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuoyancyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
