// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedBuoyancyComponent() {}
// Cross Module References
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FForceTriangle();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBuoyancyVertex();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UAdvancedBuoyancyComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_UAdvancedBuoyancyComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOcean();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
// End Cross Module References
class UScriptStruct* FForceTriangle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCEANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FForceTriangle_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FForceTriangle, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("ForceTriangle"), sizeof(FForceTriangle), Get_Z_Construct_UScriptStruct_FForceTriangle_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FForceTriangle(FForceTriangle::StaticStruct, TEXT("/Script/OceanPlugin"), TEXT("ForceTriangle"), false, nullptr, nullptr);
static struct FScriptStruct_OceanPlugin_StaticRegisterNativesFForceTriangle
{
	FScriptStruct_OceanPlugin_StaticRegisterNativesFForceTriangle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ForceTriangle")),new UScriptStruct::TCppStructOps<FForceTriangle>);
	}
} ScriptStruct_OceanPlugin_StaticRegisterNativesFForceTriangle;
	UScriptStruct* Z_Construct_UScriptStruct_FForceTriangle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FForceTriangle_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ForceTriangle"), sizeof(FForceTriangle), Get_Z_Construct_UScriptStruct_FForceTriangle_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FForceTriangle>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"ForceTriangle",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FForceTriangle),
				alignof(FForceTriangle),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FForceTriangle_CRC() { return 3872729562U; }
