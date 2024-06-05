// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BGS_Skate_Test/BGS_Skate_TestCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBGS_Skate_TestCharacter() {}
// Cross Module References
	BGS_SKATE_TEST_API UClass* Z_Construct_UClass_ABGS_Skate_TestCharacter();
	BGS_SKATE_TEST_API UClass* Z_Construct_UClass_ABGS_Skate_TestCharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BGS_Skate_Test();
// End Cross Module References
	DEFINE_FUNCTION(ABGS_Skate_TestCharacter::execAdjustSkateToFloor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustSkateToFloor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABGS_Skate_TestCharacter::execGerInputRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GerInputRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABGS_Skate_TestCharacter::execGerInputForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GerInputForward();
		P_NATIVE_END;
	}
	void ABGS_Skate_TestCharacter::StaticRegisterNativesABGS_Skate_TestCharacter()
	{
		UClass* Class = ABGS_Skate_TestCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustSkateToFloor", &ABGS_Skate_TestCharacter::execAdjustSkateToFloor },
			{ "GerInputForward", &ABGS_Skate_TestCharacter::execGerInputForward },
			{ "GerInputRight", &ABGS_Skate_TestCharacter::execGerInputRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABGS_Skate_TestCharacter_AdjustSkateToFloor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABGS_Skate_TestCharacter_AdjustSkateToFloor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BGS_Skate_TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABGS_Skate_TestCharacter_AdjustSkateToFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABGS_Skate_TestCharacter, nullptr, "AdjustSkateToFloor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABGS_Skate_TestCharacter_AdjustSkateToFloor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABGS_Skate_TestCharacter_AdjustSkateToFloor_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABGS_Skate_TestCharacter_AdjustSkateToFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABGS_Skate_TestCharacter_AdjustSkateToFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputForward_Statics
	{
		struct BGS_Skate_TestCharacter_eventGerInputForward_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputForward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BGS_Skate_TestCharacter_eventGerInputForward_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputForward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BGS_Skate_TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABGS_Skate_TestCharacter, nullptr, "GerInputForward", nullptr, nullptr, Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputForward_Statics::BGS_Skate_TestCharacter_eventGerInputForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputForward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputForward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputForward_Statics::BGS_Skate_TestCharacter_eventGerInputForward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputRight_Statics
	{
		struct BGS_Skate_TestCharacter_eventGerInputRight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BGS_Skate_TestCharacter_eventGerInputRight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputRight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BGS_Skate_TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABGS_Skate_TestCharacter, nullptr, "GerInputRight", nullptr, nullptr, Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputRight_Statics::BGS_Skate_TestCharacter_eventGerInputRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputRight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputRight_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputRight_Statics::BGS_Skate_TestCharacter_eventGerInputRight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABGS_Skate_TestCharacter);
	UClass* Z_Construct_UClass_ABGS_Skate_TestCharacter_NoRegister()
	{
		return ABGS_Skate_TestCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lastDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_lastDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skateSM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skateSM;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BGS_Skate_Test,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABGS_Skate_TestCharacter_AdjustSkateToFloor, "AdjustSkateToFloor" }, // 1720250174
		{ &Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputForward, "GerInputForward" }, // 2482088517
		{ &Z_Construct_UFunction_ABGS_Skate_TestCharacter_GerInputRight, "GerInputRight" }, // 243614828
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BGS_Skate_TestCharacter.h" },
		{ "ModuleRelativePath", "BGS_Skate_TestCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BGS_Skate_TestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGS_Skate_TestCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BGS_Skate_TestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGS_Skate_TestCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_FollowCamera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "BGS_Skate_TestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGS_Skate_TestCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_DefaultMappingContext_MetaData), Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_DefaultMappingContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "BGS_Skate_TestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGS_Skate_TestCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "BGS_Skate_TestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGS_Skate_TestCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "BGS_Skate_TestCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGS_Skate_TestCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_lastDirection_MetaData[] = {
		{ "Category", "BGS_Skate_TestCharacter" },
		{ "ModuleRelativePath", "BGS_Skate_TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_lastDirection = { "lastDirection", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGS_Skate_TestCharacter, lastDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_lastDirection_MetaData), Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_lastDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_skateSM_MetaData[] = {
		{ "Category", "BGS_Skate_TestCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BGS_Skate_TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_skateSM = { "skateSM", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABGS_Skate_TestCharacter, skateSM), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_skateSM_MetaData), Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_skateSM_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_lastDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::NewProp_skateSM,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABGS_Skate_TestCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::ClassParams = {
		&ABGS_Skate_TestCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABGS_Skate_TestCharacter()
	{
		if (!Z_Registration_Info_UClass_ABGS_Skate_TestCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABGS_Skate_TestCharacter.OuterSingleton, Z_Construct_UClass_ABGS_Skate_TestCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABGS_Skate_TestCharacter.OuterSingleton;
	}
	template<> BGS_SKATE_TEST_API UClass* StaticClass<ABGS_Skate_TestCharacter>()
	{
		return ABGS_Skate_TestCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABGS_Skate_TestCharacter);
	ABGS_Skate_TestCharacter::~ABGS_Skate_TestCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_Triket_Documents_GitHub_BGS_Skate_Test_BGS_Skate_Test_Source_BGS_Skate_Test_BGS_Skate_TestCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Triket_Documents_GitHub_BGS_Skate_Test_BGS_Skate_Test_Source_BGS_Skate_Test_BGS_Skate_TestCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABGS_Skate_TestCharacter, ABGS_Skate_TestCharacter::StaticClass, TEXT("ABGS_Skate_TestCharacter"), &Z_Registration_Info_UClass_ABGS_Skate_TestCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABGS_Skate_TestCharacter), 3327039784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Triket_Documents_GitHub_BGS_Skate_Test_BGS_Skate_Test_Source_BGS_Skate_Test_BGS_Skate_TestCharacter_h_3744404194(TEXT("/Script/BGS_Skate_Test"),
		Z_CompiledInDeferFile_FID_Users_Triket_Documents_GitHub_BGS_Skate_Test_BGS_Skate_Test_Source_BGS_Skate_Test_BGS_Skate_TestCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Triket_Documents_GitHub_BGS_Skate_Test_BGS_Skate_Test_Source_BGS_Skate_Test_BGS_Skate_TestCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
