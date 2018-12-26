// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/OceanManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanManager() {}
// Cross Module References
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWaveSetParameters();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWaveParameter();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AOceanManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_AOceanManager_GetHeightmapPixel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_AOceanManager_GetWaveHeightValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FWaveSetParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCEANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FWaveSetParameters_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveSetParameters, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("WaveSetParameters"), sizeof(FWaveSetParameters), Get_Z_Construct_UScriptStruct_FWaveSetParameters_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWaveSetParameters(FWaveSetParameters::StaticStruct, TEXT("/Script/OceanPlugin"), TEXT("WaveSetParameters"), false, nullptr, nullptr);
static struct FScriptStruct_OceanPlugin_StaticRegisterNativesFWaveSetParameters
{
	FScriptStruct_OceanPlugin_StaticRegisterNativesFWaveSetParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WaveSetParameters")),new UScriptStruct::TCppStructOps<FWaveSetParameters>);
	}
} ScriptStruct_OceanPlugin_StaticRegisterNativesFWaveSetParameters;
	UScriptStruct* Z_Construct_UScriptStruct_FWaveSetParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWaveSetParameters_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WaveSetParameters"), sizeof(FWaveSetParameters), Get_Z_Construct_UScriptStruct_FWaveSetParameters_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
				{ "ToolTip", "* Contains the parameters necessary for a set of Gerstner waves." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveSetParameters>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wave08_MetaData[] = {
				{ "Category", "WaveSetParameters" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wave08 = { UE4CodeGen_Private::EPropertyClass::Struct, "Wave08", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveSetParameters, Wave08), Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(NewProp_Wave08_MetaData, ARRAY_COUNT(NewProp_Wave08_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wave07_MetaData[] = {
				{ "Category", "WaveSetParameters" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wave07 = { UE4CodeGen_Private::EPropertyClass::Struct, "Wave07", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveSetParameters, Wave07), Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(NewProp_Wave07_MetaData, ARRAY_COUNT(NewProp_Wave07_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wave06_MetaData[] = {
				{ "Category", "WaveSetParameters" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wave06 = { UE4CodeGen_Private::EPropertyClass::Struct, "Wave06", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveSetParameters, Wave06), Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(NewProp_Wave06_MetaData, ARRAY_COUNT(NewProp_Wave06_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wave05_MetaData[] = {
				{ "Category", "WaveSetParameters" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wave05 = { UE4CodeGen_Private::EPropertyClass::Struct, "Wave05", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveSetParameters, Wave05), Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(NewProp_Wave05_MetaData, ARRAY_COUNT(NewProp_Wave05_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wave04_MetaData[] = {
				{ "Category", "WaveSetParameters" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wave04 = { UE4CodeGen_Private::EPropertyClass::Struct, "Wave04", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveSetParameters, Wave04), Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(NewProp_Wave04_MetaData, ARRAY_COUNT(NewProp_Wave04_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wave03_MetaData[] = {
				{ "Category", "WaveSetParameters" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wave03 = { UE4CodeGen_Private::EPropertyClass::Struct, "Wave03", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveSetParameters, Wave03), Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(NewProp_Wave03_MetaData, ARRAY_COUNT(NewProp_Wave03_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wave02_MetaData[] = {
				{ "Category", "WaveSetParameters" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wave02 = { UE4CodeGen_Private::EPropertyClass::Struct, "Wave02", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveSetParameters, Wave02), Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(NewProp_Wave02_MetaData, ARRAY_COUNT(NewProp_Wave02_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wave01_MetaData[] = {
				{ "Category", "WaveSetParameters" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Wave01 = { UE4CodeGen_Private::EPropertyClass::Struct, "Wave01", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveSetParameters, Wave01), Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(NewProp_Wave01_MetaData, ARRAY_COUNT(NewProp_Wave01_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Wave08,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Wave07,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Wave06,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Wave05,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Wave04,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Wave03,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Wave02,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Wave01,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"WaveSetParameters",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FWaveSetParameters),
				alignof(FWaveSetParameters),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWaveSetParameters_CRC() { return 2493254991U; }
class UScriptStruct* FWaveParameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCEANPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FWaveParameter_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveParameter, Z_Construct_UPackage__Script_OceanPlugin(), TEXT("WaveParameter"), sizeof(FWaveParameter), Get_Z_Construct_UScriptStruct_FWaveParameter_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWaveParameter(FWaveParameter::StaticStruct, TEXT("/Script/OceanPlugin"), TEXT("WaveParameter"), false, nullptr, nullptr);
static struct FScriptStruct_OceanPlugin_StaticRegisterNativesFWaveParameter
{
	FScriptStruct_OceanPlugin_StaticRegisterNativesFWaveParameter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WaveParameter")),new UScriptStruct::TCppStructOps<FWaveParameter>);
	}
} ScriptStruct_OceanPlugin_StaticRegisterNativesFWaveParameter;
	UScriptStruct* Z_Construct_UScriptStruct_FWaveParameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWaveParameter_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_OceanPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WaveParameter"), sizeof(FWaveParameter), Get_Z_Construct_UScriptStruct_FWaveParameter_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
				{ "ToolTip", "* Contains the parameters necessary for a single Gerstner wave." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveParameter>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[] = {
				{ "Category", "WaveParameter" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScale = { UE4CodeGen_Private::EPropertyClass::Float, "TimeScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveParameter, TimeScale), METADATA_PARAMS(NewProp_TimeScale_MetaData, ARRAY_COUNT(NewProp_TimeScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Steepness_MetaData[] = {
				{ "Category", "WaveParameter" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Steepness = { UE4CodeGen_Private::EPropertyClass::Float, "Steepness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveParameter, Steepness), METADATA_PARAMS(NewProp_Steepness_MetaData, ARRAY_COUNT(NewProp_Steepness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
				{ "Category", "WaveParameter" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amplitude = { UE4CodeGen_Private::EPropertyClass::Float, "Amplitude", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveParameter, Amplitude), METADATA_PARAMS(NewProp_Amplitude_MetaData, ARRAY_COUNT(NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
				{ "Category", "WaveParameter" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length = { UE4CodeGen_Private::EPropertyClass::Float, "Length", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveParameter, Length), METADATA_PARAMS(NewProp_Length_MetaData, ARRAY_COUNT(NewProp_Length_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "Category", "WaveParameter" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Float, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FWaveParameter, Rotation), METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Steepness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Amplitude,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Length,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"WaveParameter",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FWaveParameter),
				alignof(FWaveParameter),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWaveParameter_CRC() { return 1732366532U; }
	void AOceanManager::StaticRegisterNativesAOceanManager()
	{
		UClass* Class = AOceanManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeightmapPixel", &AOceanManager::execGetHeightmapPixel },
			{ "GetWaveHeightValue", &AOceanManager::execGetWaveHeightValue },
			{ "LoadLandscapeHeightmap", &AOceanManager::execLoadLandscapeHeightmap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AOceanManager_GetHeightmapPixel()
	{
		struct OceanManager_eventGetHeightmapPixel_Parms
		{
			float U;
			float V;
			FLinearColor ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OceanManager_eventGetHeightmapPixel_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_V = { UE4CodeGen_Private::EPropertyClass::Float, "V", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OceanManager_eventGetHeightmapPixel_Parms, V), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_U = { UE4CodeGen_Private::EPropertyClass::Float, "U", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OceanManager_eventGetHeightmapPixel_Parms, U), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_V,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_U,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Ocean Manager" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanManager, "GetHeightmapPixel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(OceanManager_eventGetHeightmapPixel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AOceanManager_GetWaveHeightValue()
	{
		struct OceanManager_eventGetWaveHeightValue_Parms
		{
			FVector location;
			const UWorld* World;
			bool HeightOnly;
			bool TwoIterations;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OceanManager_eventGetWaveHeightValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_TwoIterations_SetBit = [](void* Obj){ ((OceanManager_eventGetWaveHeightValue_Parms*)Obj)->TwoIterations = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TwoIterations = { UE4CodeGen_Private::EPropertyClass::Bool, "TwoIterations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OceanManager_eventGetWaveHeightValue_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_TwoIterations_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_HeightOnly_SetBit = [](void* Obj){ ((OceanManager_eventGetWaveHeightValue_Parms*)Obj)->HeightOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HeightOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "HeightOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OceanManager_eventGetWaveHeightValue_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_HeightOnly_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(OceanManager_eventGetWaveHeightValue_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(NewProp_World_MetaData, ARRAY_COUNT(NewProp_World_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_location = { UE4CodeGen_Private::EPropertyClass::Struct, "location", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OceanManager_eventGetWaveHeightValue_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_location_MetaData, ARRAY_COUNT(NewProp_location_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TwoIterations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeightOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_World,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_location,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Ocean Manager" },
				{ "CPP_Default_HeightOnly", "true" },
				{ "CPP_Default_TwoIterations", "false" },
				{ "HidePin", "World" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanManager, "GetWaveHeightValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(OceanManager_eventGetWaveHeightValue_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap()
	{
		struct OceanManager_eventLoadLandscapeHeightmap_Parms
		{
			UTexture2D* Tex2D;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tex2D = { UE4CodeGen_Private::EPropertyClass::Object, "Tex2D", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OceanManager_eventLoadLandscapeHeightmap_Parms, Tex2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tex2D,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Ocean Manager" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AOceanManager, "LoadLandscapeHeightmap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(OceanManager_eventLoadLandscapeHeightmap_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOceanManager_NoRegister()
	{
		return AOceanManager::StaticClass();
	}
	UClass* Z_Construct_UClass_AOceanManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AOceanManager_GetHeightmapPixel, "GetHeightmapPixel" }, // 2647270672
				{ &Z_Construct_UFunction_AOceanManager_GetWaveHeightValue, "GetWaveHeightValue" }, // 352271428
				{ &Z_Construct_UFunction_AOceanManager_LoadLandscapeHeightmap, "LoadLandscapeHeightmap" }, // 2246043851
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "OceanManager.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
				{ "ToolTip", "OceanManager calculates the Gerstner waves in code, while the Material uses it's own implementation in a MaterialFunction.\nTODO: Investigate whether a single implementation could be used to increase performance." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightmapTexture_MetaData[] = {
				{ "Category", "OceanManager" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightmapTexture = { UE4CodeGen_Private::EPropertyClass::Object, "HeightmapTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, HeightmapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_HeightmapTexture_MetaData, ARRAY_COUNT(NewProp_HeightmapTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[] = {
				{ "Category", "OceanManager" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Landscape = { UE4CodeGen_Private::EPropertyClass::Object, "Landscape", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(NewProp_Landscape_MetaData, ARRAY_COUNT(NewProp_Landscape_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulationPower_MetaData[] = {
				{ "Category", "OceanManager" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModulationPower = { UE4CodeGen_Private::EPropertyClass::Float, "ModulationPower", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, ModulationPower), METADATA_PARAMS(NewProp_ModulationPower_MetaData, ARRAY_COUNT(NewProp_ModulationPower_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulationMaxHeight_MetaData[] = {
				{ "Category", "OceanManager" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModulationMaxHeight = { UE4CodeGen_Private::EPropertyClass::Float, "ModulationMaxHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, ModulationMaxHeight), METADATA_PARAMS(NewProp_ModulationMaxHeight_MetaData, ARRAY_COUNT(NewProp_ModulationMaxHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModulationStartHeight_MetaData[] = {
				{ "Category", "OceanManager" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModulationStartHeight = { UE4CodeGen_Private::EPropertyClass::Float, "ModulationStartHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, ModulationStartHeight), METADATA_PARAMS(NewProp_ModulationStartHeight_MetaData, ARRAY_COUNT(NewProp_ModulationStartHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLandscapeModulation_MetaData[] = {
				{ "Category", "OceanManager" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
				{ "ToolTip", "Landscape height modulation vars." },
			};
#endif
			auto NewProp_bEnableLandscapeModulation_SetBit = [](void* Obj){ ((AOceanManager*)Obj)->bEnableLandscapeModulation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLandscapeModulation = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableLandscapeModulation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AOceanManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableLandscapeModulation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableLandscapeModulation_MetaData, ARRAY_COUNT(NewProp_bEnableLandscapeModulation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetWorkTimeOffset_MetaData[] = {
				{ "Category", "OceanManager" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetWorkTimeOffset = { UE4CodeGen_Private::EPropertyClass::Float, "NetWorkTimeOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AOceanManager, NetWorkTimeOffset), METADATA_PARAMS(NewProp_NetWorkTimeOffset_MetaData, ARRAY_COUNT(NewProp_NetWorkTimeOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveSetOffsetsOverride_MetaData[] = {
				{ "Category", "OceanManager" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
				{ "ToolTip", "Individual Gerstner wave settings.\n      (leave blank to use the default offsets)." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WaveSetOffsetsOverride = { UE4CodeGen_Private::EPropertyClass::Array, "WaveSetOffsetsOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, WaveSetOffsetsOverride), METADATA_PARAMS(NewProp_WaveSetOffsetsOverride_MetaData, ARRAY_COUNT(NewProp_WaveSetOffsetsOverride_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaveSetOffsetsOverride_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "WaveSetOffsetsOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FWaveSetParameters, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveClusters_MetaData[] = {
				{ "Category", "OceanManager" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
				{ "ToolTip", "Median Gerstner wave settings\n      (only 1 cluster is used in the material by default)." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WaveClusters = { UE4CodeGen_Private::EPropertyClass::Array, "WaveClusters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, WaveClusters), METADATA_PARAMS(NewProp_WaveClusters_MetaData, ARRAY_COUNT(NewProp_WaveClusters_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaveClusters_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "WaveClusters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FWaveParameter, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceCheck_MetaData[] = {
				{ "Category", "OceanManager" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
				{ "ToolTip", "Optimization:\n      * If the distance of a buoyant point to base sea level exceeds DistanceCheck,\n      * skip the Gerstner calculations and return base sea level." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceCheck = { UE4CodeGen_Private::EPropertyClass::Float, "DistanceCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, DistanceCheck), METADATA_PARAMS(NewProp_DistanceCheck_MetaData, ARRAY_COUNT(NewProp_DistanceCheck_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalWaveAmplitude_MetaData[] = {
				{ "Category", "OceanManager" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
				{ "ToolTip", "The global amplitude multiplier of the waves." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalWaveAmplitude = { UE4CodeGen_Private::EPropertyClass::Float, "GlobalWaveAmplitude", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, GlobalWaveAmplitude), METADATA_PARAMS(NewProp_GlobalWaveAmplitude_MetaData, ARRAY_COUNT(NewProp_GlobalWaveAmplitude_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalWaveSpeed_MetaData[] = {
				{ "Category", "OceanManager" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
				{ "ToolTip", "The global speed multiplier of the waves." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GlobalWaveSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "GlobalWaveSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, GlobalWaveSpeed), METADATA_PARAMS(NewProp_GlobalWaveSpeed_MetaData, ARRAY_COUNT(NewProp_GlobalWaveSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalWaveDirection_MetaData[] = {
				{ "Category", "OceanManager" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
				{ "ToolTip", "The global direction the waves travel." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalWaveDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "GlobalWaveDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AOceanManager, GlobalWaveDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_GlobalWaveDirection_MetaData, ARRAY_COUNT(NewProp_GlobalWaveDirection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableGerstnerWaves_MetaData[] = {
				{ "Category", "OceanManager" },
				{ "ModuleRelativePath", "Classes/OceanManager.h" },
			};
#endif
			auto NewProp_EnableGerstnerWaves_SetBit = [](void* Obj){ ((AOceanManager*)Obj)->EnableGerstnerWaves = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableGerstnerWaves = { UE4CodeGen_Private::EPropertyClass::Bool, "EnableGerstnerWaves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AOceanManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_EnableGerstnerWaves_SetBit)>::SetBit, METADATA_PARAMS(NewProp_EnableGerstnerWaves_MetaData, ARRAY_COUNT(NewProp_EnableGerstnerWaves_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeightmapTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Landscape,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModulationPower,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModulationMaxHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ModulationStartHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableLandscapeModulation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NetWorkTimeOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaveSetOffsetsOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaveSetOffsetsOverride_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaveClusters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WaveClusters_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlobalWaveAmplitude,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlobalWaveSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GlobalWaveDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnableGerstnerWaves,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AOceanManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AOceanManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AOceanManager, 2076471637);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOceanManager(Z_Construct_UClass_AOceanManager, &AOceanManager::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("AOceanManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOceanManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
