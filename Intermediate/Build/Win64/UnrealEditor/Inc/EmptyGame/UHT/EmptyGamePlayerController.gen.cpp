// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EmptyGame/EmptyGamePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmptyGamePlayerController() {}

// Begin Cross Module References
EMPTYGAME_API UClass* Z_Construct_UClass_AEmptyGamePlayerController();
EMPTYGAME_API UClass* Z_Construct_UClass_AEmptyGamePlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_EmptyGame();
// End Cross Module References

// Begin Class AEmptyGamePlayerController
void AEmptyGamePlayerController::StaticRegisterNativesAEmptyGamePlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEmptyGamePlayerController);
UClass* Z_Construct_UClass_AEmptyGamePlayerController_NoRegister()
{
	return AEmptyGamePlayerController::StaticClass();
}
struct Z_Construct_UClass_AEmptyGamePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EmptyGamePlayerController.h" },
		{ "ModuleRelativePath", "EmptyGamePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "EmptyGamePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEmptyGamePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEmptyGamePlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEmptyGamePlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEmptyGamePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmptyGamePlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEmptyGamePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEmptyGamePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_EmptyGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEmptyGamePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEmptyGamePlayerController_Statics::ClassParams = {
	&AEmptyGamePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEmptyGamePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEmptyGamePlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEmptyGamePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AEmptyGamePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEmptyGamePlayerController()
{
	if (!Z_Registration_Info_UClass_AEmptyGamePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEmptyGamePlayerController.OuterSingleton, Z_Construct_UClass_AEmptyGamePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEmptyGamePlayerController.OuterSingleton;
}
template<> EMPTYGAME_API UClass* StaticClass<AEmptyGamePlayerController>()
{
	return AEmptyGamePlayerController::StaticClass();
}
AEmptyGamePlayerController::AEmptyGamePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEmptyGamePlayerController);
AEmptyGamePlayerController::~AEmptyGamePlayerController() {}
// End Class AEmptyGamePlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGamePlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEmptyGamePlayerController, AEmptyGamePlayerController::StaticClass, TEXT("AEmptyGamePlayerController"), &Z_Registration_Info_UClass_AEmptyGamePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEmptyGamePlayerController), 285012041U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGamePlayerController_h_1860408122(TEXT("/Script/EmptyGame"),
	Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGamePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Engine_Projects_EmptyGame_Source_EmptyGame_EmptyGamePlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
