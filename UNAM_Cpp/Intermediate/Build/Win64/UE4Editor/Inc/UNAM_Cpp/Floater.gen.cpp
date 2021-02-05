// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UNAM_Cpp/Floater.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloater() {}
// Cross Module References
	UNAM_CPP_API UClass* Z_Construct_UClass_AFloater_NoRegister();
	UNAM_CPP_API UClass* Z_Construct_UClass_AFloater();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UNAM_Cpp();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void AFloater::StaticRegisterNativesAFloater()
	{
	}
	UClass* Z_Construct_UClass_AFloater_NoRegister()
	{
		return AFloater::StaticClass();
	}
	struct Z_Construct_UClass_AFloater_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacedLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlacedLocations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Force;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Torque_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Torque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitializeFloaterLocations_MetaData[];
#endif
		static void NewProp_bInitializeFloaterLocations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitializeFloaterLocations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocalOffset_MetaData[];
#endif
		static void NewProp_bLocalOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocalOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWorldOffset_MetaData[];
#endif
		static void NewProp_bWorldOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocalRotation_MetaData[];
#endif
		static void NewProp_bLocalRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocalRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWorldRotation_MetaData[];
#endif
		static void NewProp_bWorldRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorldRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddForce_MetaData[];
#endif
		static void NewProp_bAddForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddTorque_MetaData[];
#endif
		static void NewProp_bAddTorque_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddTorque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRandomNumbers_MetaData[];
#endif
		static void NewProp_bUseRandomNumbers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRandomNumbers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSinFunction_MetaData[];
#endif
		static void NewProp_bUseSinFunction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSinFunction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloater_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UNAM_Cpp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Floater.h" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "ActorMeshComponents" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_InitialLocation_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "Comment", "//Location used by the SerActor Location() when BeginPlay() is called\n" },
		{ "ModuleRelativePath", "Floater.h" },
		{ "ToolTip", "Location used by the SerActor Location() when BeginPlay() is called" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_InitialLocation = { "InitialLocation", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, InitialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_InitialLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_InitialLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_PlacedLocations_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "Comment", "//Location od the Actor when dragged in from the editor\n" },
		{ "ModuleRelativePath", "Floater.h" },
		{ "ToolTip", "Location od the Actor when dragged in from the editor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_PlacedLocations = { "PlacedLocations", nullptr, (EPropertyFlags)0x0010000000020805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, PlacedLocations), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_PlacedLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_PlacedLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_Force_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_Force_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_Torque_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_Torque = { "Torque", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, Torque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_Torque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_Torque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "Comment", "//defines if we wanna set the location given in the instance\n" },
		{ "ModuleRelativePath", "Floater.h" },
		{ "ToolTip", "defines if we wanna set the location given in the instance" },
	};
#endif
	void Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations_SetBit(void* Obj)
	{
		((AFloater*)Obj)->bInitializeFloaterLocations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations = { "bInitializeFloaterLocations", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloater), &Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_bLocalOffset_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	void Z_Construct_UClass_AFloater_Statics::NewProp_bLocalOffset_SetBit(void* Obj)
	{
		((AFloater*)Obj)->bLocalOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_bLocalOffset = { "bLocalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloater), &Z_Construct_UClass_AFloater_Statics::NewProp_bLocalOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_bLocalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_bLocalOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_bWorldOffset_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	void Z_Construct_UClass_AFloater_Statics::NewProp_bWorldOffset_SetBit(void* Obj)
	{
		((AFloater*)Obj)->bWorldOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_bWorldOffset = { "bWorldOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloater), &Z_Construct_UClass_AFloater_Statics::NewProp_bWorldOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_bWorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_bWorldOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_bLocalRotation_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	void Z_Construct_UClass_AFloater_Statics::NewProp_bLocalRotation_SetBit(void* Obj)
	{
		((AFloater*)Obj)->bLocalRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_bLocalRotation = { "bLocalRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloater), &Z_Construct_UClass_AFloater_Statics::NewProp_bLocalRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_bLocalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_bLocalRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_bWorldRotation_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	void Z_Construct_UClass_AFloater_Statics::NewProp_bWorldRotation_SetBit(void* Obj)
	{
		((AFloater*)Obj)->bWorldRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_bWorldRotation = { "bWorldRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloater), &Z_Construct_UClass_AFloater_Statics::NewProp_bWorldRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_bWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_bWorldRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_bAddForce_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	void Z_Construct_UClass_AFloater_Statics::NewProp_bAddForce_SetBit(void* Obj)
	{
		((AFloater*)Obj)->bAddForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_bAddForce = { "bAddForce", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloater), &Z_Construct_UClass_AFloater_Statics::NewProp_bAddForce_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_bAddForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_bAddForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_bAddTorque_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	void Z_Construct_UClass_AFloater_Statics::NewProp_bAddTorque_SetBit(void* Obj)
	{
		((AFloater*)Obj)->bAddTorque = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_bAddTorque = { "bAddTorque", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloater), &Z_Construct_UClass_AFloater_Statics::NewProp_bAddTorque_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_bAddTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_bAddTorque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_bUseRandomNumbers_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	void Z_Construct_UClass_AFloater_Statics::NewProp_bUseRandomNumbers_SetBit(void* Obj)
	{
		((AFloater*)Obj)->bUseRandomNumbers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_bUseRandomNumbers = { "bUseRandomNumbers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloater), &Z_Construct_UClass_AFloater_Statics::NewProp_bUseRandomNumbers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_bUseRandomNumbers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_bUseRandomNumbers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_bUseSinFunction_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "Floater.h" },
	};
#endif
	void Z_Construct_UClass_AFloater_Statics::NewProp_bUseSinFunction_SetBit(void* Obj)
	{
		((AFloater*)Obj)->bUseSinFunction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_bUseSinFunction = { "bUseSinFunction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloater), &Z_Construct_UClass_AFloater_Statics::NewProp_bUseSinFunction_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_bUseSinFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_bUseSinFunction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloater_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_InitialLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_PlacedLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_Force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_Torque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_bLocalOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_bWorldOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_bLocalRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_bWorldRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_bAddForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_bAddTorque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_bUseRandomNumbers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_bUseSinFunction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloater_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloater>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloater_Statics::ClassParams = {
		&AFloater::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloater_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloater()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloater_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloater, 375520606);
	template<> UNAM_CPP_API UClass* StaticClass<AFloater>()
	{
		return AFloater::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloater(Z_Construct_UClass_AFloater, &AFloater::StaticClass, TEXT("/Script/UNAM_Cpp"), TEXT("AFloater"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloater);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
