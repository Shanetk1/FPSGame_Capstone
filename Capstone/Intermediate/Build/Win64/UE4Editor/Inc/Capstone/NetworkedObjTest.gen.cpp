// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Capstone/NetworkedObjTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworkedObjTest() {}
// Cross Module References
	CAPSTONE_API UClass* Z_Construct_UClass_ANetworkedObjTest_NoRegister();
	CAPSTONE_API UClass* Z_Construct_UClass_ANetworkedObjTest();
	CAPSTONE_API UClass* Z_Construct_UClass_AObj_Base();
	UPackage* Z_Construct_UPackage__Script_Capstone();
// End Cross Module References
	void ANetworkedObjTest::StaticRegisterNativesANetworkedObjTest()
	{
	}
	UClass* Z_Construct_UClass_ANetworkedObjTest_NoRegister()
	{
		return ANetworkedObjTest::StaticClass();
	}
	struct Z_Construct_UClass_ANetworkedObjTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetworkedObjTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObj_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Capstone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetworkedObjTest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "NetworkedObjTest.h" },
		{ "ModuleRelativePath", "NetworkedObjTest.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetworkedObjTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetworkedObjTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANetworkedObjTest_Statics::ClassParams = {
		&ANetworkedObjTest::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ANetworkedObjTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANetworkedObjTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANetworkedObjTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANetworkedObjTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANetworkedObjTest, 1567114579);
	template<> CAPSTONE_API UClass* StaticClass<ANetworkedObjTest>()
	{
		return ANetworkedObjTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANetworkedObjTest(Z_Construct_UClass_ANetworkedObjTest, &ANetworkedObjTest::StaticClass, TEXT("/Script/Capstone"), TEXT("ANetworkedObjTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetworkedObjTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
