// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/BuoyantMesh/WaterHeightmapComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterHeightmapComponent() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UWaterHeightmapComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UWaterHeightmapComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References
	void UWaterHeightmapComponent::StaticRegisterNativesUWaterHeightmapComponent()
	{
	}
	UClass* Z_Construct_UClass_UWaterHeightmapComponent_NoRegister()
	{
		return UWaterHeightmapComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UWaterHeightmapComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "IncludePath", "BuoyantMesh/WaterHeightmapComponent.h" },
				{ "ModuleRelativePath", "Classes/BuoyantMesh/WaterHeightmapComponent.h" },
				{ "ToolTip", "Water heightmap centered on the owning actor.\nOnly the heightmap vertices that are actually used trigger an ocean height calculation. Queries between vertices are\ninterpolated. Vertex heights are cached within a tick." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OceanManager_MetaData[] = {
				{ "ModuleRelativePath", "Classes/BuoyantMesh/WaterHeightmapComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OceanManager = { UE4CodeGen_Private::EPropertyClass::Object, "OceanManager", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UWaterHeightmapComponent, OceanManager), Z_Construct_UClass_AOceanManager_NoRegister, METADATA_PARAMS(NewProp_OceanManager_MetaData, ARRAY_COUNT(NewProp_OceanManager_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawHeightmap_MetaData[] = {
				{ "Category", "Debug" },
				{ "ModuleRelativePath", "Classes/BuoyantMesh/WaterHeightmapComponent.h" },
			};
#endif
			auto NewProp_bDrawHeightmap_SetBit = [](void* Obj){ ((UWaterHeightmapComponent*)Obj)->bDrawHeightmap = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawHeightmap = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawHeightmap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWaterHeightmapComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawHeightmap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawHeightmap_MetaData, ARRAY_COUNT(NewProp_bDrawHeightmap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawUsedTriangles_MetaData[] = {
				{ "Category", "Debug" },
				{ "ModuleRelativePath", "Classes/BuoyantMesh/WaterHeightmapComponent.h" },
			};
#endif
			auto NewProp_bDrawUsedTriangles_SetBit = [](void* Obj){ ((UWaterHeightmapComponent*)Obj)->bDrawUsedTriangles = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawUsedTriangles = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawUsedTriangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWaterHeightmapComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawUsedTriangles_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawUsedTriangles_MetaData, ARRAY_COUNT(NewProp_bDrawUsedTriangles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSizeMultiplier_MetaData[] = {
				{ "Category", "Water Patch" },
				{ "ModuleRelativePath", "Classes/BuoyantMesh/WaterHeightmapComponent.h" },
				{ "ToolTip", "How much big should the patch be, relative to the parent actor. 1 is the same." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridSizeMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "GridSizeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UWaterHeightmapComponent, GridSizeMultiplier), METADATA_PARAMS(NewProp_GridSizeMultiplier_MetaData, ARRAY_COUNT(NewProp_GridSizeMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyCollidingComponents_MetaData[] = {
				{ "Category", "Water Patch" },
				{ "ModuleRelativePath", "Classes/BuoyantMesh/WaterHeightmapComponent.h" },
				{ "ToolTip", "Only use colliding components be used to determine the water patch size?" },
			};
#endif
			auto NewProp_bOnlyCollidingComponents_SetBit = [](void* Obj){ ((UWaterHeightmapComponent*)Obj)->bOnlyCollidingComponents = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyCollidingComponents = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlyCollidingComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWaterHeightmapComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOnlyCollidingComponents_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOnlyCollidingComponents_MetaData, ARRAY_COUNT(NewProp_bOnlyCollidingComponents_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DesiredCellSize_MetaData[] = {
				{ "Category", "Water Patch" },
				{ "ModuleRelativePath", "Classes/BuoyantMesh/WaterHeightmapComponent.h" },
				{ "ToolTip", "Desired size for a square cell in the water patch.\nThis value might be rounded by the algorithm to make sure no cells are cut." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesiredCellSize = { UE4CodeGen_Private::EPropertyClass::Float, "DesiredCellSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UWaterHeightmapComponent, DesiredCellSize), METADATA_PARAMS(NewProp_DesiredCellSize_MetaData, ARRAY_COUNT(NewProp_DesiredCellSize_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OceanManager,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawHeightmap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawUsedTriangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GridSizeMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOnlyCollidingComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DesiredCellSize,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWaterHeightmapComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWaterHeightmapComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UWaterHeightmapComponent, 1607519954);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWaterHeightmapComponent(Z_Construct_UClass_UWaterHeightmapComponent, &UWaterHeightmapComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UWaterHeightmapComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterHeightmapComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
