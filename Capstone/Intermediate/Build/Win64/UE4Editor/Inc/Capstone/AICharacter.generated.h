// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CAPSTONE_AICharacter_generated_h
#error "AICharacter.generated.h already included, missing '#pragma once' in AICharacter.h"
#endif
#define CAPSTONE_AICharacter_generated_h

#define Capstone_Source_Capstone_AICharacter_h_12_SPARSE_DATA
#define Capstone_Source_Capstone_AICharacter_h_12_RPC_WRAPPERS
#define Capstone_Source_Capstone_AICharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Capstone_Source_Capstone_AICharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAICharacter(); \
	friend struct Z_Construct_UClass_AAICharacter_Statics; \
public: \
	DECLARE_CLASS(AAICharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Capstone"), NO_API) \
	DECLARE_SERIALIZER(AAICharacter)


#define Capstone_Source_Capstone_AICharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAICharacter(); \
	friend struct Z_Construct_UClass_AAICharacter_Statics; \
public: \
	DECLARE_CLASS(AAICharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Capstone"), NO_API) \
	DECLARE_SERIALIZER(AAICharacter)


#define Capstone_Source_Capstone_AICharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAICharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAICharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAICharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAICharacter(AAICharacter&&); \
	NO_API AAICharacter(const AAICharacter&); \
public:


#define Capstone_Source_Capstone_AICharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAICharacter(AAICharacter&&); \
	NO_API AAICharacter(const AAICharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAICharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAICharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAICharacter)


#define Capstone_Source_Capstone_AICharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define Capstone_Source_Capstone_AICharacter_h_9_PROLOG
#define Capstone_Source_Capstone_AICharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Capstone_Source_Capstone_AICharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Capstone_Source_Capstone_AICharacter_h_12_SPARSE_DATA \
	Capstone_Source_Capstone_AICharacter_h_12_RPC_WRAPPERS \
	Capstone_Source_Capstone_AICharacter_h_12_INCLASS \
	Capstone_Source_Capstone_AICharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Capstone_Source_Capstone_AICharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Capstone_Source_Capstone_AICharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Capstone_Source_Capstone_AICharacter_h_12_SPARSE_DATA \
	Capstone_Source_Capstone_AICharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Capstone_Source_Capstone_AICharacter_h_12_INCLASS_NO_PURE_DECLS \
	Capstone_Source_Capstone_AICharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CAPSTONE_API UClass* StaticClass<class AAICharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Capstone_Source_Capstone_AICharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
