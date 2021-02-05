// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UNAM_Cpp/UNAM_CppGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUNAM_CppGameModeBase() {}
// Cross Module References
	UNAM_CPP_API UClass* Z_Construct_UClass_AUNAM_CppGameModeBase_NoRegister();
	UNAM_CPP_API UClass* Z_Construct_UClass_AUNAM_CppGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UNAM_Cpp();
// End Cross Module References
	void AUNAM_CppGameModeBase::StaticRegisterNativesAUNAM_CppGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUNAM_CppGameModeBase_NoRegister()
	{
		return AUNAM_CppGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUNAM_CppGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUNAM_CppGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UNAM_Cpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUNAM_CppGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UNAM_CppGameModeBase.h" },
		{ "ModuleRelativePath", "UNAM_CppGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUNAM_CppGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUNAM_CppGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUNAM_CppGameModeBase_Statics::ClassParams = {
		&AUNAM_CppGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUNAM_CppGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUNAM_CppGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUNAM_CppGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUNAM_CppGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUNAM_CppGameModeBase, 1778191113);
	template<> UNAM_CPP_API UClass* StaticClass<AUNAM_CppGameModeBase>()
	{
		return AUNAM_CppGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUNAM_CppGameModeBase(Z_Construct_UClass_AUNAM_CppGameModeBase, &AUNAM_CppGameModeBase::StaticClass, TEXT("/Script/UNAM_Cpp"), TEXT("AUNAM_CppGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUNAM_CppGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
