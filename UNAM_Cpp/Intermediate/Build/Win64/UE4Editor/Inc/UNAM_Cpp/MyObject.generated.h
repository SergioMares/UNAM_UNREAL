// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNAM_CPP_MyObject_generated_h
#error "MyObject.generated.h already included, missing '#pragma once' in MyObject.h"
#endif
#define UNAM_CPP_MyObject_generated_h

#define UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_SPARSE_DATA
#define UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyFunction);


#define UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyFunction);


#define UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyObject(); \
	friend struct Z_Construct_UClass_UMyObject_Statics; \
public: \
	DECLARE_CLASS(UMyObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UNAM_Cpp"), NO_API) \
	DECLARE_SERIALIZER(UMyObject)


#define UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyObject(); \
	friend struct Z_Construct_UClass_UMyObject_Statics; \
public: \
	DECLARE_CLASS(UMyObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UNAM_Cpp"), NO_API) \
	DECLARE_SERIALIZER(UMyObject)


#define UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyObject(UMyObject&&); \
	NO_API UMyObject(const UMyObject&); \
public:


#define UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyObject(UMyObject&&); \
	NO_API UMyObject(const UMyObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyObject)


#define UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_PRIVATE_PROPERTY_OFFSET
#define UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_12_PROLOG
#define UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_PRIVATE_PROPERTY_OFFSET \
	UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_SPARSE_DATA \
	UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_RPC_WRAPPERS \
	UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_INCLASS \
	UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_PRIVATE_PROPERTY_OFFSET \
	UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_SPARSE_DATA \
	UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_INCLASS_NO_PURE_DECLS \
	UNAM_Cpp_Source_UNAM_Cpp_MyObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNAM_CPP_API UClass* StaticClass<class UMyObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UNAM_Cpp_Source_UNAM_Cpp_MyObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
