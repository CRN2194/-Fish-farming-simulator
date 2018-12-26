// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sky/TimeManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeManager() {}
// Cross Module References
	OCEANPLUGIN_API UClass* Z_Construct_UClass_ATimeManager_NoRegister();
	OCEANPLUGIN_API UClass* Z_Construct_UClass_ATimeManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OceanPlugin();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_CalculateMoonAngle();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_CalculateMoonPhase();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_CalculateSunAngle();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetDayOfYear();
	OCEANPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTimeDate();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetDayPhase();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetDaysInMonth();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetDaysInYear();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_GetYearPhase();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_IncrementTime();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_InitializeCalendar();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_IsLeapYear();
	OCEANPLUGIN_API UFunction* Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime();
// End Cross Module References
	void ATimeManager::StaticRegisterNativesATimeManager()
	{
		UClass* Class = ATimeManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateMoonAngle", &ATimeManager::execCalculateMoonAngle },
			{ "CalculateMoonPhase", &ATimeManager::execCalculateMoonPhase },
			{ "CalculateSunAngle", &ATimeManager::execCalculateSunAngle },
			{ "GetDayOfYear", &ATimeManager::execGetDayOfYear },
			{ "GetDayPhase", &ATimeManager::execGetDayPhase },
			{ "GetDaysInMonth", &ATimeManager::execGetDaysInMonth },
			{ "GetDaysInYear", &ATimeManager::execGetDaysInYear },
			{ "GetElapsedDayInMinutes", &ATimeManager::execGetElapsedDayInMinutes },
			{ "GetYearPhase", &ATimeManager::execGetYearPhase },
			{ "IncrementTime", &ATimeManager::execIncrementTime },
			{ "InitializeCalendar", &ATimeManager::execInitializeCalendar },
			{ "IsLeapYear", &ATimeManager::execIsLeapYear },
			{ "SetCurrentLocalTime", &ATimeManager::execSetCurrentLocalTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ATimeManager_CalculateMoonAngle()
	{
		struct TimeManager_eventCalculateMoonAngle_Parms
		{
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventCalculateMoonAngle_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "TimeManager" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "@Name: CalculateMoonAngle\n@Description: Calculates the moon angle rotator from the current time.\n\n@return: FRotator - The moon rotation value for the current time." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "CalculateMoonAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(TimeManager_eventCalculateMoonAngle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_CalculateMoonPhase()
	{
		struct TimeManager_eventCalculateMoonPhase_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventCalculateMoonPhase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "TimeManager" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "@Name: CalculateMoonPhase\n@Description: Calculates the moon phase for the current time and date.\n\n@return: FRotator - The moon rotation value for the current time." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "CalculateMoonPhase", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventCalculateMoonPhase_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_CalculateSunAngle()
	{
		struct TimeManager_eventCalculateSunAngle_Parms
		{
			FRotator ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventCalculateSunAngle_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "TimeManager" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "@Name: CalculateSunAngle\n@Description: Calculates the sun angle rotator from the current time.\n\n@return: FRotator - The sun rotation value for the current time." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "CalculateSunAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(TimeManager_eventCalculateSunAngle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_GetDayOfYear()
	{
		struct TimeManager_eventGetDayOfYear_Parms
		{
			FTimeDate time;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetDayOfYear_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_time = { UE4CodeGen_Private::EPropertyClass::Struct, "time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetDayOfYear_Parms, time), Z_Construct_UScriptStruct_FTimeDate, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_time,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "TimeManager" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "Name: GetDayOfYear\nDescription: Gets the number of full days elapsed in the current year for the provided date.\n\n@param: time (TimeDate) - The TimeDate value to calculate from.\n@return: int32 - The number of days elapsed in the current year." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "GetDayOfYear", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventGetDayOfYear_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_GetDayPhase()
	{
		struct TimeManager_eventGetDayPhase_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetDayPhase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "TimeManager" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "Name: GetDayPhase\nDescription: Gets the current day phase in a 0 to 1 range (fractional).\n\n@return: float - The day phase in a 0.0 to 1.0 range." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "GetDayPhase", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(TimeManager_eventGetDayPhase_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_GetDaysInMonth()
	{
		struct TimeManager_eventGetDaysInMonth_Parms
		{
			int32 year;
			int32 month;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetDaysInMonth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_month = { UE4CodeGen_Private::EPropertyClass::Int, "month", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetDaysInMonth_Parms, month), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_year = { UE4CodeGen_Private::EPropertyClass::Int, "year", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetDaysInMonth_Parms, year), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_month,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_year,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "TimeManager" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "Name: DaysInMonth\nDescription: The number of days in the specified month (leap years are taken into account).\n\n@param: month (int32) - The month value.\n@param: year (int32) - The year value.\n@return: int32 - The number of days in the given month for the given year." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "GetDaysInMonth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventGetDaysInMonth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_GetDaysInYear()
	{
		struct TimeManager_eventGetDaysInYear_Parms
		{
			int32 year;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetDaysInYear_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_year = { UE4CodeGen_Private::EPropertyClass::Int, "year", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetDaysInYear_Parms, year), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_year,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "TimeManager" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "Name: DaysInYear\nDescription: Gets the total number of days in a given year (takes leap years into account).\n\n@param: year (int32) - The year value.\n@return: int32 - The total number of days in the given year." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "GetDaysInYear", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventGetDaysInYear_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes()
	{
		struct TimeManager_eventGetElapsedDayInMinutes_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetElapsedDayInMinutes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "TimeManager" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "Name: GetElapsedDayInMinutes\nDescription: Gets the accumulated number of minutes (plus fractional) for the current day.\n\n@return: float - The number of minutes (plus fractional minute - NOT seconds) elapsed in the given day." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "GetElapsedDayInMinutes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventGetElapsedDayInMinutes_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_GetYearPhase()
	{
		struct TimeManager_eventGetYearPhase_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TimeManager_eventGetYearPhase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "TimeManager" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "Name: GetYearPhase\nDescription: Gets the current year phase in a 0 to 1 range (fractional).\n\n@return: float - The year phase in a 0.0 to 1.0 range." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "GetYearPhase", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(TimeManager_eventGetYearPhase_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_IncrementTime()
	{
		struct TimeManager_eventIncrementTime_Parms
		{
			float deltaSeconds;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_deltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "deltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeManager_eventIncrementTime_Parms, deltaSeconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_deltaSeconds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "TimeManager" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "Name: IncrementTime\nDescription: Increments time based on the deltaSeconds * TimeScaleMultiplier\n\n@param: deltaSeconds (float) - The Tick (or accumulated ticks) delta time since the last update" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "IncrementTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventIncrementTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_InitializeCalendar()
	{
		struct TimeManager_eventInitializeCalendar_Parms
		{
			FTimeDate time;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_time = { UE4CodeGen_Private::EPropertyClass::Struct, "time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeManager_eventInitializeCalendar_Parms, time), Z_Construct_UScriptStruct_FTimeDate, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_time,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "TimeManager" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "Name: InitializeCalendar\nDescription: Initializes the calendar with the provided TimeDate, and validates the range of all input values.\n\n@param: time (TimeDate) - The TimeDate value to calculate from." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "InitializeCalendar", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventInitializeCalendar_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_IsLeapYear()
	{
		struct TimeManager_eventIsLeapYear_Parms
		{
			int32 year;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((TimeManager_eventIsLeapYear_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(TimeManager_eventIsLeapYear_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_year = { UE4CodeGen_Private::EPropertyClass::Int, "year", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeManager_eventIsLeapYear_Parms, year), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_year,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "TimeManager" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "Name: IsLeapYear\nDescription: Determines whether the specified year is a leap year.\n\n@param: year (int32) - The year value to check\n@return: bool - Will return true if it is a leap year, otherwise false." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "IsLeapYear", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventIsLeapYear_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime()
	{
		struct TimeManager_eventSetCurrentLocalTime_Parms
		{
			float time;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_time = { UE4CodeGen_Private::EPropertyClass::Float, "time", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TimeManager_eventSetCurrentLocalTime_Parms, time), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_time,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "TimeManager" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "Name: SetCurrentLocalTime\nDescription: Sets the local time from minutes, and runs InitializeCalendar to validate and set variables.\n\n@param: time (float) - The number of minutes (+ frac minutes) to calculate from." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATimeManager, "SetCurrentLocalTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(TimeManager_eventSetCurrentLocalTime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATimeManager_NoRegister()
	{
		return ATimeManager::StaticClass();
	}
	UClass* Z_Construct_UClass_ATimeManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_OceanPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ATimeManager_CalculateMoonAngle, "CalculateMoonAngle" }, // 3039970721
				{ &Z_Construct_UFunction_ATimeManager_CalculateMoonPhase, "CalculateMoonPhase" }, // 1190192137
				{ &Z_Construct_UFunction_ATimeManager_CalculateSunAngle, "CalculateSunAngle" }, // 1029108247
				{ &Z_Construct_UFunction_ATimeManager_GetDayOfYear, "GetDayOfYear" }, // 2196789596
				{ &Z_Construct_UFunction_ATimeManager_GetDayPhase, "GetDayPhase" }, // 1763107936
				{ &Z_Construct_UFunction_ATimeManager_GetDaysInMonth, "GetDaysInMonth" }, // 1271759327
				{ &Z_Construct_UFunction_ATimeManager_GetDaysInYear, "GetDaysInYear" }, // 3747885346
				{ &Z_Construct_UFunction_ATimeManager_GetElapsedDayInMinutes, "GetElapsedDayInMinutes" }, // 285801167
				{ &Z_Construct_UFunction_ATimeManager_GetYearPhase, "GetYearPhase" }, // 2122125930
				{ &Z_Construct_UFunction_ATimeManager_IncrementTime, "IncrementTime" }, // 1993971923
				{ &Z_Construct_UFunction_ATimeManager_InitializeCalendar, "InitializeCalendar" }, // 2053054849
				{ &Z_Construct_UFunction_ATimeManager_IsLeapYear, "IsLeapYear" }, // 2389594201
				{ &Z_Construct_UFunction_ATimeManager_SetCurrentLocalTime, "SetCurrentLocalTime" }, // 186634895
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Sky/TimeManager.h" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "An actor based calendar system for tracking date + time, and Sun/Moon rotation/phase." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartF_MetaData[] = {
				{ "Category", "Lunar Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartF = { UE4CodeGen_Private::EPropertyClass::Float, "PartF", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, PartF), METADATA_PARAMS(NewProp_PartF_MetaData, ARRAY_COUNT(NewProp_PartF_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartM_MetaData[] = {
				{ "Category", "Lunar Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartM = { UE4CodeGen_Private::EPropertyClass::Float, "PartM", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, PartM), METADATA_PARAMS(NewProp_PartM_MetaData, ARRAY_COUNT(NewProp_PartM_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartL_MetaData[] = {
				{ "Category", "Lunar Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PartL = { UE4CodeGen_Private::EPropertyClass::Float, "PartL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, PartL), METADATA_PARAMS(NewProp_PartL_MetaData, ARRAY_COUNT(NewProp_PartL_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EcDistance_MetaData[] = {
				{ "Category", "Lunar Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EcDistance = { UE4CodeGen_Private::EPropertyClass::Float, "EcDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, EcDistance), METADATA_PARAMS(NewProp_EcDistance_MetaData, ARRAY_COUNT(NewProp_EcDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EcLatitude_MetaData[] = {
				{ "Category", "Lunar Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EcLatitude = { UE4CodeGen_Private::EPropertyClass::Float, "EcLatitude", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, EcLatitude), METADATA_PARAMS(NewProp_EcLatitude_MetaData, ARRAY_COUNT(NewProp_EcLatitude_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EcLongitude_MetaData[] = {
				{ "Category", "Lunar Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EcLongitude = { UE4CodeGen_Private::EPropertyClass::Float, "EcLongitude", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, EcLongitude), METADATA_PARAMS(NewProp_EcLongitude_MetaData, ARRAY_COUNT(NewProp_EcLongitude_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LunarElapsedDays_MetaData[] = {
				{ "Category", "Lunar Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LunarElapsedDays = { UE4CodeGen_Private::EPropertyClass::Float, "LunarElapsedDays", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, LunarElapsedDays), METADATA_PARAMS(NewProp_LunarElapsedDays_MetaData, ARRAY_COUNT(NewProp_LunarElapsedDays_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LunarRightAsc_MetaData[] = {
				{ "Category", "Lunar Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The current Right Ascension angle for the moon" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LunarRightAsc = { UE4CodeGen_Private::EPropertyClass::Float, "LunarRightAsc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, LunarRightAsc), METADATA_PARAMS(NewProp_LunarRightAsc_MetaData, ARRAY_COUNT(NewProp_LunarRightAsc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LunarAzimuth_MetaData[] = {
				{ "Category", "Lunar Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The current Azimuth angle of the moon" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LunarAzimuth = { UE4CodeGen_Private::EPropertyClass::Float, "LunarAzimuth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, LunarAzimuth), METADATA_PARAMS(NewProp_LunarAzimuth_MetaData, ARRAY_COUNT(NewProp_LunarAzimuth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LunarDeclination_MetaData[] = {
				{ "Category", "Lunar Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The current Declination angle of the moon" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LunarDeclination = { UE4CodeGen_Private::EPropertyClass::Float, "LunarDeclination", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, LunarDeclination), METADATA_PARAMS(NewProp_LunarDeclination_MetaData, ARRAY_COUNT(NewProp_LunarDeclination_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LunarHRA_MetaData[] = {
				{ "Category", "Lunar Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The current Hour Angle of the moon" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LunarHRA = { UE4CodeGen_Private::EPropertyClass::Float, "LunarHRA", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, LunarHRA), METADATA_PARAMS(NewProp_LunarHRA_MetaData, ARRAY_COUNT(NewProp_LunarHRA_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LunarAltAngle_MetaData[] = {
				{ "Category", "Lunar Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The current Altitude Angle of the moon" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LunarAltAngle = { UE4CodeGen_Private::EPropertyClass::Float, "LunarAltAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, LunarAltAngle), METADATA_PARAMS(NewProp_LunarAltAngle_MetaData, ARRAY_COUNT(NewProp_LunarAltAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SiderealTime_MetaData[] = {
				{ "Category", "Lunar Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The current Sidereal Time value" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SiderealTime = { UE4CodeGen_Private::EPropertyClass::Float, "SiderealTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, SiderealTime), METADATA_PARAMS(NewProp_SiderealTime_MetaData, ARRAY_COUNT(NewProp_SiderealTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolarHRA_MetaData[] = {
				{ "Category", "Sun Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The current Hour Angle of the sun" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolarHRA = { UE4CodeGen_Private::EPropertyClass::Float, "SolarHRA", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, SolarHRA), METADATA_PARAMS(NewProp_SolarHRA_MetaData, ARRAY_COUNT(NewProp_SolarHRA_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolarAzimuth_MetaData[] = {
				{ "Category", "Sun Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The Azimuth angle of the sun" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolarAzimuth = { UE4CodeGen_Private::EPropertyClass::Float, "SolarAzimuth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, SolarAzimuth), METADATA_PARAMS(NewProp_SolarAzimuth_MetaData, ARRAY_COUNT(NewProp_SolarAzimuth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolarDeclination_MetaData[] = {
				{ "Category", "Sun Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The current Declination angle of the sun" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolarDeclination = { UE4CodeGen_Private::EPropertyClass::Float, "SolarDeclination", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, SolarDeclination), METADATA_PARAMS(NewProp_SolarDeclination_MetaData, ARRAY_COUNT(NewProp_SolarDeclination_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolarAltAngle_MetaData[] = {
				{ "Category", "Sun Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The current Altitude Angle of the sun" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolarAltAngle = { UE4CodeGen_Private::EPropertyClass::Float, "SolarAltAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, SolarAltAngle), METADATA_PARAMS(NewProp_SolarAltAngle_MetaData, ARRAY_COUNT(NewProp_SolarAltAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EoT_MetaData[] = {
				{ "Category", "Sun Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "THe current Equation of Time value" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EoT = { UE4CodeGen_Private::EPropertyClass::Float, "EoT", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, EoT), METADATA_PARAMS(NewProp_EoT_MetaData, ARRAY_COUNT(NewProp_EoT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DayOfYear_MetaData[] = {
				{ "Category", "Sun Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DayOfYear = { UE4CodeGen_Private::EPropertyClass::Int, "DayOfYear", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, DayOfYear), METADATA_PARAMS(NewProp_DayOfYear_MetaData, ARRAY_COUNT(NewProp_DayOfYear_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LSTM_MetaData[] = {
				{ "Category", "Sun Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The value of the local Standard Time Meridian (15deg intervals)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LSTM = { UE4CodeGen_Private::EPropertyClass::Int, "LSTM", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, LSTM), METADATA_PARAMS(NewProp_LSTM_MetaData, ARRAY_COUNT(NewProp_LSTM_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeCorrection_MetaData[] = {
				{ "Category", "Sun Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The current Time Correction factor" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeCorrection = { UE4CodeGen_Private::EPropertyClass::Float, "TimeCorrection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, TimeCorrection), METADATA_PARAMS(NewProp_TimeCorrection_MetaData, ARRAY_COUNT(NewProp_TimeCorrection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalClockTime_MetaData[] = {
				{ "Category", "Sun Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The current Local Clock Time value (in minutes)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocalClockTime = { UE4CodeGen_Private::EPropertyClass::Float, "LocalClockTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, LocalClockTime), METADATA_PARAMS(NewProp_LocalClockTime_MetaData, ARRAY_COUNT(NewProp_LocalClockTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolarTime_MetaData[] = {
				{ "Category", "Sun Debug" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The current Local Solar Time (in minutes)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolarTime = { UE4CodeGen_Private::EPropertyClass::Float, "SolarTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, SolarTime), METADATA_PARAMS(NewProp_SolarTime_MetaData, ARRAY_COUNT(NewProp_SolarTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeScaleMultiplier_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The value to multiply the base game time by (1 second real time is multiplied to equal X seconds in game)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeScaleMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "TimeScaleMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATimeManager, TimeScaleMultiplier), METADATA_PARAMS(NewProp_TimeScaleMultiplier_MetaData, ARRAY_COUNT(NewProp_TimeScaleMultiplier_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDaylightSavingsActive_MetaData[] = {
				{ "Category", "TimeManager" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "Determines whether Daylight Savings is active for the current date" },
			};
#endif
			auto NewProp_bDaylightSavingsActive_SetBit = [](void* Obj){ ((ATimeManager*)Obj)->bDaylightSavingsActive = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDaylightSavingsActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bDaylightSavingsActive", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATimeManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDaylightSavingsActive_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDaylightSavingsActive_MetaData, ARRAY_COUNT(NewProp_bDaylightSavingsActive_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDaylightSavings_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "Determines whether Daylight Savings time should be enabled for the local location" },
			};
#endif
			auto NewProp_bAllowDaylightSavings_SetBit = [](void* Obj){ ((ATimeManager*)Obj)->bAllowDaylightSavings = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDaylightSavings = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowDaylightSavings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ATimeManager), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowDaylightSavings_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowDaylightSavings_MetaData, ARRAY_COUNT(NewProp_bAllowDaylightSavings_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetDST_MetaData[] = {
				{ "Category", "TimeManager" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The number of hours (0 or 1) to subtract for the current TimeDate for Daylight Savings Time (if enabled)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OffsetDST = { UE4CodeGen_Private::EPropertyClass::Int, "OffsetDST", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, OffsetDST), METADATA_PARAMS(NewProp_OffsetDST_MetaData, ARRAY_COUNT(NewProp_OffsetDST_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetUTC_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The number of hours offset from UTC for the local location (value in the range of -12 to +12 hours from UTC)" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OffsetUTC = { UE4CodeGen_Private::EPropertyClass::Int, "OffsetUTC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATimeManager, OffsetUTC), METADATA_PARAMS(NewProp_OffsetUTC_MetaData, ARRAY_COUNT(NewProp_OffsetUTC_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The Longitude of the local location (-180 to +180 in degrees)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Longitude = { UE4CodeGen_Private::EPropertyClass::Float, "Longitude", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATimeManager, Longitude), METADATA_PARAMS(NewProp_Longitude_MetaData, ARRAY_COUNT(NewProp_Longitude_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[] = {
				{ "Category", "Default" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "The Latitude of the local location (-90 to +90 in degrees)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Latitude = { UE4CodeGen_Private::EPropertyClass::Float, "Latitude", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ATimeManager, Latitude), METADATA_PARAMS(NewProp_Latitude_MetaData, ARRAY_COUNT(NewProp_Latitude_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLocalTime_MetaData[] = {
				{ "Category", "TimeManager" },
				{ "ModuleRelativePath", "Classes/Sky/TimeManager.h" },
				{ "ToolTip", "Current Local Clock Time (LCT)" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentLocalTime = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentLocalTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ATimeManager, CurrentLocalTime), Z_Construct_UScriptStruct_FTimeDate, METADATA_PARAMS(NewProp_CurrentLocalTime_MetaData, ARRAY_COUNT(NewProp_CurrentLocalTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PartF,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PartM,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PartL,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EcDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EcLatitude,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EcLongitude,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LunarElapsedDays,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LunarRightAsc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LunarAzimuth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LunarDeclination,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LunarHRA,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LunarAltAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SiderealTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SolarHRA,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SolarAzimuth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SolarDeclination,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SolarAltAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EoT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DayOfYear,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LSTM,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeCorrection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalClockTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SolarTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimeScaleMultiplier,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDaylightSavingsActive,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowDaylightSavings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetDST,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetUTC,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Longitude,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Latitude,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentLocalTime,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATimeManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATimeManager::StaticClass,
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
	IMPLEMENT_CLASS(ATimeManager, 1678339084);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATimeManager(Z_Construct_UClass_ATimeManager, &ATimeManager::StaticClass, TEXT("/Script/OceanPlugin"), TEXT("ATimeManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
