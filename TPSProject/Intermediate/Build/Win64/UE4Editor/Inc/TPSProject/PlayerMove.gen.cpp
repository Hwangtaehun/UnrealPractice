// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSProject/public/PlayerMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMove() {}
// Cross Module References
	TPSPROJECT_API UClass* Z_Construct_UClass_UPlayerMove_NoRegister();
	TPSPROJECT_API UClass* Z_Construct_UClass_UPlayerMove();
	TPSPROJECT_API UClass* Z_Construct_UClass_UPlayerBaseComponent();
	UPackage* Z_Construct_UPackage__Script_TPSProject();
// End Cross Module References
	void UPlayerMove::StaticRegisterNativesUPlayerMove()
	{
	}
	UClass* Z_Construct_UClass_UPlayerMove_NoRegister()
	{
		return UPlayerMove::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerMove_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_walkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_walkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_runSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_runSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerMove_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TPSProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMove_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayerMove.h" },
		{ "ModuleRelativePath", "public/PlayerMove.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMove_Statics::NewProp_walkSpeed_MetaData[] = {
		{ "Category", "PlayerSetting" },
		{ "ModuleRelativePath", "public/PlayerMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMove_Statics::NewProp_walkSpeed = { "walkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMove, walkSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerMove_Statics::NewProp_walkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMove_Statics::NewProp_walkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMove_Statics::NewProp_runSpeed_MetaData[] = {
		{ "Category", "PlayerSetting" },
		{ "ModuleRelativePath", "public/PlayerMove.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerMove_Statics::NewProp_runSpeed = { "runSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerMove, runSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerMove_Statics::NewProp_runSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMove_Statics::NewProp_runSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMove_Statics::NewProp_walkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMove_Statics::NewProp_runSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerMove_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMove>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMove_Statics::ClassParams = {
		&UPlayerMove::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerMove_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMove_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerMove_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMove_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerMove()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerMove_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerMove, 1249626475);
	template<> TPSPROJECT_API UClass* StaticClass<UPlayerMove>()
	{
		return UPlayerMove::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerMove(Z_Construct_UClass_UPlayerMove, &UPlayerMove::StaticClass, TEXT("/Script/TPSProject"), TEXT("UPlayerMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