class UScriptStruct* FBuoyancyVertex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCEANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBuoyancyVertex_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuoyancyVertex, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("BuoyancyVertex"), sizeof(FBuoyancyVertex), Get_Z_Construct_UScriptStruct_FBuoyancyVertex_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuoyancyVertex(FBuoyancyVertex::StaticStruct, TEXT("/Script/OceanPlugin"), TEXT("BuoyancyVertex"), false, nullptr, nullptr);
static struct FScriptStruct_OceanPlugin_StaticRegisterNativesFBuoyancyVertex
{
	FScriptStruct_OceanPlugin_StaticRegisterNativesFBuoyancyVertex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BuoyancyVertex")),new UScriptStruct::TCppStructOps<FBuoyancyVertex>);
	}
} ScriptStruct_OceanPlugin_StaticRegisterNativesFBuoyancyVertex;
	UScriptStruct* Z_Construct_UScriptStruct_FBuoyancyVertex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuoyancyVertex_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuoyancyVertex"), sizeof(FBuoyancyVertex), Get_Z_Construct_UScriptStruct_FBuoyancyVertex_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuoyancyVertex>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BuoyancyVertex",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBuoyancyVertex),
				alignof(FBuoyancyVertex),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuoyancyVertex_CRC() { return 402348825U; }
	void UAdvancedBuoyancyComponent::StaticRegisterNativesUAdvancedBuoyancyComponent()
	{
		UClass* Class = UAdvancedBuoyancyComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyForce", &UAdvancedBuoyancyComponent::execApplyForce },
			{ "ApplySlamForce", &UAdvancedBuoyancyComponent::execApplySlamForce },
			{ "DrawDebugStuff", &UAdvancedBuoyancyComponent::execDrawDebugStuff },
			{ "GetOcean", &UAdvancedBuoyancyComponent::execGetOcean },
			{ "GetOceanDepthFromGrid", &UAdvancedBuoyancyComponent::execGetOceanDepthFromGrid },
			{ "SetMeshDensity", &UAdvancedBuoyancyComponent::execSetMeshDensity },
			{ "SplitTriangle", &UAdvancedBuoyancyComponent::execSplitTriangle },
			{ "TriangleArea", &UAdvancedBuoyancyComponent::execTriangleArea },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce()
	{
		struct AdvancedBuoyancyComponent_eventApplyForce_Parms
		{
			FForceTriangle TriForce;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriForce = { UE4CodeGen_Private::EPropertyClass::Struct, "TriForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventApplyForce_Parms, TriForce), Z_Construct_UScriptStruct_FForceTriangle, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TriForce,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Advanced Buoyancy|Triangles" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedBuoyancyComponent, "ApplyForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AdvancedBuoyancyComponent_eventApplyForce_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce()
	{
		struct AdvancedBuoyancyComponent_eventApplySlamForce_Parms
		{
			FVector SlamForce;
			FVector TriCenter;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriCenter = { UE4CodeGen_Private::EPropertyClass::Struct, "TriCenter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventApplySlamForce_Parms, TriCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlamForce = { UE4CodeGen_Private::EPropertyClass::Struct, "SlamForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventApplySlamForce_Parms, SlamForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TriCenter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SlamForce,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Advanced Buoyancy|Forces" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedBuoyancyComponent, "ApplySlamForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(AdvancedBuoyancyComponent_eventApplySlamForce_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff()
	{
		struct AdvancedBuoyancyComponent_eventDrawDebugStuff_Parms
		{
			FForceTriangle TriForce;
			FColor DebugColor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugColor = { UE4CodeGen_Private::EPropertyClass::Struct, "DebugColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventDrawDebugStuff_Parms, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriForce = { UE4CodeGen_Private::EPropertyClass::Struct, "TriForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventDrawDebugStuff_Parms, TriForce), Z_Construct_UScriptStruct_FForceTriangle, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TriForce,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Debug" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedBuoyancyComponent, "DrawDebugStuff", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(AdvancedBuoyancyComponent_eventDrawDebugStuff_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOcean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "World Data" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedBuoyancyComponent, "GetOcean", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid()
	{
		struct AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms
		{
			FVector Position;
			bool bJustGetHeightAtLocation;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bJustGetHeightAtLocation_SetBit = [](void* Obj){ ((AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms*)Obj)->bJustGetHeightAtLocation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bJustGetHeightAtLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "bJustGetHeightAtLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bJustGetHeightAtLocation_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bJustGetHeightAtLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Advanced Buoyancy|Triangles" },
				{ "CPP_Default_bJustGetHeightAtLocation", "false" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedBuoyancyComponent, "GetOceanDepthFromGrid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(AdvancedBuoyancyComponent_eventGetOceanDepthFromGrid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity()
	{
		struct AdvancedBuoyancyComponent_eventSetMeshDensity_Parms
		{
			float NewDensity;
			float NewWaterDensity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewWaterDensity = { UE4CodeGen_Private::EPropertyClass::Float, "NewWaterDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventSetMeshDensity_Parms, NewWaterDensity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDensity = { UE4CodeGen_Private::EPropertyClass::Float, "NewDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventSetMeshDensity_Parms, NewDensity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewWaterDensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewDensity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mesh" },
				{ "CPP_Default_NewWaterDensity", "1025.000000" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedBuoyancyComponent, "SetMeshDensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(AdvancedBuoyancyComponent_eventSetMeshDensity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle()
	{
		struct AdvancedBuoyancyComponent_eventSplitTriangle_Parms
		{
			FBuoyancyVertex H;
			FBuoyancyVertex M;
			FBuoyancyVertex L;
			FVector InArrow;
			TArray<FForceTriangle> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventSplitTriangle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FForceTriangle, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InArrow = { UE4CodeGen_Private::EPropertyClass::Struct, "InArrow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventSplitTriangle_Parms, InArrow), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_L = { UE4CodeGen_Private::EPropertyClass::Struct, "L", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventSplitTriangle_Parms, L), Z_Construct_UScriptStruct_FBuoyancyVertex, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_M = { UE4CodeGen_Private::EPropertyClass::Struct, "M", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventSplitTriangle_Parms, M), Z_Construct_UScriptStruct_FBuoyancyVertex, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_H = { UE4CodeGen_Private::EPropertyClass::Struct, "H", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventSplitTriangle_Parms, H), Z_Construct_UScriptStruct_FBuoyancyVertex, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InArrow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_L,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_M,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_H,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Advanced Buoyancy|Triangles" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedBuoyancyComponent, "SplitTriangle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(AdvancedBuoyancyComponent_eventSplitTriangle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea()
	{
		struct AdvancedBuoyancyComponent_eventTriangleArea_Parms
		{
			FVector A;
			FVector B;
			FVector C;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventTriangleArea_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_C = { UE4CodeGen_Private::EPropertyClass::Struct, "C", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventTriangleArea_Parms, C), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventTriangleArea_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(AdvancedBuoyancyComponent_eventTriangleArea_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_C,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Advanced Buoyancy|Triangles" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UAdvancedBuoyancyComponent, "TriangleArea", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(AdvancedBuoyancyComponent_eventTriangleArea_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAdvancedBuoyancyComponent_NoRegister()
	{
		return UAdvancedBuoyancyComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UAdvancedBuoyancyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplyForce, "ApplyForce" }, // 1761847495
				{ &Z_Construct_UFunction_UAdvancedBuoyancyComponent_ApplySlamForce, "ApplySlamForce" }, // 939178104
				{ &Z_Construct_UFunction_UAdvancedBuoyancyComponent_DrawDebugStuff, "DrawDebugStuff" }, // 2899630616
				{ &Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOcean, "GetOcean" }, // 3371401219
				{ &Z_Construct_UFunction_UAdvancedBuoyancyComponent_GetOceanDepthFromGrid, "GetOceanDepthFromGrid" }, // 2933807246
				{ &Z_Construct_UFunction_UAdvancedBuoyancyComponent_SetMeshDensity, "SetMeshDensity" }, // 649867295
				{ &Z_Construct_UFunction_UAdvancedBuoyancyComponent_SplitTriangle, "SplitTriangle" }, // 3398313928
				{ &Z_Construct_UFunction_UAdvancedBuoyancyComponent_TriangleArea, "TriangleArea" }, // 2788965799
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Physics" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriSubmergedArea_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Triangles" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TriSubmergedArea = { UE4CodeGen_Private::EPropertyClass::Array, "TriSubmergedArea", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, TriSubmergedArea), METADATA_PARAMS(NewProp_TriSubmergedArea_MetaData, ARRAY_COUNT(NewProp_TriSubmergedArea_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriSubmergedArea_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "TriSubmergedArea", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriSizes_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Triangles" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TriSizes = { UE4CodeGen_Private::EPropertyClass::Array, "TriSizes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, TriSizes), METADATA_PARAMS(NewProp_TriSizes_MetaData, ARRAY_COUNT(NewProp_TriSizes_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TriSizes_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "TriSizes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmergedTris_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Triangles" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubmergedTris = { UE4CodeGen_Private::EPropertyClass::Array, "SubmergedTris", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, SubmergedTris), METADATA_PARAMS(NewProp_SubmergedTris_MetaData, ARRAY_COUNT(NewProp_SubmergedTris_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SubmergedTris_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SubmergedTris", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FForceTriangle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedGridHeight_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Optimization" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdvancedGridHeight = { UE4CodeGen_Private::EPropertyClass::Array, "AdvancedGridHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, AdvancedGridHeight), METADATA_PARAMS(NewProp_AdvancedGridHeight_MetaData, ARRAY_COUNT(NewProp_AdvancedGridHeight_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdvancedGridHeight_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "AdvancedGridHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSlamAcceleration_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Coefficients" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSlamAcceleration = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSlamAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, MaxSlamAcceleration), METADATA_PARAMS(NewProp_MaxSlamAcceleration_MetaData, ARRAY_COUNT(NewProp_MaxSlamAcceleration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViscousDragCoefficient_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Coefficients" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViscousDragCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "ViscousDragCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, ViscousDragCoefficient), METADATA_PARAMS(NewProp_ViscousDragCoefficient_MetaData, ARRAY_COUNT(NewProp_ViscousDragCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuctionCoefficient_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Coefficients" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SuctionCoefficient = { UE4CodeGen_Private::EPropertyClass::Struct, "SuctionCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, SuctionCoefficient), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_SuctionCoefficient_MetaData, ARRAY_COUNT(NewProp_SuctionCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Coefficients" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DragCoefficient = { UE4CodeGen_Private::EPropertyClass::Struct, "DragCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, DragCoefficient), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_DragCoefficient_MetaData, ARRAY_COUNT(NewProp_DragCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactCoefficient_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Coefficients" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpactCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "ImpactCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, ImpactCoefficient), METADATA_PARAMS(NewProp_ImpactCoefficient_MetaData, ARRAY_COUNT(NewProp_ImpactCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmergedVolume_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Coefficients" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SubmergedVolume = { UE4CodeGen_Private::EPropertyClass::Float, "SubmergedVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, SubmergedVolume), METADATA_PARAMS(NewProp_SubmergedVolume_MetaData, ARRAY_COUNT(NewProp_SubmergedVolume_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityCorrectionModifier_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Coefficients" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityCorrectionModifier = { UE4CodeGen_Private::EPropertyClass::Float, "DensityCorrectionModifier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, DensityCorrectionModifier), METADATA_PARAMS(NewProp_DensityCorrectionModifier_MetaData, ARRAY_COUNT(NewProp_DensityCorrectionModifier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityCorrection_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Coefficients" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityCorrection = { UE4CodeGen_Private::EPropertyClass::Float, "DensityCorrection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, DensityCorrection), METADATA_PARAMS(NewProp_DensityCorrection_MetaData, ARRAY_COUNT(NewProp_DensityCorrection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuoyancyPitchReductionCoefficient_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Coefficients" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuoyancyPitchReductionCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "BuoyancyPitchReductionCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, BuoyancyPitchReductionCoefficient), METADATA_PARAMS(NewProp_BuoyancyPitchReductionCoefficient_MetaData, ARRAY_COUNT(NewProp_BuoyancyPitchReductionCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuoyancyReductionCoefficient_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Coefficients" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuoyancyReductionCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "BuoyancyReductionCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, BuoyancyReductionCoefficient), METADATA_PARAMS(NewProp_BuoyancyReductionCoefficient_MetaData, ARRAY_COUNT(NewProp_BuoyancyReductionCoefficient_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FalseVolume_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Mesh Data" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FalseVolume = { UE4CodeGen_Private::EPropertyClass::Float, "FalseVolume", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, FalseVolume), METADATA_PARAMS(NewProp_FalseVolume_MetaData, ARRAY_COUNT(NewProp_FalseVolume_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshTransform_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Mesh Data" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "MeshTransform", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, MeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(NewProp_MeshTransform_MetaData, ARRAY_COUNT(NewProp_MeshTransform_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuoyantMesh_MetaData[] = {
				{ "Category", "Advanced Buoyancy|Mesh Data" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
				{ "ToolTip", "The mesh the forces are being applied too, can be different from the mesh used for buoyancy." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuoyantMesh = { UE4CodeGen_Private::EPropertyClass::Object, "BuoyantMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, BuoyantMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_BuoyantMesh_MetaData, ARRAY_COUNT(NewProp_BuoyantMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshDensity_MetaData[] = {
				{ "Category", "Attributes" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MeshDensity = { UE4CodeGen_Private::EPropertyClass::Float, "MeshDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, MeshDensity), METADATA_PARAMS(NewProp_MeshDensity_MetaData, ARRAY_COUNT(NewProp_MeshDensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[] = {
				{ "Category", "World Data" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gravity = { UE4CodeGen_Private::EPropertyClass::Float, "Gravity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, Gravity), METADATA_PARAMS(NewProp_Gravity_MetaData, ARRAY_COUNT(NewProp_Gravity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaterDensity_MetaData[] = {
				{ "Category", "World Data" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaterDensity = { UE4CodeGen_Private::EPropertyClass::Float, "WaterDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, WaterDensity), METADATA_PARAMS(NewProp_WaterDensity_MetaData, ARRAY_COUNT(NewProp_WaterDensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheOcean_MetaData[] = {
				{ "Category", "World Data" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
				{ "ToolTip", "World information" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TheOcean = { UE4CodeGen_Private::EPropertyClass::Object, "TheOcean", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UAdvancedBuoyancyComponent, TheOcean), Z_Construct_UClass_AOceanManager_NoRegister, METADATA_PARAMS(NewProp_TheOcean_MetaData, ARRAY_COUNT(NewProp_TheOcean_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugOn_MetaData[] = {
				{ "Category", "Options" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
				{ "ToolTip", "will draw force arrows and buoyancy traingles/points" },
			};
#endif
			auto NewProp_bDebugOn_SetBit = [](void* Obj){ ((UAdvancedBuoyancyComponent*)Obj)->bDebugOn = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugOn = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugOn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedBuoyancyComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebugOn_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDebugOn_MetaData, ARRAY_COUNT(NewProp_bDebugOn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDrag_MetaData[] = {
				{ "Category", "Options" },
				{ "ModuleRelativePath", "Classes/AdvancedBuoyancyComponent/AdvancedBuoyancyComponent.h" },
				{ "ToolTip", "use drag when using advanced buoyancy (most likely will always be yes)" },
			};
#endif
			auto NewProp_bUseDrag_SetBit = [](void* Obj){ ((UAdvancedBuoyancyComponent*)Obj)->bUseDrag = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDrag = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseDrag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UAdvancedBuoyancyComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseDrag_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseDrag_MetaData, ARRAY_COUNT(NewProp_bUseDrag_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TriSubmergedArea,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TriSubmergedArea_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TriSizes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TriSizes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubmergedTris,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubmergedTris_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdvancedGridHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AdvancedGridHeight_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSlamAcceleration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ViscousDragCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuctionCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DragCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImpactCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubmergedVolume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DensityCorrectionModifier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DensityCorrection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BuoyancyPitchReductionCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BuoyancyReductionCoefficient,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FalseVolume,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshTransform,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BuoyantMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshDensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Gravity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaterDensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TheOcean,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebugOn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseDrag,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAdvancedBuoyancyComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAdvancedBuoyancyComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UAdvancedBuoyancyComponent, 4014921395);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAdvancedBuoyancyComponent(Z_Construct_UClass_UAdvancedBuoyancyComponent, &UAdvancedBuoyancyComponent::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("UAdvancedBuoyancyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedBuoyancyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
