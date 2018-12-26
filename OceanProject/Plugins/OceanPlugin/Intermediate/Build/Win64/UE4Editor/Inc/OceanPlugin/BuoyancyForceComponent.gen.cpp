// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BuoyancyForceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuoyancyForceComponent() {}
// Cross Module References
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FStructBoneOverride();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyancyForceComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UBuoyancyForceComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETickingGroup();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References
class UScriptStruct* FStructBoneOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCEANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FStructBoneOverride_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructBoneOverride, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("StructBoneOverride"), sizeof(FStructBoneOverride), Get_Z_Construct_UScriptStruct_FStructBoneOverride_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructBoneOverride(FStructBoneOverride::StaticStruct, TEXT("/Script/OceanPlugin"), TEXT("StructBoneOverride"), false, nullptr, nullptr);
static struct FScriptStruct_OceanPlugin_StaticRegisterNativesFStructBoneOverride
{
	FScriptStruct_OceanPlugin_StaticRegisterNativesFStructBoneOverride()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StructBoneOverride")),new UScriptStruct::TCppStructOps<FStructBoneOverride>);
	}
} ScriptStruct_OceanPlugin_StaticRegisterNativesFStructBoneOverride;
	UScriptStruct* Z_Construct_UScriptStruct_FStructBoneOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructBoneOverride_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructBoneOverride"), sizeof(FStructBoneOverride), Get_Z_Construct_UScriptStruct_FStructBoneOverride_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
				{ "ToolTip", "Custom bone density/radius override struct." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructBoneOverride>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestRadius_MetaData[] = {
				{ "Category", "Buoyancy" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestRadius = { UE4CodeGen_Private::EPropertyClass::Float, "TestRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStructBoneOverride, TestRadius), METADATA_PARAMS(NewProp_TestRadius_MetaData, ARRAY_COUNT(NewProp_TestRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
				{ "Category", "Buoyancy" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density = { UE4CodeGen_Private::EPropertyClass::Float, "Density", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStructBoneOverride, Density), METADATA_PARAMS(NewProp_Density_MetaData, ARRAY_COUNT(NewProp_Density_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
				{ "Category", "Buoyancy" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FStructBoneOverride, BoneName), METADATA_PARAMS(NewProp_BoneName_MetaData, ARRAY_COUNT(NewProp_BoneName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TestRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Density,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"StructBoneOverride",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FStructBoneOverride),
				alignof(FStructBoneOverride),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructBoneOverride_CRC() { return 2488995841U; }
	void UBuoyancyForceComponent::StaticRegisterNativesUBuoyancyForceComponent()
	{
	}
	UClass* Z_Construct_UClass_UBuoyancyForceComponent_NoRegister()
	{
		return UBuoyancyForceComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UBuoyancyForceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Physics" },
				{ "HideCategories", "Object Mobility LOD PhysicsVolume" },
				{ "IncludePath", "BuoyancyForceComponent.h" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
				{ "ToolTip", "Applies buoyancy forces to physics objects.\nOceanManager is required in the level for this to work." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickGroup_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TickGroup = { UE4CodeGen_Private::EPropertyClass::Byte, "TickGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyForceComponent, TickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(NewProp_TickGroup_MetaData, ARRAY_COUNT(NewProp_TickGroup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveForceMultiplier_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaveForceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "WaveForceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyForceComponent, WaveForceMultiplier), METADATA_PARAMS(NewProp_WaveForceMultiplier_MetaData, ARRAY_COUNT(NewProp_WaveForceMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableWaveForces_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
				{ "ToolTip", "Waves will push objects towards the wave direction set in the Ocean Manager.\n-STILL WIP-" },
			};
#endif
			auto NewProp_EnableWaveForces_SetBit = [](void* Obj){ ((UBuoyancyForceComponent*)Obj)->EnableWaveForces = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableWaveForces = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableWaveForces", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyancyForceComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableWaveForces_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableWaveForces_MetaData, ARRAY_COUNT(NewProp_EnableWaveForces_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StayUprightDesiredRotation_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_StayUprightDesiredRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "StayUprightDesiredRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyForceComponent, StayUprightDesiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_StayUprightDesiredRotation_MetaData, ARRAY_COUNT(NewProp_StayUprightDesiredRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StayUprightDamping_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StayUprightDamping = { UE4CodeGen_Private::EPropertyClass::Float, "StayUprightDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyForceComponent, StayUprightDamping), METADATA_PARAMS(NewProp_StayUprightDamping_MetaData, ARRAY_COUNT(NewProp_StayUprightDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StayUprightStiffness_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StayUprightStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "StayUprightStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyForceComponent, StayUprightStiffness), METADATA_PARAMS(NewProp_StayUprightStiffness_MetaData, ARRAY_COUNT(NewProp_StayUprightStiffness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableStayUprightConstraint_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
				{ "ToolTip", "Stay upright physics constraint (inspired by UDK's StayUprightSpring)\n-STILL WIP-" },
			};
#endif
			auto NewProp_EnableStayUprightConstraint_SetBit = [](void* Obj){ ((UBuoyancyForceComponent*)Obj)->EnableStayUprightConstraint = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableStayUprightConstraint = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableStayUprightConstraint", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyancyForceComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableStayUprightConstraint_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableStayUprightConstraint_MetaData, ARRAY_COUNT(NewProp_EnableStayUprightConstraint_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDebugPoints_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
			};
#endif
			auto NewProp_DrawDebugPoints_SetBit = [](void* Obj){ ((UBuoyancyForceComponent*)Obj)->DrawDebugPoints = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDebugPoints = { UE4CodeGen_Private::EPropertyClass::Bool, "DrawDebugPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyancyForceComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DrawDebugPoints_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DrawDebugPoints_MetaData, ARRAY_COUNT(NewProp_DrawDebugPoints_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneOverride_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
				{ "ToolTip", "Density & radius overrides per skeletal bone (ApplyForceToBones needs to be true)." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneOverride = { UE4CodeGen_Private::EPropertyClass::Array, "BoneOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyForceComponent, BoneOverride), METADATA_PARAMS(NewProp_BoneOverride_MetaData, ARRAY_COUNT(NewProp_BoneOverride_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneOverride_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FStructBoneOverride, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointDensityOverride_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
				{ "ToolTip", "Per-point mesh density override, can be used for half-sinking objects etc." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointDensityOverride = { UE4CodeGen_Private::EPropertyClass::Array, "PointDensityOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyForceComponent, PointDensityOverride), METADATA_PARAMS(NewProp_PointDensityOverride_MetaData, ARRAY_COUNT(NewProp_PointDensityOverride_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PointDensityOverride_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "PointDensityOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoGerstnerIterations_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
				{ "ToolTip", "More accurate gerstner wave height calculations by accounting for the x/y displacement.\nKeep in mind that this effectively doubles the gerstner calculations per test point.\nUse only if accurate height readback is needed." },
			};
#endif
			auto NewProp_TwoGerstnerIterations_SetBit = [](void* Obj){ ((UBuoyancyForceComponent*)Obj)->TwoGerstnerIterations = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TwoGerstnerIterations = { UE4CodeGen_Private::EPropertyClass::Bool, "TwoGerstnerIterations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyancyForceComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_TwoGerstnerIterations_SetBit)>::SetBit, METADATA_PARAMS(NewProp_TwoGerstnerIterations_MetaData, ARRAY_COUNT(NewProp_TwoGerstnerIterations_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapToSurfaceIfNoPhysics_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
				{ "ToolTip", "If object has no physics enabled, snap to water surface." },
			};
#endif
			auto NewProp_SnapToSurfaceIfNoPhysics_SetBit = [](void* Obj){ ((UBuoyancyForceComponent*)Obj)->SnapToSurfaceIfNoPhysics = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SnapToSurfaceIfNoPhysics = { UE4CodeGen_Private::EPropertyClass::Bool, "SnapToSurfaceIfNoPhysics", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyancyForceComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_SnapToSurfaceIfNoPhysics_SetBit)>::SetBit, METADATA_PARAMS(NewProp_SnapToSurfaceIfNoPhysics_MetaData, ARRAY_COUNT(NewProp_SnapToSurfaceIfNoPhysics_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyForceToBones_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
				{ "ToolTip", "If skeletal mesh with physics asset, it will apply buoyancy force at the COM of each bone instead of using the test point array." },
			};
#endif
			auto NewProp_ApplyForceToBones_SetBit = [](void* Obj){ ((UBuoyancyForceComponent*)Obj)->ApplyForceToBones = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ApplyForceToBones = { UE4CodeGen_Private::EPropertyClass::Bool, "ApplyForceToBones", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyancyForceComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ApplyForceToBones_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ApplyForceToBones_MetaData, ARRAY_COUNT(NewProp_ApplyForceToBones_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestPoints_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
				{ "ToolTip", "Test point array. At least one point is required for buoyancy." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TestPoints = { UE4CodeGen_Private::EPropertyClass::Array, "TestPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyForceComponent, TestPoints), METADATA_PARAMS(NewProp_TestPoints_MetaData, ARRAY_COUNT(NewProp_TestPoints_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TestPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TestPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestPointRadius_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
				{ "ToolTip", "Radius of the points." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TestPointRadius = { UE4CodeGen_Private::EPropertyClass::Float, "TestPointRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyForceComponent, TestPointRadius), METADATA_PARAMS(NewProp_TestPointRadius_MetaData, ARRAY_COUNT(NewProp_TestPointRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxUnderwaterVelocity_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxUnderwaterVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MaxUnderwaterVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyForceComponent, MaxUnderwaterVelocity), METADATA_PARAMS(NewProp_MaxUnderwaterVelocity_MetaData, ARRAY_COUNT(NewProp_MaxUnderwaterVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClampMaxVelocity_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
			};
#endif
			auto NewProp_ClampMaxVelocity_SetBit = [](void* Obj){ ((UBuoyancyForceComponent*)Obj)->ClampMaxVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClampMaxVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "ClampMaxVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBuoyancyForceComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ClampMaxVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ClampMaxVelocity_MetaData, ARRAY_COUNT(NewProp_ClampMaxVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocityDamper_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VelocityDamper = { UE4CodeGen_Private::EPropertyClass::Struct, "VelocityDamper", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyForceComponent, VelocityDamper), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_VelocityDamper_MetaData, ARRAY_COUNT(NewProp_VelocityDamper_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidAngularDamping_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
				{ "ToolTip", "Angular damping when object is in fluid." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidAngularDamping = { UE4CodeGen_Private::EPropertyClass::Float, "FluidAngularDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyForceComponent, FluidAngularDamping), METADATA_PARAMS(NewProp_FluidAngularDamping_MetaData, ARRAY_COUNT(NewProp_FluidAngularDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidLinearDamping_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
				{ "ToolTip", "Linear damping when object is in fluid." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidLinearDamping = { UE4CodeGen_Private::EPropertyClass::Float, "FluidLinearDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyForceComponent, FluidLinearDamping), METADATA_PARAMS(NewProp_FluidLinearDamping_MetaData, ARRAY_COUNT(NewProp_FluidLinearDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FluidDensity_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
				{ "ToolTip", "Density of water. Typically you don't need to change this." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FluidDensity = { UE4CodeGen_Private::EPropertyClass::Float, "FluidDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyForceComponent, FluidDensity), METADATA_PARAMS(NewProp_FluidDensity_MetaData, ARRAY_COUNT(NewProp_FluidDensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshDensity_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
				{ "ToolTip", "Density of mesh." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshDensity = { UE4CodeGen_Private::EPropertyClass::Float, "MeshDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyForceComponent, MeshDensity), METADATA_PARAMS(NewProp_MeshDensity_MetaData, ARRAY_COUNT(NewProp_MeshDensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OceanManager_MetaData[] = {
				{ "Category", "Buoyancy Settings" },
				{ "ModuleRelativePath", "Classes/BuoyancyForceComponent.h" },
				{ "ToolTip", "OceanManager used by the component, if unassigned component will auto-detect" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OceanManager = { UE4CodeGen_Private::EPropertyClass::Object, "OceanManager", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, STRUCT_OFFSET(UBuoyancyForceComponent, OceanManager), Z_Construct_UClass_AOceanManager_NoRegister, METADATA_PARAMS(NewProp_OceanManager_MetaData, ARRAY_COUNT(NewProp_OceanManager_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TickGroup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaveForceMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableWaveForces,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StayUprightDesiredRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StayUprightDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StayUprightStiffness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableStayUprightConstraint,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawDebugPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneOverride_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointDensityOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PointDensityOverride_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwoGerstnerIterations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SnapToSurfaceIfNoPhysics,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplyForceToBones,
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
				TCppClassTypeTraits<UBuoyancyForceComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBuoyancyForceComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80080u,
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
	IMPLEMENT_CLASS(UBuoyancyForceComponent, 1784663827);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuoyancyForceComponent(Z_Construct_UClass_UBuoyancyForceComponent, &UBuoyancyForceComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UBuoyancyForceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuoyancyForceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
