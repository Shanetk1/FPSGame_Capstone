// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAPSTONE_MyAI_generated_h
#error "MyAI.generated.h already included, missing '#pragma once' in MyAI.h"
#endif
#define CAPSTONE_MyAI_generated_h

#define Capstone_Source_Capstone_MyAI_h_14_SPARSE_DATA
#define Capstone_Source_Capstone_MyAI_h_14_RPC_WRAPPERS
#define Capstone_Source_Capstone_MyAI_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Capstone_Source_Capstone_MyAI_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyAI(); \
	friend struct Z_Construct_UClass_AMyAI_Statics; \
public: \
	DECLARE_CLASS(AMyAI, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Capstone"), NO_API) \
	DECLARE_SERIALIZER(AMyAI)


#define Capstone_Source_Capstone_MyAI_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMyAI(); \
	friend struct Z_Construct_UClass_AMyAI_Statics; \
public: \
	DECLARE_CLASS(AMyAI, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Capstone"), NO_API) \
	DECLARE_SERIALIZER(AMyAI)


#define Capstone_Source_Capstone_MyAI_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyAI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyAI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyAI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyAI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyAI(AMyAI&&); \
	NO_API AMyAI(const AMyAI&); \
public:


#define Capstone_Source_Capstone_MyAI_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyAI(AMyAI&&); \
	NO_API AMyAI(const AMyAI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyAI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyAI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyAI)


#define Capstone_Source_Capstone_MyAI_h_14_PRIVATE_PROPERTY_OFFSET
#define Capstone_Source_Capstone_MyAI_h_11_PROLOG
#define Capstone_Source_Capstone_MyAI_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Capstone_Source_Capstone_MyAI_h_14_PRIVATE_PROPERTY_OFFSET \
	Capstone_Source_Capstone_MyAI_h_14_SPARSE_DATA \
	Capstone_Source_Capstone_MyAI_h_14_RPC_WRAPPERS \
	Capstone_Source_Capstone_MyAI_h_14_INCLASS \
	Capstone_Source_Capstone_MyAI_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Capstone_Source_Capstone_MyAI_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Capstone_Source_Capstone_MyAI_h_14_PRIVATE_PROPERTY_OFFSET \
	Capstone_Source_Capstone_MyAI_h_14_SPARSE_DATA \
	Capstone_Source_Capstone_MyAI_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Capstone_Source_Capstone_MyAI_h_14_INCLASS_NO_PURE_DECLS \
	Capstone_Source_Capstone_MyAI_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAPSTONE_API UClass* StaticClass<class AMyAI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Capstone_Source_Capstone_MyAI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
