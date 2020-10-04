// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Capstone/AITest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITest() {}
// Cross Module References
	CAPSTONE_API UClass* Z_Construct_UClass_AAITest_NoRegister();
	CAPSTONE_API UClass* Z_Construct_UClass_AAITest();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Capstone();
// End Cross Module References
	void AAITest::StaticRegisterNativesAAITest()
	{
	}
	UClass* Z_Construct_UClass_AAITest_NoRegister()
	{
		return AAITest::StaticClass();
	}
	struct Z_Construct_UClass_AAITest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAITest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Capstone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAITest_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AITest.h" },
		{ "ModuleRelativePath", "AITest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAITest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAITest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAITest_Statics::ClassParams = {
		&AAITest::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAITest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAITest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAITest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAITest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAITest, 606132782);
	template<> CAPSTONE_API UClass* StaticClass<AAITest>()
	{
		return AAITest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAITest(Z_Construct_UClass_AAITest, &AAITest::StaticClass, TEXT("/Script/Capstone"), TEXT("AAITest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAITest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
