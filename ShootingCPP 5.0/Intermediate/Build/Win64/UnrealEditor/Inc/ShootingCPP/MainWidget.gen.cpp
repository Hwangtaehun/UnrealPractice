// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingCPP/Public/MainWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainWidget() {}
// Cross Module References
	SHOOTINGCPP_API UClass* Z_Construct_UClass_UMainWidget_NoRegister();
	SHOOTINGCPP_API UClass* Z_Construct_UClass_UMainWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ShootingCPP();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UMainWidget::StaticRegisterNativesUMainWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainWidget);
	UClass* Z_Construct_UClass_UMainWidget_NoRegister()
	{
		return UMainWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scoreText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_scoreText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scoreData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_scoreData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingCPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MainWidget.h" },
		{ "ModuleRelativePath", "Public/MainWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreText = { "scoreText", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainWidget, scoreText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreData_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreData = { "scoreData", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainWidget, scoreData), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainWidget_Statics::NewProp_scoreData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainWidget_Statics::ClassParams = {
		&UMainWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMainWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainWidget()
	{
		if (!Z_Registration_Info_UClass_UMainWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainWidget.OuterSingleton, Z_Construct_UClass_UMainWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainWidget.OuterSingleton;
	}
	template<> SHOOTINGCPP_API UClass* StaticClass<UMainWidget>()
	{
		return UMainWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainWidget);
	struct Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_MainWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_MainWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainWidget, UMainWidget::StaticClass, TEXT("UMainWidget"), &Z_Registration_Info_UClass_UMainWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainWidget), 1517094171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_MainWidget_h_495122683(TEXT("/Script/ShootingCPP"),
		Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_MainWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShootingCPP_5_0_Source_ShootingCPP_Public_MainWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
