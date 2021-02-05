// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UNAM_Cpp/Offset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOffset() {}
// Cross Module References
	UNAM_CPP_API UClass* Z_Construct_UClass_AOffset_NoRegister();
	UNAM_CPP_API UClass* Z_Construct_UClass_AOffset();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UNAM_Cpp();
// End Cross Module References
	void AOffset::StaticRegisterNativesAOffset()
	{
	}
	UClass* Z_Construct_UClass_AOffset_NoRegister()
	{
		return AOffset::StaticClass();
	}
	struct Z_Construct_UClass_AOffset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOffset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UNAM_Cpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOffset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Offset.h" },
		{ "ModuleRelativePath", "Offset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOffset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOffset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOffset_Statics::ClassParams = {
		&AOffset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AOffset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOffset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOffset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOffset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOffset, 390823119);
	template<> UNAM_CPP_API UClass* StaticClass<AOffset>()
	{
		return AOffset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOffset(Z_Construct_UClass_AOffset, &AOffset::StaticClass, TEXT("/Script/UNAM_Cpp"), TEXT("AOffset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOffset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
