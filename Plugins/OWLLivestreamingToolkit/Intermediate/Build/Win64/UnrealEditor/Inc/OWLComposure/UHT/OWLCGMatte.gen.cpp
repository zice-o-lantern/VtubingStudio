// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWLComposure/Public/OWLCGMatte.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWLCGMatte() {}

// Begin Cross Module References
OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLCGElement();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLCGMatte();
OWLCOMPOSURE_API UClass* Z_Construct_UClass_AOWLCGMatte_NoRegister();
OWLCOMPOSURE_API UEnum* Z_Construct_UEnum_OWLComposure_EOWLComposureMatteType();
UPackage* Z_Construct_UPackage__Script_OWLComposure();
// End Cross Module References

// Begin Enum EOWLComposureMatteType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOWLComposureMatteType;
static UEnum* EOWLComposureMatteType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOWLComposureMatteType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOWLComposureMatteType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OWLComposure_EOWLComposureMatteType, (UObject*)Z_Construct_UPackage__Script_OWLComposure(), TEXT("EOWLComposureMatteType"));
	}
	return Z_Registration_Info_UEnum_EOWLComposureMatteType.OuterSingleton;
}
template<> OWLCOMPOSURE_API UEnum* StaticEnum<EOWLComposureMatteType>()
{
	return EOWLComposureMatteType_StaticEnum();
}
struct Z_Construct_UEnum_OWLComposure_EOWLComposureMatteType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CMT_GARBAGE_MATTE.DisplayName", "Garbage Matte" },
		{ "CMT_GARBAGE_MATTE.Name", "EOWLComposureMatteType::CMT_GARBAGE_MATTE" },
		{ "CMT_HOLDOUT.DisplayName", "Holdout" },
		{ "CMT_HOLDOUT.Name", "EOWLComposureMatteType::CMT_HOLDOUT" },
		{ "ModuleRelativePath", "Public/OWLCGMatte.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOWLComposureMatteType::CMT_HOLDOUT", (int64)EOWLComposureMatteType::CMT_HOLDOUT },
		{ "EOWLComposureMatteType::CMT_GARBAGE_MATTE", (int64)EOWLComposureMatteType::CMT_GARBAGE_MATTE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OWLComposure_EOWLComposureMatteType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OWLComposure,
	nullptr,
	"EOWLComposureMatteType",
	"EOWLComposureMatteType",
	Z_Construct_UEnum_OWLComposure_EOWLComposureMatteType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OWLComposure_EOWLComposureMatteType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OWLComposure_EOWLComposureMatteType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OWLComposure_EOWLComposureMatteType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OWLComposure_EOWLComposureMatteType()
{
	if (!Z_Registration_Info_UEnum_EOWLComposureMatteType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOWLComposureMatteType.InnerSingleton, Z_Construct_UEnum_OWLComposure_EOWLComposureMatteType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOWLComposureMatteType.InnerSingleton;
}
// End Enum EOWLComposureMatteType

// Begin Class AOWLCGMatte
void AOWLCGMatte::StaticRegisterNativesAOWLCGMatte()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOWLCGMatte);
UClass* Z_Construct_UClass_AOWLCGMatte_NoRegister()
{
	return AOWLCGMatte::StaticClass();
}
struct Z_Construct_UClass_AOWLCGMatte_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "OWL Composure" },
		{ "IncludePath", "OWLCGMatte.h" },
		{ "ModuleRelativePath", "Public/OWLCGMatte.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatteType_MetaData[] = {
		{ "Category", "Matte Pass" },
		{ "ModuleRelativePath", "Public/OWLCGMatte.h" },
		{ "ToolTip", "Holdout makes the current selection white and the background black, Garbage Matte is the reverse" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MatteType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MatteType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOWLCGMatte>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOWLCGMatte_Statics::NewProp_MatteType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AOWLCGMatte_Statics::NewProp_MatteType = { "MatteType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AOWLCGMatte, MatteType), Z_Construct_UEnum_OWLComposure_EOWLComposureMatteType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatteType_MetaData), NewProp_MatteType_MetaData) }; // 3559386343
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOWLCGMatte_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGMatte_Statics::NewProp_MatteType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOWLCGMatte_Statics::NewProp_MatteType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGMatte_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AOWLCGMatte_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AOWLCGElement,
	(UObject* (*)())Z_Construct_UPackage__Script_OWLComposure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGMatte_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOWLCGMatte_Statics::ClassParams = {
	&AOWLCGMatte::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AOWLCGMatte_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGMatte_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOWLCGMatte_Statics::Class_MetaDataParams), Z_Construct_UClass_AOWLCGMatte_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOWLCGMatte()
{
	if (!Z_Registration_Info_UClass_AOWLCGMatte.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOWLCGMatte.OuterSingleton, Z_Construct_UClass_AOWLCGMatte_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOWLCGMatte.OuterSingleton;
}
template<> OWLCOMPOSURE_API UClass* StaticClass<AOWLCGMatte>()
{
	return AOWLCGMatte::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOWLCGMatte);
AOWLCGMatte::~AOWLCGMatte() {}
// End Class AOWLCGMatte

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOWLComposureMatteType_StaticEnum, TEXT("EOWLComposureMatteType"), &Z_Registration_Info_UEnum_EOWLComposureMatteType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3559386343U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOWLCGMatte, AOWLCGMatte::StaticClass, TEXT("AOWLCGMatte"), &Z_Registration_Info_UClass_AOWLCGMatte, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOWLCGMatte), 987378397U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_1022403598(TEXT("/Script/OWLComposure"),
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWLComposure_Public_OWLCGMatte_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
