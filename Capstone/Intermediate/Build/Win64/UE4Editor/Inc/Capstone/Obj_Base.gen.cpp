// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Capstone/Obj_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObj_Base() {}
// Cross Module References
	CAPSTONE_API UClass* Z_Construct_UClass_AObj_Base_NoRegister();
	CAPSTONE_API UClass* Z_Construct_UClass_AObj_Base();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Capstone();
// End Cross Module References
	DEFINE_FUNCTION(AObj_Base::execOnRep_IsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_IsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObj_Base::execSetActive)
	{
		P_GET_UBOOL(Z_Param_newItemState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_newItemState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AObj_Base::execisActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isActive();
		P_NATIVE_END;
	}
	void AObj_Base::StaticRegisterNativesAObj_Base()
	{
		UClass* Class = AObj_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "isActive", &AObj_Base::execisActive },
			{ "OnRep_IsActive", &AObj_Base::execOnRep_IsActive },
			{ "SetActive", &AObj_Base::execSetActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AObj_Base_isActive_Statics
	{
		struct Obj_Base_eventisActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AObj_Base_isActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Obj_Base_eventisActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObj_Base_isActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Obj_Base_eventisActive_Parms), &Z_Construct_UFunction_AObj_Base_isActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObj_Base_isActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObj_Base_isActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObj_Base_isActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Obj_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObj_Base_isActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObj_Base, nullptr, "isActive", nullptr, nullptr, sizeof(Obj_Base_eventisActive_Parms), Z_Construct_UFunction_AObj_Base_isActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObj_Base_isActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObj_Base_isActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObj_Base_isActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObj_Base_isActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObj_Base_isActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObj_Base_OnRep_IsActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObj_Base_OnRep_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called whenever BActive is updated\n" },
		{ "ModuleRelativePath", "Obj_Base.h" },
		{ "ToolTip", "Called whenever BActive is updated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObj_Base_OnRep_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObj_Base, nullptr, "OnRep_IsActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObj_Base_OnRep_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObj_Base_OnRep_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObj_Base_OnRep_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObj_Base_OnRep_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AObj_Base_SetActive_Statics
	{
		struct Obj_Base_eventSetActive_Parms
		{
			bool newItemState;
		};
		static void NewProp_newItemState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_newItemState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AObj_Base_SetActive_Statics::NewProp_newItemState_SetBit(void* Obj)
	{
		((Obj_Base_eventSetActive_Parms*)Obj)->newItemState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AObj_Base_SetActive_Statics::NewProp_newItemState = { "newItemState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Obj_Base_eventSetActive_Parms), &Z_Construct_UFunction_AObj_Base_SetActive_Statics::NewProp_newItemState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AObj_Base_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AObj_Base_SetActive_Statics::NewProp_newItemState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AObj_Base_SetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Obj_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AObj_Base_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AObj_Base, nullptr, "SetActive", nullptr, nullptr, sizeof(Obj_Base_eventSetActive_Parms), Z_Construct_UFunction_AObj_Base_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AObj_Base_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AObj_Base_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AObj_Base_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AObj_Base_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AObj_Base_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AObj_Base_NoRegister()
	{
		return AObj_Base::StaticClass();
	}
	struct Z_Construct_UClass_AObj_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObj_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Capstone,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AObj_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AObj_Base_isActive, "isActive" }, // 3197393240
		{ &Z_Construct_UFunction_AObj_Base_OnRep_IsActive, "OnRep_IsActive" }, // 3142040050
		{ &Z_Construct_UFunction_AObj_Base_SetActive, "SetActive" }, // 572982516
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObj_Base_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Obj_Base.h" },
		{ "ModuleRelativePath", "Obj_Base.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObj_Base_Statics::NewProp_bActive_MetaData[] = {
		{ "Comment", "//True when pickup can be used\n" },
		{ "ModuleRelativePath", "Obj_Base.h" },
		{ "ToolTip", "True when pickup can be used" },
	};
#endif
	void Z_Construct_UClass_AObj_Base_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((AObj_Base*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AObj_Base_Statics::NewProp_bActive = { "bActive", "OnRep_IsActive", (EPropertyFlags)0x0020080100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AObj_Base), &Z_Construct_UClass_AObj_Base_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AObj_Base_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObj_Base_Statics::NewProp_bActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObj_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObj_Base_Statics::NewProp_bActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObj_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObj_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObj_Base_Statics::ClassParams = {
		&AObj_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AObj_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AObj_Base_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObj_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObj_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObj_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObj_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObj_Base, 1187691319);
	template<> CAPSTONE_API UClass* StaticClass<AObj_Base>()
	{
		return AObj_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObj_Base(Z_Construct_UClass_AObj_Base, &AObj_Base::StaticClass, TEXT("/Script/Capstone"), TEXT("AObj_Base"), false, nullptr, nullptr, nullptr);

	void AObj_Base::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bActive(TEXT("bActive"));

		const bool bIsValid = true
			&& Name_bActive == ClassReps[(int32)ENetFields_Private::bActive].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AObj_Base"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObj_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
