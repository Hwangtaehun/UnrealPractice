// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCPP/Public/AccessTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccessTest() {}
// Cross Module References
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AAccessTest_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_AAccessTest();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShootingCPP();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_ACodingTestActor_NoRegister();
// End Cross Module References
	void AAccessTest::StaticRegisterNativesAAccessTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAccessTest);
	UClass* Z_Construct_UClass_AAccessTest_NoRegister()
	{
		return AAccessTest::StaticClass();
	}
	struct Z_Construct_UClass_AAccessTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_testPointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_testPointer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAccessTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAccessTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AccessTest.h" },
		{ "ModuleRelativePath", "Public/AccessTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAccessTest_Statics::NewProp_testPointer_MetaData[] = {
		{ "Category", "AccessTest" },
		{ "ModuleRelativePath", "Public/AccessTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAccessTest_Statics::NewProp_testPointer = { "testPointer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAccessTest, testPointer), Z_Construct_UClass_ACodingTestActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAccessTest_Statics::NewProp_testPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAccessTest_Statics::NewProp_testPointer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAccessTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAccessTest_Statics::NewProp_testPointer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAccessTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAccessTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAccessTest_Statics::ClassParams = {
		&AAccessTest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAccessTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAccessTest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAccessTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAccessTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAccessTest()
	{
		if (!Z_Registration_Info_UClass_AAccessTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAccessTest.OuterSingleton, Z_Construct_UClass_AAccessTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAccessTest.OuterSingleton;
	}
	template<> SHOOTINGCPP_API UClass* StaticClass<AAccessTest>()
	{
		return AAccessTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAccessTest);
	struct Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_AccessTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_AccessTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAccessTest, AAccessTest::StaticClass, TEXT("AAccessTest"), &Z_Registration_Info_UClass_AAccessTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAccessTest), 2383177042U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_AccessTest_h_1746034248(TEXT("/Script/ShootingCPP"),
		Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_AccessTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_AccessTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
