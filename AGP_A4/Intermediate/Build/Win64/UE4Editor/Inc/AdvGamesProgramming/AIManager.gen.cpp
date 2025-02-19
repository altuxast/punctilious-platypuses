// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProgramming/AIManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIManager() {}
// Cross Module References
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AAIManager_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AAIManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProgramming();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_ANavigationNode_NoRegister();
	ADVGAMESPROGRAMMING_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AAIManager::StaticRegisterNativesAAIManager()
	{
	}
	UClass* Z_Construct_UClass_AAIManager_NoRegister()
	{
		return AAIManager::StaticClass();
	}
	struct Z_Construct_UClass_AAIManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumAI_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumAI;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllAgents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllAgents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllAgents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AgentToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AllowedAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProgramming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AIManager.h" },
		{ "ModuleRelativePath", "AIManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIManager_Statics::NewProp_NumAI_MetaData[] = {
		{ "Category", "AI Properties" },
		{ "ModuleRelativePath", "AIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAIManager_Statics::NewProp_NumAI = { "NumAI", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIManager, NumAI), METADATA_PARAMS(Z_Construct_UClass_AAIManager_Statics::NewProp_NumAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIManager_Statics::NewProp_NumAI_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIManager_Statics::NewProp_AllNodes_Inner = { "AllNodes", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANavigationNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIManager_Statics::NewProp_AllNodes_MetaData[] = {
		{ "Category", "Navigation Nodes" },
		{ "ModuleRelativePath", "AIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAIManager_Statics::NewProp_AllNodes = { "AllNodes", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIManager, AllNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAIManager_Statics::NewProp_AllNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIManager_Statics::NewProp_AllNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIManager_Statics::NewProp_AllAgents_Inner = { "AllAgents", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEnemyCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIManager_Statics::NewProp_AllAgents_MetaData[] = {
		{ "Category", "Agents" },
		{ "ModuleRelativePath", "AIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAIManager_Statics::NewProp_AllAgents = { "AllAgents", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIManager, AllAgents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAIManager_Statics::NewProp_AllAgents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIManager_Statics::NewProp_AllAgents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIManager_Statics::NewProp_AgentToSpawn_MetaData[] = {
		{ "Category", "Agents" },
		{ "ModuleRelativePath", "AIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAIManager_Statics::NewProp_AgentToSpawn = { "AgentToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIManager, AgentToSpawn), Z_Construct_UClass_AEnemyCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAIManager_Statics::NewProp_AgentToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIManager_Statics::NewProp_AgentToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIManager_Statics::NewProp_AllowedAngle_MetaData[] = {
		{ "Category", "AIManager" },
		{ "ModuleRelativePath", "AIManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAIManager_Statics::NewProp_AllowedAngle = { "AllowedAngle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIManager, AllowedAngle), METADATA_PARAMS(Z_Construct_UClass_AAIManager_Statics::NewProp_AllowedAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIManager_Statics::NewProp_AllowedAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIManager_Statics::NewProp_NumAI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIManager_Statics::NewProp_AllNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIManager_Statics::NewProp_AllNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIManager_Statics::NewProp_AllAgents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIManager_Statics::NewProp_AllAgents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIManager_Statics::NewProp_AgentToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIManager_Statics::NewProp_AllowedAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIManager_Statics::ClassParams = {
		&AAIManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIManager, 2052857990);
	template<> ADVGAMESPROGRAMMING_API UClass* StaticClass<AAIManager>()
	{
		return AAIManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIManager(Z_Construct_UClass_AAIManager, &AAIManager::StaticClass, TEXT("/Script/AdvGamesProgramming"), TEXT("AAIManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
