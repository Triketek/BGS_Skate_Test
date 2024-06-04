// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BGS_Skate_Test/BGS_Skate_TestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBGS_Skate_TestGameMode() {}
// Cross Module References
	BGS_SKATE_TEST_API UClass* Z_Construct_UClass_ABGS_Skate_TestGameMode();
	BGS_SKATE_TEST_API UClass* Z_Construct_UClass_ABGS_Skate_TestGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BGS_Skate_Test();
// End Cross Module References
	void ABGS_Skate_TestGameMode::StaticRegisterNativesABGS_Skate_TestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABGS_Skate_TestGameMode);
	UClass* Z_Construct_UClass_ABGS_Skate_TestGameMode_NoRegister()
	{
		return ABGS_Skate_TestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABGS_Skate_TestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABGS_Skate_TestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BGS_Skate_Test,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABGS_Skate_TestGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABGS_Skate_TestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BGS_Skate_TestGameMode.h" },
		{ "ModuleRelativePath", "BGS_Skate_TestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABGS_Skate_TestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABGS_Skate_TestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABGS_Skate_TestGameMode_Statics::ClassParams = {
		&ABGS_Skate_TestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABGS_Skate_TestGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABGS_Skate_TestGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABGS_Skate_TestGameMode()
	{
		if (!Z_Registration_Info_UClass_ABGS_Skate_TestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABGS_Skate_TestGameMode.OuterSingleton, Z_Construct_UClass_ABGS_Skate_TestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABGS_Skate_TestGameMode.OuterSingleton;
	}
	template<> BGS_SKATE_TEST_API UClass* StaticClass<ABGS_Skate_TestGameMode>()
	{
		return ABGS_Skate_TestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABGS_Skate_TestGameMode);
	ABGS_Skate_TestGameMode::~ABGS_Skate_TestGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Triket_Documents_GitHub_BGS_Skate_Test_BGS_Skate_Test_Source_BGS_Skate_Test_BGS_Skate_TestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Triket_Documents_GitHub_BGS_Skate_Test_BGS_Skate_Test_Source_BGS_Skate_Test_BGS_Skate_TestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABGS_Skate_TestGameMode, ABGS_Skate_TestGameMode::StaticClass, TEXT("ABGS_Skate_TestGameMode"), &Z_Registration_Info_UClass_ABGS_Skate_TestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABGS_Skate_TestGameMode), 3727879628U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Triket_Documents_GitHub_BGS_Skate_Test_BGS_Skate_Test_Source_BGS_Skate_Test_BGS_Skate_TestGameMode_h_1753418089(TEXT("/Script/BGS_Skate_Test"),
		Z_CompiledInDeferFile_FID_Users_Triket_Documents_GitHub_BGS_Skate_Test_BGS_Skate_Test_Source_BGS_Skate_Test_BGS_Skate_TestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Triket_Documents_GitHub_BGS_Skate_Test_BGS_Skate_Test_Source_BGS_Skate_Test_BGS_Skate_TestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
