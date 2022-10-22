// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProgramming/ProceduralWorld.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralWorld() {}
// Cross Module References
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AProceduralWorld_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AProceduralWorld();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProgramming();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AProceduralWorld::execCreateGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateGrid();
		P_NATIVE_END;
	}
	void AProceduralWorld::StaticRegisterNativesAProceduralWorld()
	{
		UClass* Class = AProceduralWorld::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateGrid", &AProceduralWorld::execCreateGrid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProceduralWorld_CreateGrid_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProceduralWorld_CreateGrid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProceduralWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralWorld_CreateGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralWorld, nullptr, "CreateGrid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AProceduralWorld_CreateGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralWorld_CreateGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AProceduralWorld_CreateGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AProceduralWorld_CreateGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProceduralWorld_NoRegister()
	{
		return AProceduralWorld::StaticClass();
	}
	struct Z_Construct_UClass_AProceduralWorld_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawGrid_MetaData[];
#endif
		static void NewProp_bDrawGrid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PillarClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PillarClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProceduralWorld_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AProceduralWorld_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProceduralWorld_CreateGrid, "CreateGrid" }, // 1323409941
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralWorld_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralWorld.h" },
		{ "ModuleRelativePath", "ProceduralWorld.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralWorld_Statics::NewProp_bDrawGrid_MetaData[] = {
		{ "Category", "ProceduralWorld" },
		{ "ModuleRelativePath", "ProceduralWorld.h" },
	};
#endif
	void Z_Construct_UClass_AProceduralWorld_Statics::NewProp_bDrawGrid_SetBit(void* Obj)
	{
		((AProceduralWorld*)Obj)->bDrawGrid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProceduralWorld_Statics::NewProp_bDrawGrid = { "bDrawGrid", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AProceduralWorld), &Z_Construct_UClass_AProceduralWorld_Statics::NewProp_bDrawGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProceduralWorld_Statics::NewProp_bDrawGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralWorld_Statics::NewProp_bDrawGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralWorld_Statics::NewProp_TileMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "World" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProceduralWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralWorld_Statics::NewProp_TileMesh = { "TileMesh", nullptr, (EPropertyFlags)0x004000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralWorld, TileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProceduralWorld_Statics::NewProp_TileMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralWorld_Statics::NewProp_TileMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProceduralWorld_Statics::NewProp_PillarClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "World" },
		{ "ModuleRelativePath", "ProceduralWorld.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProceduralWorld_Statics::NewProp_PillarClass = { "PillarClass", nullptr, (EPropertyFlags)0x0044000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProceduralWorld, PillarClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProceduralWorld_Statics::NewProp_PillarClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralWorld_Statics::NewProp_PillarClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralWorld_Statics::NewProp_bDrawGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralWorld_Statics::NewProp_TileMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralWorld_Statics::NewProp_PillarClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProceduralWorld_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralWorld>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProceduralWorld_Statics::ClassParams = {
		&AProceduralWorld::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProceduralWorld_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralWorld_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProceduralWorld_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralWorld_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProceduralWorld()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProceduralWorld_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProceduralWorld, 4132926728);
	template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<AProceduralWorld>()
	{
		return AProceduralWorld::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProceduralWorld(Z_Construct_UClass_AProceduralWorld, &AProceduralWorld::StaticClass, TEXT("/Script/AdvGamesProgramming"), TEXT("AProceduralWorld"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralWorld);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
