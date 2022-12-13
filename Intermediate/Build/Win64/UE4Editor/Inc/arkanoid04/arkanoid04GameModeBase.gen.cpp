// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "arkanoid04/arkanoid04GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodearkanoid04GameModeBase() {}
// Cross Module References
	ARKANOID04_API UClass* Z_Construct_UClass_Aarkanoid04GameModeBase_NoRegister();
	ARKANOID04_API UClass* Z_Construct_UClass_Aarkanoid04GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_arkanoid04();
// End Cross Module References
	void Aarkanoid04GameModeBase::StaticRegisterNativesAarkanoid04GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Aarkanoid04GameModeBase_NoRegister()
	{
		return Aarkanoid04GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Aarkanoid04GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_arkanoid04,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "arkanoid04GameModeBase.h" },
		{ "ModuleRelativePath", "arkanoid04GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aarkanoid04GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::ClassParams = {
		&Aarkanoid04GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aarkanoid04GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aarkanoid04GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aarkanoid04GameModeBase, 709803219);
	template<> ARKANOID04_API UClass* StaticClass<Aarkanoid04GameModeBase>()
	{
		return Aarkanoid04GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aarkanoid04GameModeBase(Z_Construct_UClass_Aarkanoid04GameModeBase, &Aarkanoid04GameModeBase::StaticClass, TEXT("/Script/arkanoid04"), TEXT("Aarkanoid04GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aarkanoid04GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
