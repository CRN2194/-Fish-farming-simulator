// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Fish/FishManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFishManager() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AFishManager_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_AFishManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AFishManager::StaticRegisterNativesAFishManager()
	{
	}
	UClass* Z_Construct_UClass_AFishManager_NoRegister()
	{
		return AFishManager::StaticClass();
	}
	UClass* Z_Construct_UClass_AFishManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Fish/FishManager.h" },
				{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerType_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
				{ "ToolTip", "Player Type" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_playerType = { UE4CodeGen_Private::EPropertyClass::Class, "playerType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFishManager, playerType), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_playerType_MetaData, ARRAY_COUNT(NewProp_playerType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugMode_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
				{ "ToolTip", "Player Type" },
			};
#endif
			auto NewProp_DebugMode_SetBit = [](void* Obj){ ((AFishManager*)Obj)->DebugMode = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugMode = { UE4CodeGen_Private::EPropertyClass::Bool, "DebugMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFishManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DebugMode_SetBit)>::SetBit, METADATA_PARAMS(NewProp_DebugMode_MetaData, ARRAY_COUNT(NewProp_DebugMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_attachToPlayer_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
				{ "ToolTip", "Attach fish manager to player?" },
			};
#endif
			auto NewProp_attachToPlayer_SetBit = [](void* Obj){ ((AFishManager*)Obj)->attachToPlayer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_attachToPlayer = { UE4CodeGen_Private::EPropertyClass::Bool, "attachToPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AFishManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_attachToPlayer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_attachToPlayer_MetaData, ARRAY_COUNT(NewProp_attachToPlayer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_underwaterBoxLength_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
				{ "ToolTip", "Length of underwater box" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_underwaterBoxLength = { UE4CodeGen_Private::EPropertyClass::Float, "underwaterBoxLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFishManager, underwaterBoxLength), METADATA_PARAMS(NewProp_underwaterBoxLength_MetaData, ARRAY_COUNT(NewProp_underwaterBoxLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxZ_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
				{ "ToolTip", "max Z of volume that is considered underwater" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxZ = { UE4CodeGen_Private::EPropertyClass::Float, "maxZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFishManager, maxZ), METADATA_PARAMS(NewProp_maxZ_MetaData, ARRAY_COUNT(NewProp_maxZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minZ_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
				{ "ToolTip", "min Z of volume that is considered underwater" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minZ = { UE4CodeGen_Private::EPropertyClass::Float, "minZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFishManager, minZ), METADATA_PARAMS(NewProp_minZ_MetaData, ARRAY_COUNT(NewProp_minZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numInFlock_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
				{ "ToolTip", "# of fish in respective flock" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_numInFlock = { UE4CodeGen_Private::EPropertyClass::Array, "numInFlock", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFishManager, numInFlock), METADATA_PARAMS(NewProp_numInFlock_MetaData, ARRAY_COUNT(NewProp_numInFlock_MetaData)) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_numInFlock_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "numInFlock", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_flockTypes_MetaData[] = {
				{ "Category", "Config" },
				{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
				{ "ToolTip", "Type of flocks to spawn" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_flockTypes = { UE4CodeGen_Private::EPropertyClass::Array, "flockTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFishManager, flockTypes), METADATA_PARAMS(NewProp_flockTypes_MetaData, ARRAY_COUNT(NewProp_flockTypes_MetaData)) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_flockTypes_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "flockTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fishSpawn_MetaData[] = {
				{ "Category", "LocationSpawnFish" },
				{ "ModuleRelativePath", "Classes/Fish/FishManager.h" },
				{ "ToolTip", "Spawn Fish location" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_fishSpawn = { UE4CodeGen_Private::EPropertyClass::Struct, "fishSpawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFishManager, fishSpawn), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_fishSpawn_MetaData, ARRAY_COUNT(NewProp_fishSpawn_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_playerType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_attachToPlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_underwaterBoxLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_maxZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_minZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_numInFlock,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_numInFlock_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_flockTypes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_flockTypes_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fishSpawn,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFishManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFishManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(AFishManager, 3899827190);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFishManager(Z_Construct_UClass_AFishManager, &AFishManager::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("AFishManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFishManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
