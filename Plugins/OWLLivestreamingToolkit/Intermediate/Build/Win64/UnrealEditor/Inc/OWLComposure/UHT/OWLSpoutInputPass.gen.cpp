// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Public/OWLSpoutInputPass.h"
#include "OWLSpout/Public/OWLSpoutReceiverManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLSpoutInputPass() {}

// Begin Cross Module References
COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementInput();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLSpoutInputPass();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_UOWLSpoutInputPass_NoRegister();
OWLSPOUT_API UScriptStruct* Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface();
UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References

// Begin Class UOWLSpoutInputPass
void UOWLSpoutInputPass::StaticRegisterNativesUOWLSpoutInputPass()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOWLSpoutInputPass);
UClass* Z_Construct_UClass_UOWLSpoutInputPass_NoRegister()
{
	return UOWLSpoutInputPass::StaticClass();
}
struct Z_Construct_UClass_UOWLSpoutInputPass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OWLSpoutInputPass.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OWLSpoutInputPass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Receiver_MetaData[] = {
		{ "Category", "OWL" },
		{ "ModuleRelativePath", "Public/OWLSpoutInputPass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Receiver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWLSpoutInputPass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWLSpoutInputPass_Statics::NewProp_Receiver = { "Receiver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWLSpoutInputPass, Receiver), Z_Construct_UScriptStruct_FOWLSpoutReceiverInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Receiver_MetaData), NewProp_Receiver_MetaData) }; // 4057756470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWLSpoutInputPass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWLSpoutInputPass_Statics::NewProp_Receiver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutInputPass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOWLSpoutInputPass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCompositingElementInput,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutInputPass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWLSpoutInputPass_Statics::ClassParams = {
	&UOWLSpoutInputPass::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOWLSpoutInputPass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutInputPass_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWLSpoutInputPass_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWLSpoutInputPass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOWLSpoutInputPass()
{
	if (!Z_Registration_Info_UClass_UOWLSpoutInputPass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWLSpoutInputPass.OuterSingleton, Z_Construct_UClass_UOWLSpoutInputPass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWLSpoutInputPass.OuterSingleton;
}
template<> OWLCOMPOSURE_API UClass* StaticClass<UOWLSpoutInputPass>()
{
	return UOWLSpoutInputPass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOWLSpoutInputPass);
UOWLSpoutInputPass::~UOWLSpoutInputPass() {}
// End Class UOWLSpoutInputPass

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLSpoutInputPass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWLSpoutInputPass, UOWLSpoutInputPass::StaticClass, TEXT("UOWLSpoutInputPass"), &Z_Registration_Info_UClass_UOWLSpoutInputPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWLSpoutInputPass), 2503033093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLSpoutInputPass_h_1967131508(TEXT("/Script/OWLComposure"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLSpoutInputPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLSpoutInputPass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
