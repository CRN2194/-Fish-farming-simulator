// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FishSpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFishSpawn() {}
// Cross Module References
	OCEANPROJECT_API UClass* Z_Construct_UClass_AFishSpawn_NoRegister();
	OCEANPROJECT_API UClass* Z_Construct_UClass_AFishSpawn();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OceanProject();
// End Cross Module References
	void AFishSpawn::StaticRegisterNativesAFishSpawn()
	{
	}
	UClass* Z_Construct_UClass_AFishSpawn_NoRegister()
	{
		return AFishSpawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AFishSpawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_OceanProject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "FishSpawn.h" },
				{ "ModuleRelativePath", "Public/FishSpawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zValue_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "Public/FishSpawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_zValue = { UE4CodeGen_Private::EPropertyClass::Float, "zValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AFishSpawn, zValue), METADATA_PARAMS(NewProp_zValue_MetaData, ARRAY_COUNT(NewProp_zValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_yValue_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "Public/FishSpawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_yValue = { UE4CodeGen_Private::EPropertyClass::Float, "yValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AFishSpawn, yValue), METADATA_PARAMS(NewProp_yValue_MetaData, ARRAY_COUNT(NewProp_yValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_xValue_MetaData[] = {
				{ "Category", "Movement" },
				{ "ModuleRelativePath", "Public/FishSpawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_xValue = { UE4CodeGen_Private::EPropertyClass::Float, "xValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AFishSpawn, xValue), METADATA_PARAMS(NewProp_xValue_MetaData, ARRAY_COUNT(NewProp_xValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_zValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_yValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_xValue,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFishSpawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFishSpawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AFishSpawn, 2762321786);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFishSpawn(Z_Construct_UClass_AFishSpawn, &AFishSpawn::StaticClass, TEXT("/Script/OceanProject"), TEXT("AFishSpawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFishSpawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
