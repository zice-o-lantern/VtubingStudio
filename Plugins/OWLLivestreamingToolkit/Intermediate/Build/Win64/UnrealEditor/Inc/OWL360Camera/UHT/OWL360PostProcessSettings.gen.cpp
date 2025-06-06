// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWL360Camera/Public/PostProcessing/OWL360PostProcessSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOWL360PostProcessSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDynamicGlobalIlluminationMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELumenRayLightingModeOverride();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectionMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETemperatureMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETranslucencyType();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360ColorGradingSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360FilmGrainSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360LensBloomSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360LensCameraSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360LensExposureSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360LensSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360PostProcessSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360ReflectionsSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings();
OWL360CAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings();
UPackage* Z_Construct_UPackage__Script_OWL360Camera();
// End Cross Module References

// Begin ScriptStruct FOWL360BloomAdvancedSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360BloomAdvancedSettings;
class UScriptStruct* FOWL360BloomAdvancedSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360BloomAdvancedSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360BloomAdvancedSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360BloomAdvancedSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360BloomAdvancedSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360BloomAdvancedSettings>()
{
	return FOWL360BloomAdvancedSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// USTRUCT(BlueprintType)\n// struct FOWL360MobileDepthOfFieldAdvancedSettings\n// {\n// \x09GENERATED_BODY()\n//\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n// \x09uint8 bOverride_DepthOfFieldOcclusion:1;\n//\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n// \x09uint8 bOverride_DepthOfFieldSkyFocusDistance:1;\n//\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n// \x09uint8 bOverride_DepthOfFieldVignetteSize:1;\n//\n// \x09/** Occlusion tweak factor 1 (0.18 to get natural occlusion, 0.4 to solve layer color leaking issues) */\n// \x09UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", AdvancedDisplay, meta=(ClampMin = \"0.0\", ClampMax = \"1.0\", editcondition = \"bOverride_DepthOfFieldOcclusion\", DisplayName = \"Occlusion\"))\n// \x09""float DepthOfFieldOcclusion;\n//\n// \x09/** Artificial distance to allow the skybox to be in focus (e.g. 200000), <=0 to switch the feature off, only for GaussianDOF, can cost performance */\n// \x09UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", AdvancedDisplay, meta=(ClampMin = \"0.0\", ClampMax = \"200000.0\", editcondition = \"bOverride_DepthOfFieldSkyFocusDistance\", DisplayName = \"Sky Distance\"))\n// \x09""float DepthOfFieldSkyFocusDistance;\n//\n// \x09/** Artificial circular mask to (near) blur content outside the radius, only for GaussianDOF, diameter in percent of screen width, costs performance if the mask is used, keep Feather can Radius on default to keep it off */\n// \x09UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", AdvancedDisplay, meta=(UIMin = \"0.0\", UIMax = \"100.0\", editcondition = \"bOverride_DepthOfFieldVignetteSize\", DisplayName = \"Vignette Size\"))\n// \x09""float DepthOfFieldVignetteSize;\n//\n// \x09""FOWL360MobileDepthOfFieldAdvancedSettings()\n// \x09{\n// \x09\x09""FMemory::Memzero(this, sizeof(FOWL360MobileDepthOfFieldAdvancedSettings));\n// \x09\x09""DepthOfFieldOcclusion = 0.4f;\n// \x09\x09""DepthOfFieldSkyFocusDistance = 0.0f;\n// \x09\x09// 200 should be enough even for extreme aspect ratios to give the default no effect\n// \x09\x09""DepthOfFieldVignetteSize = 200.0f;\n// \x09}\n//\n// \x09/* Exports to post process settings with overrides. */\n// \x09OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;\n// };\n//\n// USTRUCT(BlueprintType)\n// struct FOWL360LensMobileDepthOfFieldSettings\n// {\n// \x09GENERATED_BODY()\n//\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n// \x09uint8 bOverride_MobileHQGaussian:1;\n//\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n// \x09uint8 bOverride_DepthOfFieldFocalRegion:1;\n//\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n// \x09uint8 bOverride_DepthOfFieldNearTransitionRegion:1;\n//\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n// \x09uint8 bOverride_DepthOfFieldFarTransitionRegion:1;\n//\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n// \x09uint8 bOverride_DepthOfFieldScale:1;\n//\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n// \x09uint8 bOverride_DepthOfFieldNearBlurSize:1;\n//\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n// \x09uint8 bOverride_DepthOfFieldFarBlurSize:1;\n//\n// \x09/** Enable HQ Gaussian on high end mobile platforms. (ES3_1) */\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Lens|Mobile Depth of Field\", meta = (editcondition = \"bOverride_MobileHQGaussian\", DisplayName = \"High Quality Gaussian DoF on Mobile\"))\n// \x09uint8 bMobileHQGaussian:1;\n//\n// \x09/** Artificial region where all content is in focus, starting after DepthOfFieldFocalDistance, in unreal units  (cm) */\n// \x09UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", meta=(UIMin = \"0.0\", UIMax = \"10000.0\", editcondition = \"bOverride_DepthOfFieldFocalRegion\", DisplayName = \"Focal Region\"))\n// \x09""float DepthOfFieldFocalRegion;\n//\n// \x09/** To define the width of the transition region next to the focal region on the near side (cm) */\n// \x09UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", meta=(UIMin = \"0.0\", UIMax = \"10000.0\", editcondition = \"bOverride_DepthOfFieldNearTransitionRegion\", DisplayName = \"Near Transition Region\"))\n// \x09""float DepthOfFieldNearTransitionRegion;\n//\n// \x09/** To define the width of the transition region next to the focal region on the near side (cm) */\n// \x09UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", meta=(UIMin = \"0.0\", UIMax = \"10000.0\", editcondition = \"bOverride_DepthOfFieldFarTransitionRegion\", DisplayName = \"Far Transition Region\"))\n// \x09""float DepthOfFieldFarTransitionRegion;\n//\n// \x09/** SM5: BokehDOF only: To amplify the depth of field effect (like aperture)  0=off\n// \x09    ES3_1: Used to blend DoF. 0=off\n// \x09*/\n// \x09UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", meta=(ClampMin = \"0.0\", ClampMax = \"2.0\", editcondition = \"bOverride_DepthOfFieldScale\", DisplayName = \"Scale\"))\n// \x09""float DepthOfFieldScale;\n//\n// \x09/** Gaussian only: Maximum size of the Depth of Field blur (in percent of the view width) (note: performance cost scales with size) */\n// \x09UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", meta=(UIMin = \"0.0\", UIMax = \"32.0\", editcondition = \"bOverride_DepthOfFieldNearBlurSize\", DisplayName = \"Near Blur Size\"))\n// \x09""float DepthOfFieldNearBlurSize;\n//\n// \x09/** Gaussian only: Maximum size of the Depth of Field blur (in percent of the view width) (note: performance cost scales with size) */\n// \x09UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", meta=(UIMin = \"0.0\", UIMax = \"32.0\", editcondition = \"bOverride_DepthOfFieldFarBlurSize\", DisplayName = \"Far Blur Size\"))\n// \x09""float DepthOfFieldFarBlurSize;\n//\n//\n// \x09UPROPERTY(Interp, BlueprintReadWrite, Category = \"Lens|Mobile Depth of Field\")\n// \x09""FOWL360MobileDepthOfFieldAdvancedSettings Advanced;\n//\n// \x09""FOWL360LensMobileDepthOfFieldSettings()\n// \x09{\n// \x09\x09""FMemory::Memzero(this, sizeof(FOWL360LensMobileDepthOfFieldSettings));\n// \x09\x09""DepthOfFieldFocalRegion = 0.0f;\n// \x09\x09""DepthOfFieldNearTransitionRegion = 300.0f;\n// \x09\x09""DepthOfFieldFarTransitionRegion = 500.0f;\n// \x09\x09""DepthOfFieldScale = 0.0f;\n// \x09\x09""DepthOfFieldNearBlurSize = 15.0f;\n// \x09\x09""DepthOfFieldFarBlurSize = 15.0f;\n// \x09}\n//\n// \x09/* Exports to post process settings with overrides. */\n// \x09OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;\n// };\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FOWL360MobileDepthOfFieldAdvancedSettings\n{\n      GENERATED_BODY()\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n      uint8 bOverride_DepthOfFieldOcclusion:1;\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n      uint8 bOverride_DepthOfFieldSkyFocusDistance:1;\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n      uint8 bOverride_DepthOfFieldVignetteSize:1;\n\n       Occlusion tweak factor 1 (0.18 to get natural occlusion, 0.4 to solve layer color leaking issues)\n      UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", AdvancedDisplay, meta=(ClampMin = \"0.0\", ClampMax = \"1.0\", editcondition = \"bOverride_DepthOfFieldOcclusion\", DisplayName = \"Occlusion\"))\n      float DepthOfFieldOcclusion;\n\n       Artificial distance to allow the skybox to be in focus (e.g. 200000), <=0 to switch the feature off, only for GaussianDOF, can cost performance\n      UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", AdvancedDisplay, meta=(ClampMin = \"0.0\", ClampMax = \"200000.0\", editcondition = \"bOverride_DepthOfFieldSkyFocusDistance\", DisplayName = \"Sky Distance\"))\n      float DepthOfFieldSkyFocusDistance;\n\n       Artificial circular mask to (near) blur content outside the radius, only for GaussianDOF, diameter in percent of screen width, costs performance if the mask is used, keep Feather can Radius on default to keep it off\n      UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", AdvancedDisplay, meta=(UIMin = \"0.0\", UIMax = \"100.0\", editcondition = \"bOverride_DepthOfFieldVignetteSize\", DisplayName = \"Vignette Size\"))\n      float DepthOfFieldVignetteSize;\n\n      FOWL360MobileDepthOfFieldAdvancedSettings()\n      {\n              FMemory::Memzero(this, sizeof(FOWL360MobileDepthOfFieldAdvancedSettings));\n              DepthOfFieldOcclusion = 0.4f;\n              DepthOfFieldSkyFocusDistance = 0.0f;\n               200 should be enough even for extreme aspect ratios to give the default no effect\n              DepthOfFieldVignetteSize = 200.0f;\n      }\n\n       Exports to post process settings with overrides.\n      OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;\n};\n\nUSTRUCT(BlueprintType)\nstruct FOWL360LensMobileDepthOfFieldSettings\n{\n      GENERATED_BODY()\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n      uint8 bOverride_MobileHQGaussian:1;\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n      uint8 bOverride_DepthOfFieldFocalRegion:1;\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n      uint8 bOverride_DepthOfFieldNearTransitionRegion:1;\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n      uint8 bOverride_DepthOfFieldFarTransitionRegion:1;\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n      uint8 bOverride_DepthOfFieldScale:1;\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n      uint8 bOverride_DepthOfFieldNearBlurSize:1;\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n      uint8 bOverride_DepthOfFieldFarBlurSize:1;\n\n       Enable HQ Gaussian on high end mobile platforms. (ES3_1)\n      UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Lens|Mobile Depth of Field\", meta = (editcondition = \"bOverride_MobileHQGaussian\", DisplayName = \"High Quality Gaussian DoF on Mobile\"))\n      uint8 bMobileHQGaussian:1;\n\n       Artificial region where all content is in focus, starting after DepthOfFieldFocalDistance, in unreal units  (cm)\n      UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", meta=(UIMin = \"0.0\", UIMax = \"10000.0\", editcondition = \"bOverride_DepthOfFieldFocalRegion\", DisplayName = \"Focal Region\"))\n      float DepthOfFieldFocalRegion;\n\n       To define the width of the transition region next to the focal region on the near side (cm)\n      UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", meta=(UIMin = \"0.0\", UIMax = \"10000.0\", editcondition = \"bOverride_DepthOfFieldNearTransitionRegion\", DisplayName = \"Near Transition Region\"))\n      float DepthOfFieldNearTransitionRegion;\n\n       To define the width of the transition region next to the focal region on the near side (cm)\n      UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", meta=(UIMin = \"0.0\", UIMax = \"10000.0\", editcondition = \"bOverride_DepthOfFieldFarTransitionRegion\", DisplayName = \"Far Transition Region\"))\n      float DepthOfFieldFarTransitionRegion;\n\n       SM5: BokehDOF only: To amplify the depth of field effect (like aperture)  0=off\n          ES3_1: Used to blend DoF. 0=off\n\n      UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", meta=(ClampMin = \"0.0\", ClampMax = \"2.0\", editcondition = \"bOverride_DepthOfFieldScale\", DisplayName = \"Scale\"))\n      float DepthOfFieldScale;\n\n       Gaussian only: Maximum size of the Depth of Field blur (in percent of the view width) (note: performance cost scales with size)\n      UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", meta=(UIMin = \"0.0\", UIMax = \"32.0\", editcondition = \"bOverride_DepthOfFieldNearBlurSize\", DisplayName = \"Near Blur Size\"))\n      float DepthOfFieldNearBlurSize;\n\n       Gaussian only: Maximum size of the Depth of Field blur (in percent of the view width) (note: performance cost scales with size)\n      UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Mobile Depth of Field\", meta=(UIMin = \"0.0\", UIMax = \"32.0\", editcondition = \"bOverride_DepthOfFieldFarBlurSize\", DisplayName = \"Far Blur Size\"))\n      float DepthOfFieldFarBlurSize;\n\n\n      UPROPERTY(Interp, BlueprintReadWrite, Category = \"Lens|Mobile Depth of Field\")\n      FOWL360MobileDepthOfFieldAdvancedSettings Advanced;\n\n      FOWL360LensMobileDepthOfFieldSettings()\n      {\n              FMemory::Memzero(this, sizeof(FOWL360LensMobileDepthOfFieldSettings));\n              DepthOfFieldFocalRegion = 0.0f;\n              DepthOfFieldNearTransitionRegion = 300.0f;\n              DepthOfFieldFarTransitionRegion = 500.0f;\n              DepthOfFieldScale = 0.0f;\n              DepthOfFieldNearBlurSize = 15.0f;\n              DepthOfFieldFarBlurSize = 15.0f;\n      }\n\n       Exports to post process settings with overrides.\n      OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;\n};" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomSizeScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom1Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom1Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom2Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom2Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom3Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom3Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom4Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom4Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom5Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom5Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom6Tint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Bloom6Size_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeScale_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Scale for all bloom sizes\n\x09 */" },
		{ "DisplayName", "Size scale" },
		{ "editcondition", "bOverride_BloomSizeScale" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Scale for all bloom sizes" },
		{ "UIMax", "64.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter1Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for the Bloom1 in percent of the screen width\n\x09 * (is done in 1/2 resolution, larger values cost more performance, good for high frequency details)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#1 Size" },
		{ "editcondition", "bOverride_Bloom1Size" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Diameter size for the Bloom1 in percent of the screen width\n(is done in 1/2 resolution, larger values cost more performance, good for high frequency details)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "4.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter2Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for Bloom2 in percent of the screen width\n\x09 * (is done in 1/4 resolution, larger values cost more performance)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#2 Size" },
		{ "editcondition", "bOverride_Bloom2Size" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Diameter size for Bloom2 in percent of the screen width\n(is done in 1/4 resolution, larger values cost more performance)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "8.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter3Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for Bloom3 in percent of the screen width\n\x09 * (is done in 1/8 resolution, larger values cost more performance)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#3 Size" },
		{ "editcondition", "bOverride_Bloom3Size" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Diameter size for Bloom3 in percent of the screen width\n(is done in 1/8 resolution, larger values cost more performance)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "16.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter4Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for Bloom4 in percent of the screen width\n\x09 * (is done in 1/16 resolution, larger values cost more performance, best for wide contributions)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#4 Size" },
		{ "editcondition", "bOverride_Bloom4Size" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Diameter size for Bloom4 in percent of the screen width\n(is done in 1/16 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "32.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter5Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for Bloom5 in percent of the screen width\n\x09 * (is done in 1/32 resolution, larger values cost more performance, best for wide contributions)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#5 Size" },
		{ "editcondition", "bOverride_Bloom5Size" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Diameter size for Bloom5 in percent of the screen width\n(is done in 1/32 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "64.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter6Size_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Diameter size for Bloom6 in percent of the screen width\n\x09 * (is done in 1/64 resolution, larger values cost more performance, best for wide contributions)\n\x09 * >=0: can be clamped because of shader limitations\n\x09 */" },
		{ "DisplayName", "#6 Size" },
		{ "editcondition", "bOverride_Bloom6Size" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Diameter size for Bloom6 in percent of the screen width\n(is done in 1/64 resolution, larger values cost more performance, best for wide contributions)\n>=0: can be clamped because of shader limitations" },
		{ "UIMax", "128.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter1Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom1 tint color */" },
		{ "DisplayName", "#1 Tint" },
		{ "editcondition", "bOverride_Bloom1Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Bloom1 tint color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter2Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom2 tint color */" },
		{ "DisplayName", "#2 Tint" },
		{ "editcondition", "bOverride_Bloom2Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Bloom2 tint color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter3Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom3 tint color */" },
		{ "DisplayName", "#3 Tint" },
		{ "editcondition", "bOverride_Bloom3Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Bloom3 tint color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter4Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom4 tint color */" },
		{ "DisplayName", "#4 Tint" },
		{ "editcondition", "bOverride_Bloom4Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Bloom4 tint color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter5Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom5 tint color */" },
		{ "DisplayName", "#5 Tint" },
		{ "editcondition", "bOverride_Bloom5Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Bloom5 tint color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filter6Tint_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "Comment", "/** Bloom6 tint color */" },
		{ "DisplayName", "#6 Tint" },
		{ "editcondition", "bOverride_Bloom6Tint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Bloom6 tint color" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_BloomSizeScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomSizeScale;
	static void NewProp_bOverride_Bloom1Tint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom1Tint;
	static void NewProp_bOverride_Bloom1Size_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom1Size;
	static void NewProp_bOverride_Bloom2Size_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom2Size;
	static void NewProp_bOverride_Bloom2Tint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom2Tint;
	static void NewProp_bOverride_Bloom3Tint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom3Tint;
	static void NewProp_bOverride_Bloom3Size_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom3Size;
	static void NewProp_bOverride_Bloom4Tint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom4Tint;
	static void NewProp_bOverride_Bloom4Size_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom4Size;
	static void NewProp_bOverride_Bloom5Tint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom5Tint;
	static void NewProp_bOverride_Bloom5Size_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom5Size;
	static void NewProp_bOverride_Bloom6Tint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom6Tint;
	static void NewProp_bOverride_Bloom6Size_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Bloom6Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Filter1Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Filter2Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Filter3Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Filter4Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Filter5Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Filter6Size;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter1Tint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter2Tint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter3Tint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter4Tint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter5Tint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filter6Tint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360BloomAdvancedSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_BloomSizeScale_SetBit(void* Obj)
{
	((FOWL360BloomAdvancedSettings*)Obj)->bOverride_BloomSizeScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_BloomSizeScale = { "bOverride_BloomSizeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360BloomAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_BloomSizeScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_BloomSizeScale_MetaData), NewProp_bOverride_BloomSizeScale_MetaData) };
void Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom1Tint_SetBit(void* Obj)
{
	((FOWL360BloomAdvancedSettings*)Obj)->bOverride_Bloom1Tint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom1Tint = { "bOverride_Bloom1Tint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360BloomAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom1Tint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Bloom1Tint_MetaData), NewProp_bOverride_Bloom1Tint_MetaData) };
void Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom1Size_SetBit(void* Obj)
{
	((FOWL360BloomAdvancedSettings*)Obj)->bOverride_Bloom1Size = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom1Size = { "bOverride_Bloom1Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360BloomAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom1Size_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Bloom1Size_MetaData), NewProp_bOverride_Bloom1Size_MetaData) };
void Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom2Size_SetBit(void* Obj)
{
	((FOWL360BloomAdvancedSettings*)Obj)->bOverride_Bloom2Size = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom2Size = { "bOverride_Bloom2Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360BloomAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom2Size_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Bloom2Size_MetaData), NewProp_bOverride_Bloom2Size_MetaData) };
void Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom2Tint_SetBit(void* Obj)
{
	((FOWL360BloomAdvancedSettings*)Obj)->bOverride_Bloom2Tint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom2Tint = { "bOverride_Bloom2Tint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360BloomAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom2Tint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Bloom2Tint_MetaData), NewProp_bOverride_Bloom2Tint_MetaData) };
void Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom3Tint_SetBit(void* Obj)
{
	((FOWL360BloomAdvancedSettings*)Obj)->bOverride_Bloom3Tint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom3Tint = { "bOverride_Bloom3Tint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360BloomAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom3Tint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Bloom3Tint_MetaData), NewProp_bOverride_Bloom3Tint_MetaData) };
void Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom3Size_SetBit(void* Obj)
{
	((FOWL360BloomAdvancedSettings*)Obj)->bOverride_Bloom3Size = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom3Size = { "bOverride_Bloom3Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360BloomAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom3Size_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Bloom3Size_MetaData), NewProp_bOverride_Bloom3Size_MetaData) };
void Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom4Tint_SetBit(void* Obj)
{
	((FOWL360BloomAdvancedSettings*)Obj)->bOverride_Bloom4Tint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom4Tint = { "bOverride_Bloom4Tint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360BloomAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom4Tint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Bloom4Tint_MetaData), NewProp_bOverride_Bloom4Tint_MetaData) };
void Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom4Size_SetBit(void* Obj)
{
	((FOWL360BloomAdvancedSettings*)Obj)->bOverride_Bloom4Size = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom4Size = { "bOverride_Bloom4Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360BloomAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom4Size_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Bloom4Size_MetaData), NewProp_bOverride_Bloom4Size_MetaData) };
void Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom5Tint_SetBit(void* Obj)
{
	((FOWL360BloomAdvancedSettings*)Obj)->bOverride_Bloom5Tint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom5Tint = { "bOverride_Bloom5Tint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360BloomAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom5Tint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Bloom5Tint_MetaData), NewProp_bOverride_Bloom5Tint_MetaData) };
void Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom5Size_SetBit(void* Obj)
{
	((FOWL360BloomAdvancedSettings*)Obj)->bOverride_Bloom5Size = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom5Size = { "bOverride_Bloom5Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360BloomAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom5Size_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Bloom5Size_MetaData), NewProp_bOverride_Bloom5Size_MetaData) };
void Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom6Tint_SetBit(void* Obj)
{
	((FOWL360BloomAdvancedSettings*)Obj)->bOverride_Bloom6Tint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom6Tint = { "bOverride_Bloom6Tint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360BloomAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom6Tint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Bloom6Tint_MetaData), NewProp_bOverride_Bloom6Tint_MetaData) };
void Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom6Size_SetBit(void* Obj)
{
	((FOWL360BloomAdvancedSettings*)Obj)->bOverride_Bloom6Size = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom6Size = { "bOverride_Bloom6Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360BloomAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom6Size_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Bloom6Size_MetaData), NewProp_bOverride_Bloom6Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_SizeScale = { "SizeScale", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360BloomAdvancedSettings, SizeScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeScale_MetaData), NewProp_SizeScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter1Size = { "Filter1Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360BloomAdvancedSettings, Filter1Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter1Size_MetaData), NewProp_Filter1Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter2Size = { "Filter2Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360BloomAdvancedSettings, Filter2Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter2Size_MetaData), NewProp_Filter2Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter3Size = { "Filter3Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360BloomAdvancedSettings, Filter3Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter3Size_MetaData), NewProp_Filter3Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter4Size = { "Filter4Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360BloomAdvancedSettings, Filter4Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter4Size_MetaData), NewProp_Filter4Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter5Size = { "Filter5Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360BloomAdvancedSettings, Filter5Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter5Size_MetaData), NewProp_Filter5Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter6Size = { "Filter6Size", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360BloomAdvancedSettings, Filter6Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter6Size_MetaData), NewProp_Filter6Size_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter1Tint = { "Filter1Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360BloomAdvancedSettings, Filter1Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter1Tint_MetaData), NewProp_Filter1Tint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter2Tint = { "Filter2Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360BloomAdvancedSettings, Filter2Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter2Tint_MetaData), NewProp_Filter2Tint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter3Tint = { "Filter3Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360BloomAdvancedSettings, Filter3Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter3Tint_MetaData), NewProp_Filter3Tint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter4Tint = { "Filter4Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360BloomAdvancedSettings, Filter4Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter4Tint_MetaData), NewProp_Filter4Tint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter5Tint = { "Filter5Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360BloomAdvancedSettings, Filter5Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter5Tint_MetaData), NewProp_Filter5Tint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter6Tint = { "Filter6Tint", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360BloomAdvancedSettings, Filter6Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filter6Tint_MetaData), NewProp_Filter6Tint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_BloomSizeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom1Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom1Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom2Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom2Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom3Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom3Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom4Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom4Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom5Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom5Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom6Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_bOverride_Bloom6Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_SizeScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter1Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter2Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter3Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter4Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter5Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter6Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter1Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter2Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter3Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter4Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter5Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewProp_Filter6Tint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360BloomAdvancedSettings",
	Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::PropPointers),
	sizeof(FOWL360BloomAdvancedSettings),
	alignof(FOWL360BloomAdvancedSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360BloomAdvancedSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360BloomAdvancedSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360BloomAdvancedSettings.InnerSingleton;
}
// End ScriptStruct FOWL360BloomAdvancedSettings

// Begin ScriptStruct FOWL360LensBloomSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360LensBloomSettings;
class UScriptStruct* FOWL360LensBloomSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360LensBloomSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360LensBloomSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360LensBloomSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360LensBloomSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360LensBloomSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360LensBloomSettings>()
{
	return FOWL360LensBloomSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BloomThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Multiplier for all bloom contributions >=0: off, 1(default), >1 brighter */" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_BloomIntensity" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Multiplier for all bloom contributions >=0: off, 1(default), >1 brighter" },
		{ "UIMax", "8.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "/**\n\x09 * minimum brightness the bloom starts having effect\n\x09 * -1:all pixels affect bloom equally (physically correct, faster as a threshold pass is omitted), 0:all pixels affect bloom brights more, 1(default), >1 brighter\n\x09 */" },
		{ "DisplayName", "Threshold" },
		{ "editcondition", "bOverride_BloomThreshold" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "minimum brightness the bloom starts having effect\n-1:all pixels affect bloom equally (physically correct, faster as a threshold pass is omitted), 0:all pixels affect bloom brights more, 1(default), >1 brighter" },
		{ "UIMax", "8.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Advanced_MetaData[] = {
		{ "Category", "Lens|Bloom" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_BloomIntensity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomIntensity;
	static void NewProp_bOverride_BloomThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BloomThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Advanced;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360LensBloomSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::NewProp_bOverride_BloomIntensity_SetBit(void* Obj)
{
	((FOWL360LensBloomSettings*)Obj)->bOverride_BloomIntensity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::NewProp_bOverride_BloomIntensity = { "bOverride_BloomIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensBloomSettings), &Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::NewProp_bOverride_BloomIntensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_BloomIntensity_MetaData), NewProp_bOverride_BloomIntensity_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::NewProp_bOverride_BloomThreshold_SetBit(void* Obj)
{
	((FOWL360LensBloomSettings*)Obj)->bOverride_BloomThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::NewProp_bOverride_BloomThreshold = { "bOverride_BloomThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensBloomSettings), &Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::NewProp_bOverride_BloomThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_BloomThreshold_MetaData), NewProp_bOverride_BloomThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensBloomSettings, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensBloomSettings, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Threshold_MetaData), NewProp_Threshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::NewProp_Advanced = { "Advanced", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensBloomSettings, Advanced), Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Advanced_MetaData), NewProp_Advanced_MetaData) }; // 4183588739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::NewProp_bOverride_BloomIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::NewProp_bOverride_BloomThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::NewProp_Threshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::NewProp_Advanced,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360LensBloomSettings",
	Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::PropPointers),
	sizeof(FOWL360LensBloomSettings),
	alignof(FOWL360LensBloomSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360LensBloomSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360LensBloomSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360LensBloomSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360LensBloomSettings.InnerSingleton;
}
// End ScriptStruct FOWL360LensBloomSettings

// Begin ScriptStruct FOWL360LensExposureSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360LensExposureSettings;
class UScriptStruct* FOWL360LensExposureSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360LensExposureSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360LensExposureSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360LensExposureSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360LensExposureSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360LensExposureSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360LensExposureSettings>()
{
	return FOWL360LensExposureSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//USTRUCT(BlueprintType)\n//struct FOWL360LensExposureAdvancedSettings\n//{\n//\x09GENERATED_BODY()\n//\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n//\x09uint8 bOverride_AutoExposureLowPercent : 1;\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n//\x09uint8 bOverride_AutoExposureHighPercent : 1;\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n//\x09uint8 bOverride_HistogramLogMin : 1;\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n//\x09uint8 bOverride_HistogramLogMax : 1;\n//\n//\x09/**\n//\x09 * The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\n//\x09 * The value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\n//\x09 * but can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\n//\x09 * bright spots.\n//\x09 * >0, <100, good values are in the range 70 .. 80\n//\x09 */\n//\x09UPROPERTY(Interp, BlueprintReadWrite, Category = \"Exposure\", AdvancedDisplay, meta = (ClampMin = \"0.0\", ClampMax = \"100.0\", editcondition = \"bOverride_AutoExposureLowPercent\", DisplayName = \"Low Percent\"))\n//\x09""float LowPercent;\n//\x09/**\n//\x09 * The eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\n//\x09 * The value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\n//\x09 * but can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\n//\x09 * bright spots.\n//\x09 * >0, <100, good values are in the range 80 .. 95\n//\x09 */\n//\x09UPROPERTY(Interp, BlueprintReadWrite, Category = \"Exposure\", AdvancedDisplay, meta = (ClampMin = \"0.0\", ClampMax = \"100.0\", editcondition = \"bOverride_AutoExposureHighPercent\", DisplayName = \"High Percent\"))\n//\x09""float HighPercent;\n//\n//\x09/** temporary exposed until we found good values, -8: 1/256, -10: 1/1024 */\n//\x09UPROPERTY(Interp, BlueprintReadWrite, Category = \"Exposure\", AdvancedDisplay, meta = (UIMin = \"-16\", UIMax = \"0.0\", editcondition = \"bOverride_HistogramLogMin\"))\n//\x09""float HistogramLogMin;\n//\n//\x09/** temporary exposed until we found good values 4: 16, 8: 256 */\n//\x09UPROPERTY(Interp, BlueprintReadWrite, Category = \"Exposure\", AdvancedDisplay, meta = (UIMin = \"0.0\", UIMax = \"16.0\", editcondition = \"bOverride_HistogramLogMax\"))\n//\x09""float HistogramLogMax;\n//\n//\x09OWL360CAMERA_API FOWL360LensExposureAdvancedSettings()\n//\x09{\n//\x09\x09""FMemory::Memzero(this, sizeof(FOWL360LensExposureAdvancedSettings));\n//\x09\x09static const auto VarDefaultAutoExposureExtendDefaultLuminanceRange = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT(\"r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange\"));\n//\x09\x09""const bool bExtendedLuminanceRange = VarDefaultAutoExposureExtendDefaultLuminanceRange->GetValueOnAnyThread() == 1;\n//\n//\x09\x09static const auto VarDefaultAutoExposureBias = IConsoleManager::Get().FindTConsoleVariableDataFloat(TEXT(\"r.DefaultFeature.AutoExposure.Bias\"));\n//\x09\x09""const float BaseAutoExposureBias = VarDefaultAutoExposureBias->GetValueOnAnyThread();\n//\n//\x09\x09// next value might get overwritten by r.DefaultFeature.AutoExposure.Method\n//\x09\x09LowPercent = 10.0f;\n//\x09\x09HighPercent = 90.0f;\n//\n//\x09\x09if (bExtendedLuminanceRange)\n//\x09\x09{\n//\x09\x09\x09// When this project setting is set, the following values are in EV100.\n//\x09\x09\x09HistogramLogMin = -10.0f;\n//\x09\x09\x09HistogramLogMax = 20.0f;\n//\x09\x09}\n//\x09\x09""else\n//\x09\x09{\n//\x09\x09\x09HistogramLogMin = -8.0f;\n//\x09\x09\x09HistogramLogMax = 4.0f;\n//\x09\x09}\n//\x09}\n//\n//\x09/* Exports to post process settings with overrides. */\n//\x09OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostPorcessSettings* OutPostProcessSettings) const;\n//};\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FOWL360LensExposureAdvancedSettings\n{\n       GENERATED_BODY()\n\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n       uint8 bOverride_AutoExposureLowPercent : 1;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n       uint8 bOverride_AutoExposureHighPercent : 1;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n       uint8 bOverride_HistogramLogMin : 1;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n       uint8 bOverride_HistogramLogMax : 1;\n\n\nThe eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\nThe value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\nbut can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\nbright spots.\n>0, <100, good values are in the range 70 .. 80\n\n       UPROPERTY(Interp, BlueprintReadWrite, Category = \"Exposure\", AdvancedDisplay, meta = (ClampMin = \"0.0\", ClampMax = \"100.0\", editcondition = \"bOverride_AutoExposureLowPercent\", DisplayName = \"Low Percent\"))\n       float LowPercent;\n\nThe eye adaptation will adapt to a value extracted from the luminance histogram of the scene color.\nThe value is defined as having x percent below this brightness. Higher values give bright spots on the screen more priority\nbut can lead to less stable results. Lower values give the medium and darker values more priority but might cause burn out of\nbright spots.\n>0, <100, good values are in the range 80 .. 95\n\n       UPROPERTY(Interp, BlueprintReadWrite, Category = \"Exposure\", AdvancedDisplay, meta = (ClampMin = \"0.0\", ClampMax = \"100.0\", editcondition = \"bOverride_AutoExposureHighPercent\", DisplayName = \"High Percent\"))\n       float HighPercent;\n\n        temporary exposed until we found good values, -8: 1/256, -10: 1/1024\n       UPROPERTY(Interp, BlueprintReadWrite, Category = \"Exposure\", AdvancedDisplay, meta = (UIMin = \"-16\", UIMax = \"0.0\", editcondition = \"bOverride_HistogramLogMin\"))\n       float HistogramLogMin;\n\n        temporary exposed until we found good values 4: 16, 8: 256\n       UPROPERTY(Interp, BlueprintReadWrite, Category = \"Exposure\", AdvancedDisplay, meta = (UIMin = \"0.0\", UIMax = \"16.0\", editcondition = \"bOverride_HistogramLogMax\"))\n       float HistogramLogMax;\n\n       OWL360CAMERA_API FOWL360LensExposureAdvancedSettings()\n       {\n               FMemory::Memzero(this, sizeof(FOWL360LensExposureAdvancedSettings));\n               static const auto VarDefaultAutoExposureExtendDefaultLuminanceRange = IConsoleManager::Get().FindTConsoleVariableDataInt(TEXT(\"r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange\"));\n               const bool bExtendedLuminanceRange = VarDefaultAutoExposureExtendDefaultLuminanceRange->GetValueOnAnyThread() == 1;\n\n               static const auto VarDefaultAutoExposureBias = IConsoleManager::Get().FindTConsoleVariableDataFloat(TEXT(\"r.DefaultFeature.AutoExposure.Bias\"));\n               const float BaseAutoExposureBias = VarDefaultAutoExposureBias->GetValueOnAnyThread();\n\n                next value might get overwritten by r.DefaultFeature.AutoExposure.Method\n               LowPercent = 10.0f;\n               HighPercent = 90.0f;\n\n               if (bExtendedLuminanceRange)\n               {\n                        When this project setting is set, the following values are in EV100.\n                       HistogramLogMin = -10.0f;\n                       HistogramLogMax = 20.0f;\n               }\n               else\n               {\n                       HistogramLogMin = -8.0f;\n                       HistogramLogMax = 4.0f;\n               }\n       }\n\n        Exports to post process settings with overrides.\n       OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostPorcessSettings* OutPostProcessSettings) const;\n};" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureBias_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n//uint8 bOverride_AutoExposureMethod : 1;\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\nuint8 bOverride_AutoExposureMethod : 1;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AutoExposureBiasCurve_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/**\n\x09 * Logarithmic adjustment for the exposure. Only used if a tonemapper is specified.\n\x09 * 0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ...\n\x09 */" },
		{ "DisplayName", "Exposure Compensation" },
		{ "editcondition", "bOverride_AutoExposureBias" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Logarithmic adjustment for the exposure. Only used if a tonemapper is specified.\n0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ..." },
		{ "UIMax", "16.0" },
		{ "UIMin", "-16.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyPhysicalCameraExposure_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/** Enables physical camera exposure using ShutterSpeed/ISO/Aperture. */" },
		{ "DisplayName", "Apply Physical Camera Exposure" },
		{ "editcondition", "bOverride_AutoExposureApplyPhysicalCameraExposure" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Enables physical camera exposure using ShutterSpeed/ISO/Aperture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiasCurve_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/**\n\x09 * Exposure compensation based on the scene EV100.\n\x09 * Used to calibrate the final exposure differently depending on the average scene luminance.\n\x09 * 0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ...\n\x09 */" },
		{ "DisplayName", "Exposure Compensation Curve" },
		{ "editcondition", "bOverride_AutoExposureBiasCurve" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Exposure compensation based on the scene EV100.\nUsed to calibrate the final exposure differently depending on the average scene luminance.\n0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ..." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_AutoExposureBias_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureBias;
	static void NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure;
	static void NewProp_bOverride_AutoExposureBiasCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AutoExposureBiasCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
	static void NewProp_ApplyPhysicalCameraExposure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyPhysicalCameraExposure;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BiasCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360LensExposureSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_bOverride_AutoExposureBias_SetBit(void* Obj)
{
	((FOWL360LensExposureSettings*)Obj)->bOverride_AutoExposureBias = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_bOverride_AutoExposureBias = { "bOverride_AutoExposureBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensExposureSettings), &Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_bOverride_AutoExposureBias_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AutoExposureBias_MetaData), NewProp_bOverride_AutoExposureBias_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure_SetBit(void* Obj)
{
	((FOWL360LensExposureSettings*)Obj)->bOverride_AutoExposureApplyPhysicalCameraExposure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure = { "bOverride_AutoExposureApplyPhysicalCameraExposure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensExposureSettings), &Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure_MetaData), NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve_SetBit(void* Obj)
{
	((FOWL360LensExposureSettings*)Obj)->bOverride_AutoExposureBiasCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve = { "bOverride_AutoExposureBiasCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensExposureSettings), &Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AutoExposureBiasCurve_MetaData), NewProp_bOverride_AutoExposureBiasCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensExposureSettings, Bias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bias_MetaData), NewProp_Bias_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_ApplyPhysicalCameraExposure_SetBit(void* Obj)
{
	((FOWL360LensExposureSettings*)Obj)->ApplyPhysicalCameraExposure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_ApplyPhysicalCameraExposure = { "ApplyPhysicalCameraExposure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensExposureSettings), &Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_ApplyPhysicalCameraExposure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyPhysicalCameraExposure_MetaData), NewProp_ApplyPhysicalCameraExposure_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_BiasCurve = { "BiasCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensExposureSettings, BiasCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiasCurve_MetaData), NewProp_BiasCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_bOverride_AutoExposureBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_bOverride_AutoExposureApplyPhysicalCameraExposure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_bOverride_AutoExposureBiasCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_Bias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_ApplyPhysicalCameraExposure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewProp_BiasCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360LensExposureSettings",
	Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::PropPointers),
	sizeof(FOWL360LensExposureSettings),
	alignof(FOWL360LensExposureSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360LensExposureSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360LensExposureSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360LensExposureSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360LensExposureSettings.InnerSingleton;
}
// End ScriptStruct FOWL360LensExposureSettings

// Begin ScriptStruct FOWL360LensCameraSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360LensCameraSettings;
class UScriptStruct* FOWL360LensCameraSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360LensCameraSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360LensCameraSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360LensCameraSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360LensCameraSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360LensCameraSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360LensCameraSettings>()
{
	return FOWL360LensCameraSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//USTRUCT(BlueprintType)\n//struct FOWL360LensDirtMaskSettings\n//{\n//\x09GENERATED_BODY()\n//\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n//\x09uint8 bOverride_BloomDirtMask : 1;\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n//\x09uint8 bOverride_BloomDirtMaskIntensity : 1;\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n//\x09uint8 bOverride_BloomDirtMaskTint : 1;\n//\n//\x09/**\n//\x09* Texture that defines the dirt on the camera lens where the light of very bright objects is scattered.\n//\x09*/\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Lens|Dirt Mask\", meta = (editcondition = \"bOverride_BloomDirtMask\", DisplayName = \"Dirt Mask Texture\"))\n//\x09""class UTexture* BloomDirtMask;\n//\n//\x09/** BloomDirtMask intensity */\n//\x09UPROPERTY(interp, BlueprintReadWrite, Category = \"Lens|Dirt Mask\", meta = (ClampMin = \"0.0\", UIMax = \"8.0\", editcondition = \"bOverride_BloomDirtMaskIntensity\", DisplayName = \"Dirt Mask Intensity\"))\n//\x09""float BloomDirtMaskIntensity;\n//\n//\x09/** BloomDirtMask tint color */\n//\x09UPROPERTY(interp, BlueprintReadWrite, Category = \"Lens|Dirt Mask\", meta = (editcondition = \"bOverride_BloomDirtMaskTint\", DisplayName = \"Dirt Mask Tint\", HideAlphaChannel))\n//\x09""FLinearColor BloomDirtMaskTint;\n//\n//\x09OWL360CAMERA_API FOWL360LensDirtMaskSettings()\n//\x09{\n//\x09\x09""FMemory::Memzero(this, sizeof(FOWL360LensDirtMaskSettings));\n//\x09\x09""BloomDirtMask = nullptr;\n//\x09\x09""BloomDirtMaskIntensity = 0;\n//\x09\x09""BloomDirtMaskTint = FLinearColor(0.5f, 0.5f, 0.5f);\n//\x09}\n//\n//\x09/* Exports to post process settings with overrides. */\n//\x09OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostPorcessSettings* OutPostProcessSettings) const;\n//};\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FOWL360LensDirtMaskSettings\n{\n       GENERATED_BODY()\n\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n       uint8 bOverride_BloomDirtMask : 1;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n       uint8 bOverride_BloomDirtMaskIntensity : 1;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n       uint8 bOverride_BloomDirtMaskTint : 1;\n\n\nTexture that defines the dirt on the camera lens where the light of very bright objects is scattered.\n\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Lens|Dirt Mask\", meta = (editcondition = \"bOverride_BloomDirtMask\", DisplayName = \"Dirt Mask Texture\"))\n       class UTexture* BloomDirtMask;\n\n        BloomDirtMask intensity\n       UPROPERTY(interp, BlueprintReadWrite, Category = \"Lens|Dirt Mask\", meta = (ClampMin = \"0.0\", UIMax = \"8.0\", editcondition = \"bOverride_BloomDirtMaskIntensity\", DisplayName = \"Dirt Mask Intensity\"))\n       float BloomDirtMaskIntensity;\n\n        BloomDirtMask tint color\n       UPROPERTY(interp, BlueprintReadWrite, Category = \"Lens|Dirt Mask\", meta = (editcondition = \"bOverride_BloomDirtMaskTint\", DisplayName = \"Dirt Mask Tint\", HideAlphaChannel))\n       FLinearColor BloomDirtMaskTint;\n\n       OWL360CAMERA_API FOWL360LensDirtMaskSettings()\n       {\n               FMemory::Memzero(this, sizeof(FOWL360LensDirtMaskSettings));\n               BloomDirtMask = nullptr;\n               BloomDirtMaskIntensity = 0;\n               BloomDirtMaskTint = FLinearColor(0.5f, 0.5f, 0.5f);\n       }\n\n        Exports to post process settings with overrides.\n       OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostPorcessSettings* OutPostProcessSettings) const;\n};" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_CameraShutterSpeed_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_CameraISO_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFstop_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldMinFstop_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldBladeCount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraShutterSpeed_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** The camera shutter in seconds.*/" },
		{ "DisplayName", "Shutter Speed (1/s)" },
		{ "editcondition", "bOverride_CameraShutterSpeed" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "The camera shutter in seconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraISO_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMin", "1.0" },
		{ "DisplayName", "ISO" },
		{ "editcondition", "bOverride_CameraISO" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "tooltip", "The camera sensor sensitivity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldFstop_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMax", "32.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Defines the opening of the camera lens, Aperture is 1/fstop, typical lens go down to f/1.2 (large opening), larger numbers reduce the DOF effect */" },
		{ "DisplayName", "Aperture (F-stop)" },
		{ "editcondition", "bOverride_DepthOfFieldFstop" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Defines the opening of the camera lens, Aperture is 1/fstop, typical lens go down to f/1.2 (large opening), larger numbers reduce the DOF effect" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldMinFstop_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMax", "32.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Defines the maximum opening of the camera lens to control the curvature of blades of the diaphragm. Set it to 0 to get straight blades. */" },
		{ "DisplayName", "Maximum Aperture (min F-stop)" },
		{ "editcondition", "bOverride_DepthOfFieldMinFstop" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Defines the maximum opening of the camera lens to control the curvature of blades of the diaphragm. Set it to 0 to get straight blades." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfFieldBladeCount_MetaData[] = {
		{ "Category", "Lens|Camera" },
		{ "ClampMax", "16" },
		{ "ClampMin", "4" },
		{ "Comment", "/** Defines the number of blades of the diaphragm within the lens (between 4 and 16). */" },
		{ "DisplayName", "Number of diaphragm blades" },
		{ "editcondition", "bOverride_DepthOfFieldBladeCount" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Defines the number of blades of the diaphragm within the lens (between 4 and 16)." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_CameraShutterSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_CameraShutterSpeed;
	static void NewProp_bOverride_CameraISO_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_CameraISO;
	static void NewProp_bOverride_DepthOfFieldFstop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFstop;
	static void NewProp_bOverride_DepthOfFieldMinFstop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldMinFstop;
	static void NewProp_bOverride_DepthOfFieldBladeCount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldBladeCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraShutterSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraISO;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldFstop;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOfFieldMinFstop;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DepthOfFieldBladeCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360LensCameraSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_CameraShutterSpeed_SetBit(void* Obj)
{
	((FOWL360LensCameraSettings*)Obj)->bOverride_CameraShutterSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_CameraShutterSpeed = { "bOverride_CameraShutterSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensCameraSettings), &Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_CameraShutterSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_CameraShutterSpeed_MetaData), NewProp_bOverride_CameraShutterSpeed_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_CameraISO_SetBit(void* Obj)
{
	((FOWL360LensCameraSettings*)Obj)->bOverride_CameraISO = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_CameraISO = { "bOverride_CameraISO", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensCameraSettings), &Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_CameraISO_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_CameraISO_MetaData), NewProp_bOverride_CameraISO_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_SetBit(void* Obj)
{
	((FOWL360LensCameraSettings*)Obj)->bOverride_DepthOfFieldFstop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_DepthOfFieldFstop = { "bOverride_DepthOfFieldFstop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensCameraSettings), &Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_DepthOfFieldFstop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_DepthOfFieldFstop_MetaData), NewProp_bOverride_DepthOfFieldFstop_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_SetBit(void* Obj)
{
	((FOWL360LensCameraSettings*)Obj)->bOverride_DepthOfFieldMinFstop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop = { "bOverride_DepthOfFieldMinFstop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensCameraSettings), &Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_DepthOfFieldMinFstop_MetaData), NewProp_bOverride_DepthOfFieldMinFstop_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_SetBit(void* Obj)
{
	((FOWL360LensCameraSettings*)Obj)->bOverride_DepthOfFieldBladeCount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount = { "bOverride_DepthOfFieldBladeCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensCameraSettings), &Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_DepthOfFieldBladeCount_MetaData), NewProp_bOverride_DepthOfFieldBladeCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_CameraShutterSpeed = { "CameraShutterSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensCameraSettings, CameraShutterSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraShutterSpeed_MetaData), NewProp_CameraShutterSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_CameraISO = { "CameraISO", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensCameraSettings, CameraISO), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraISO_MetaData), NewProp_CameraISO_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_DepthOfFieldFstop = { "DepthOfFieldFstop", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensCameraSettings, DepthOfFieldFstop), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthOfFieldFstop_MetaData), NewProp_DepthOfFieldFstop_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_DepthOfFieldMinFstop = { "DepthOfFieldMinFstop", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensCameraSettings, DepthOfFieldMinFstop), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthOfFieldMinFstop_MetaData), NewProp_DepthOfFieldMinFstop_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_DepthOfFieldBladeCount = { "DepthOfFieldBladeCount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensCameraSettings, DepthOfFieldBladeCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthOfFieldBladeCount_MetaData), NewProp_DepthOfFieldBladeCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_CameraShutterSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_CameraISO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_DepthOfFieldFstop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_DepthOfFieldMinFstop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_bOverride_DepthOfFieldBladeCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_CameraShutterSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_CameraISO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_DepthOfFieldFstop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_DepthOfFieldMinFstop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewProp_DepthOfFieldBladeCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360LensCameraSettings",
	Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::PropPointers),
	sizeof(FOWL360LensCameraSettings),
	alignof(FOWL360LensCameraSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360LensCameraSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360LensCameraSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360LensCameraSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360LensCameraSettings.InnerSingleton;
}
// End ScriptStruct FOWL360LensCameraSettings

// Begin ScriptStruct FOWL360LensLocalExposureSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360LensLocalExposureSettings;
class UScriptStruct* FOWL360LensLocalExposureSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360LensLocalExposureSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360LensLocalExposureSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360LensLocalExposureSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360LensLocalExposureSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360LensLocalExposureSettings>()
{
	return FOWL360LensLocalExposureSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureHighlightContrastScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureShadowContrastScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureHighlightContrastCurve_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureShadowContrastCurve_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureHighlightThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureShadowThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureDetailStrength_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureBlurredLuminanceBlend_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LocalExposureMiddleGreyBias_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalExposureHighlightContrastScale_MetaData[] = {
		{ "Category", "Lens|Local Exposure" },
		{ "Comment", "/**\n\x09 * Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\n\x09 * Contrast of the base layer is reduced based on this value.\n\x09 * Value less than 1 will enable local exposure.\n\x09 * Good values are usually in the range 0.6 .. 1.0.\n\x09*/" },
		{ "DisplayName", "Contrast Scale" },
		{ "editcondition", "bOverride_LocalExposureContrastScale" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\nContrast of the base layer is reduced based on this value.\nValue less than 1 will enable local exposure.\nGood values are usually in the range 0.6 .. 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalExposureShadowContrastScale_MetaData[] = {
		{ "Category", "Lens|Local Exposure" },
		{ "Comment", "/**\n\x09 * Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\n\x09 * Contrast of the base layer is reduced based on this value.\n\x09 * Value less than 1 will enable local exposure.\n\x09 * Good values are usually in the range 0.6 .. 1.0.\n\x09*/" },
		{ "DisplayName", "Contrast Scale" },
		{ "editcondition", "bOverride_LocalExposureContrastScale" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\nContrast of the base layer is reduced based on this value.\nValue less than 1 will enable local exposure.\nGood values are usually in the range 0.6 .. 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalExposureDetailStrength_MetaData[] = {
		{ "Category", "Lens|Local Exposure" },
		{ "Comment", "/**\n\x09 * Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\n\x09 * Value different than 1 will enable local exposure.\n\x09 * This value should be set to 1 in most cases.\n\x09*/" },
		{ "DisplayName", "Detail Strength" },
		{ "editcondition", "bOverride_LocalExposureDetailStrength" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\nValue different than 1 will enable local exposure.\nThis value should be set to 1 in most cases." },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalExposureBlurredLuminanceBlend_MetaData[] = {
		{ "Category", "Lens|Local Exposure" },
		{ "Comment", "/**\n\x09 * Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\n\x09 * Blend between bilateral filtered and blurred luminance as the base layer.\n\x09 * Blurred luminance helps preserve image appearance and specular highlights, and reduce ringing.\n\x09 * Good values are usually in the range 0.4 .. 0.6\n\x09*/" },
		{ "DisplayName", "Blurred Luminance Blend" },
		{ "editcondition", "bOverride_LocalExposureBlurredLuminanceBlend" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Local Exposure decomposes luminance of the frame into a base layer and a detail layer.\nBlend between bilateral filtered and blurred luminance as the base layer.\nBlurred luminance helps preserve image appearance and specular highlights, and reduce ringing.\nGood values are usually in the range 0.4 .. 0.6" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalExposureBlurredLuminanceKernelSizePercent_MetaData[] = {
		{ "Category", "Lens|Local Exposure" },
		{ "Comment", "/**\n\x09 * Kernel size (percentage of screen) used to blur frame luminance.\n\x09*/" },
		{ "DisplayName", "Blurred Luminance Kernel Size Percent" },
		{ "editcondition", "bOverride_LocalExposureBlurredLuminanceKernelSizePercent" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Kernel size (percentage of screen) used to blur frame luminance." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalExposureMiddleGreyBias_MetaData[] = {
		{ "Category", "Lens|Local Exposure" },
		{ "Comment", "/**\n\x09 * Logarithmic adjustment for the local exposure middle grey.\n\x09 * 0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ...\n\x09 */" },
		{ "DisplayName", "Middle Grey Bias" },
		{ "editcondition", "bOverride_LocalExposureMiddleGreyBias" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Logarithmic adjustment for the local exposure middle grey.\n0: no adjustment, -1:2x darker, -2:4x darker, 1:2x brighter, 2:4x brighter, ..." },
		{ "UIMax", "15.0" },
		{ "UIMin", "-15.0" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_LocalExposureHighlightContrastScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureHighlightContrastScale;
	static void NewProp_bOverride_LocalExposureShadowContrastScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureShadowContrastScale;
	static void NewProp_bOverride_LocalExposureHighlightContrastCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureHighlightContrastCurve;
	static void NewProp_bOverride_LocalExposureShadowContrastCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureShadowContrastCurve;
	static void NewProp_bOverride_LocalExposureHighlightThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureHighlightThreshold;
	static void NewProp_bOverride_LocalExposureShadowThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureShadowThreshold;
	static void NewProp_bOverride_LocalExposureDetailStrength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureDetailStrength;
	static void NewProp_bOverride_LocalExposureBlurredLuminanceBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureBlurredLuminanceBlend;
	static void NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent;
	static void NewProp_bOverride_LocalExposureMiddleGreyBias_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LocalExposureMiddleGreyBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalExposureHighlightContrastScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalExposureShadowContrastScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalExposureDetailStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalExposureBlurredLuminanceBlend;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalExposureBlurredLuminanceKernelSizePercent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalExposureMiddleGreyBias;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360LensLocalExposureSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureHighlightContrastScale_SetBit(void* Obj)
{
	((FOWL360LensLocalExposureSettings*)Obj)->bOverride_LocalExposureHighlightContrastScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureHighlightContrastScale = { "bOverride_LocalExposureHighlightContrastScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensLocalExposureSettings), &Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureHighlightContrastScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LocalExposureHighlightContrastScale_MetaData), NewProp_bOverride_LocalExposureHighlightContrastScale_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureShadowContrastScale_SetBit(void* Obj)
{
	((FOWL360LensLocalExposureSettings*)Obj)->bOverride_LocalExposureShadowContrastScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureShadowContrastScale = { "bOverride_LocalExposureShadowContrastScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensLocalExposureSettings), &Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureShadowContrastScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LocalExposureShadowContrastScale_MetaData), NewProp_bOverride_LocalExposureShadowContrastScale_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureHighlightContrastCurve_SetBit(void* Obj)
{
	((FOWL360LensLocalExposureSettings*)Obj)->bOverride_LocalExposureHighlightContrastCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureHighlightContrastCurve = { "bOverride_LocalExposureHighlightContrastCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensLocalExposureSettings), &Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureHighlightContrastCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LocalExposureHighlightContrastCurve_MetaData), NewProp_bOverride_LocalExposureHighlightContrastCurve_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureShadowContrastCurve_SetBit(void* Obj)
{
	((FOWL360LensLocalExposureSettings*)Obj)->bOverride_LocalExposureShadowContrastCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureShadowContrastCurve = { "bOverride_LocalExposureShadowContrastCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensLocalExposureSettings), &Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureShadowContrastCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LocalExposureShadowContrastCurve_MetaData), NewProp_bOverride_LocalExposureShadowContrastCurve_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureHighlightThreshold_SetBit(void* Obj)
{
	((FOWL360LensLocalExposureSettings*)Obj)->bOverride_LocalExposureHighlightThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureHighlightThreshold = { "bOverride_LocalExposureHighlightThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensLocalExposureSettings), &Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureHighlightThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LocalExposureHighlightThreshold_MetaData), NewProp_bOverride_LocalExposureHighlightThreshold_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureShadowThreshold_SetBit(void* Obj)
{
	((FOWL360LensLocalExposureSettings*)Obj)->bOverride_LocalExposureShadowThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureShadowThreshold = { "bOverride_LocalExposureShadowThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensLocalExposureSettings), &Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureShadowThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LocalExposureShadowThreshold_MetaData), NewProp_bOverride_LocalExposureShadowThreshold_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureDetailStrength_SetBit(void* Obj)
{
	((FOWL360LensLocalExposureSettings*)Obj)->bOverride_LocalExposureDetailStrength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureDetailStrength = { "bOverride_LocalExposureDetailStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensLocalExposureSettings), &Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureDetailStrength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LocalExposureDetailStrength_MetaData), NewProp_bOverride_LocalExposureDetailStrength_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceBlend_SetBit(void* Obj)
{
	((FOWL360LensLocalExposureSettings*)Obj)->bOverride_LocalExposureBlurredLuminanceBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceBlend = { "bOverride_LocalExposureBlurredLuminanceBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensLocalExposureSettings), &Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LocalExposureBlurredLuminanceBlend_MetaData), NewProp_bOverride_LocalExposureBlurredLuminanceBlend_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent_SetBit(void* Obj)
{
	((FOWL360LensLocalExposureSettings*)Obj)->bOverride_LocalExposureBlurredLuminanceKernelSizePercent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent = { "bOverride_LocalExposureBlurredLuminanceKernelSizePercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensLocalExposureSettings), &Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent_MetaData), NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureMiddleGreyBias_SetBit(void* Obj)
{
	((FOWL360LensLocalExposureSettings*)Obj)->bOverride_LocalExposureMiddleGreyBias = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureMiddleGreyBias = { "bOverride_LocalExposureMiddleGreyBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensLocalExposureSettings), &Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureMiddleGreyBias_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LocalExposureMiddleGreyBias_MetaData), NewProp_bOverride_LocalExposureMiddleGreyBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_LocalExposureHighlightContrastScale = { "LocalExposureHighlightContrastScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensLocalExposureSettings, LocalExposureHighlightContrastScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalExposureHighlightContrastScale_MetaData), NewProp_LocalExposureHighlightContrastScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_LocalExposureShadowContrastScale = { "LocalExposureShadowContrastScale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensLocalExposureSettings, LocalExposureShadowContrastScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalExposureShadowContrastScale_MetaData), NewProp_LocalExposureShadowContrastScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_LocalExposureDetailStrength = { "LocalExposureDetailStrength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensLocalExposureSettings, LocalExposureDetailStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalExposureDetailStrength_MetaData), NewProp_LocalExposureDetailStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_LocalExposureBlurredLuminanceBlend = { "LocalExposureBlurredLuminanceBlend", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensLocalExposureSettings, LocalExposureBlurredLuminanceBlend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalExposureBlurredLuminanceBlend_MetaData), NewProp_LocalExposureBlurredLuminanceBlend_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_LocalExposureBlurredLuminanceKernelSizePercent = { "LocalExposureBlurredLuminanceKernelSizePercent", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensLocalExposureSettings, LocalExposureBlurredLuminanceKernelSizePercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalExposureBlurredLuminanceKernelSizePercent_MetaData), NewProp_LocalExposureBlurredLuminanceKernelSizePercent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_LocalExposureMiddleGreyBias = { "LocalExposureMiddleGreyBias", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensLocalExposureSettings, LocalExposureMiddleGreyBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalExposureMiddleGreyBias_MetaData), NewProp_LocalExposureMiddleGreyBias_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureHighlightContrastScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureShadowContrastScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureHighlightContrastCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureShadowContrastCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureHighlightThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureShadowThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureDetailStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureBlurredLuminanceKernelSizePercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_bOverride_LocalExposureMiddleGreyBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_LocalExposureHighlightContrastScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_LocalExposureShadowContrastScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_LocalExposureDetailStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_LocalExposureBlurredLuminanceBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_LocalExposureBlurredLuminanceKernelSizePercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewProp_LocalExposureMiddleGreyBias,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360LensLocalExposureSettings",
	Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::PropPointers),
	sizeof(FOWL360LensLocalExposureSettings),
	alignof(FOWL360LensLocalExposureSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360LensLocalExposureSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360LensLocalExposureSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360LensLocalExposureSettings.InnerSingleton;
}
// End ScriptStruct FOWL360LensLocalExposureSettings

// Begin ScriptStruct FOWL360LensDepthOfFieldSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360LensDepthOfFieldSettings;
class UScriptStruct* FOWL360LensDepthOfFieldSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360LensDepthOfFieldSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360LensDepthOfFieldSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360LensDepthOfFieldSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360LensDepthOfFieldSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360LensDepthOfFieldSettings>()
{
	return FOWL360LensDepthOfFieldSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// USTRUCT(BlueprintType)\n// struct FOWL360LensImageEffectsSettings\n// {\n// \x09GENERATED_BODY()\n//\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n// \x09uint8 bOverride_VignetteIntensity:1;\n//\n// \x09/** 0..1 0=off/no vignette .. 1=strong vignette */\n// \x09UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Image Effects\", meta=(UIMin = \"0.0\", UIMax = \"1.0\", editcondition = \"bOverride_VignetteIntensity\"))\n// \x09""float VignetteIntensity;\n//\n//\n// \x09OWL360CAMERA_API FOWL360LensImageEffectsSettings()\n// \x09{\n// \x09\x09""FMemory::Memzero(this, sizeof(FOWL360LensImageEffectsSettings));\n// \x09\x09VignetteIntensity = 0.4f;\n// \x09}\n//\n// \x09/* Exports to post process settings with overrides. */\n// \x09OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;\n// };\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FOWL360LensImageEffectsSettings\n{\n      GENERATED_BODY()\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Overrides, meta=(PinHiddenByDefault, InlineEditConditionToggle))\n      uint8 bOverride_VignetteIntensity:1;\n\n       0..1 0=off/no vignette .. 1=strong vignette\n      UPROPERTY(interp, BlueprintReadWrite, Category=\"Lens|Image Effects\", meta=(UIMin = \"0.0\", UIMax = \"1.0\", editcondition = \"bOverride_VignetteIntensity\"))\n      float VignetteIntensity;\n\n\n      OWL360CAMERA_API FOWL360LensImageEffectsSettings()\n      {\n              FMemory::Memzero(this, sizeof(FOWL360LensImageEffectsSettings));\n              VignetteIntensity = 0.4f;\n      }\n\n       Exports to post process settings with overrides.\n      OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostProcessSettings* OutPostProcessSettings) const;\n};" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldFocalDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldDepthBlurAmount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldDepthBlurRadius_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DepthOfFieldUseHairDepth_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocalDistance_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Distance in which the Depth of Field effect should be sharp, in unreal units (cm) */" },
		{ "DisplayName", "Focal Distance" },
		{ "editcondition", "bOverride_DepthOfFieldFocalDistance" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Distance in which the Depth of Field effect should be sharp, in unreal units (cm)" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthBlurAmount_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** CircleDOF only: Depth blur km for 50% */" },
		{ "DisplayName", "Depth Blur km for 50%" },
		{ "editcondition", "bOverride_DepthOfFieldDepthBlurAmount" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "CircleDOF only: Depth blur km for 50%" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthBlurRadius_MetaData[] = {
		{ "Category", "Lens|Depth of Field" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** CircleDOF only: Depth blur radius in pixels at 1920x */" },
		{ "DisplayName", "Depth Blur Radius" },
		{ "editcondition", "bOverride_DepthOfFieldDepthBlurRadius" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "CircleDOF only: Depth blur radius in pixels at 1920x" },
		{ "UIMax", "4.0" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_DepthOfFieldFocalDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldFocalDistance;
	static void NewProp_bOverride_DepthOfFieldDepthBlurAmount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldDepthBlurAmount;
	static void NewProp_bOverride_DepthOfFieldDepthBlurRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldDepthBlurRadius;
	static void NewProp_bOverride_DepthOfFieldUseHairDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DepthOfFieldUseHairDepth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FocalDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthBlurAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthBlurRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360LensDepthOfFieldSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_SetBit(void* Obj)
{
	((FOWL360LensDepthOfFieldSettings*)Obj)->bOverride_DepthOfFieldFocalDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance = { "bOverride_DepthOfFieldFocalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensDepthOfFieldSettings), &Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_DepthOfFieldFocalDistance_MetaData), NewProp_bOverride_DepthOfFieldFocalDistance_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_SetBit(void* Obj)
{
	((FOWL360LensDepthOfFieldSettings*)Obj)->bOverride_DepthOfFieldDepthBlurAmount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount = { "bOverride_DepthOfFieldDepthBlurAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensDepthOfFieldSettings), &Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_DepthOfFieldDepthBlurAmount_MetaData), NewProp_bOverride_DepthOfFieldDepthBlurAmount_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_SetBit(void* Obj)
{
	((FOWL360LensDepthOfFieldSettings*)Obj)->bOverride_DepthOfFieldDepthBlurRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius = { "bOverride_DepthOfFieldDepthBlurRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensDepthOfFieldSettings), &Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_DepthOfFieldDepthBlurRadius_MetaData), NewProp_bOverride_DepthOfFieldDepthBlurRadius_MetaData) };
void Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_bOverride_DepthOfFieldUseHairDepth_SetBit(void* Obj)
{
	((FOWL360LensDepthOfFieldSettings*)Obj)->bOverride_DepthOfFieldUseHairDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_bOverride_DepthOfFieldUseHairDepth = { "bOverride_DepthOfFieldUseHairDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360LensDepthOfFieldSettings), &Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_bOverride_DepthOfFieldUseHairDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_DepthOfFieldUseHairDepth_MetaData), NewProp_bOverride_DepthOfFieldUseHairDepth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_FocalDistance = { "FocalDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensDepthOfFieldSettings, FocalDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocalDistance_MetaData), NewProp_FocalDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_DepthBlurAmount = { "DepthBlurAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensDepthOfFieldSettings, DepthBlurAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthBlurAmount_MetaData), NewProp_DepthBlurAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_DepthBlurRadius = { "DepthBlurRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensDepthOfFieldSettings, DepthBlurRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthBlurRadius_MetaData), NewProp_DepthBlurRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_bOverride_DepthOfFieldFocalDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_bOverride_DepthOfFieldDepthBlurRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_bOverride_DepthOfFieldUseHairDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_FocalDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_DepthBlurAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewProp_DepthBlurRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360LensDepthOfFieldSettings",
	Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::PropPointers),
	sizeof(FOWL360LensDepthOfFieldSettings),
	alignof(FOWL360LensDepthOfFieldSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360LensDepthOfFieldSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360LensDepthOfFieldSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360LensDepthOfFieldSettings.InnerSingleton;
}
// End ScriptStruct FOWL360LensDepthOfFieldSettings

// Begin ScriptStruct FOWL360LensSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360LensSettings;
class UScriptStruct* FOWL360LensSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360LensSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360LensSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360LensSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360LensSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360LensSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360LensSettings>()
{
	return FOWL360LensSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360LensSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bloom_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "// UPROPERTY(Interp, BlueprintReadWrite, Category = \"Lens\")\n// FOWL360LensMobileDepthOfFieldSettings MobileDepthOfField;\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "UPROPERTY(Interp, BlueprintReadWrite, Category = \"Lens\")\nFOWL360LensMobileDepthOfFieldSettings MobileDepthOfField;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Exposure_MetaData[] = {
		{ "Category", "Lens" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "//UPROPERTY(Interp, BlueprintReadWrite, Category = \"Lens\")\n//FOWL360LensDirtMaskSettings DirtMask;\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "UPROPERTY(Interp, BlueprintReadWrite, Category = \"Lens\")\nFOWL360LensDirtMaskSettings DirtMask;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalExposure_MetaData[] = {
		{ "Category", "Lens" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DepthOfField_MetaData[] = {
		{ "Category", "Lens" },
		{ "Comment", "// UPROPERTY(Interp, BlueprintReadWrite, Category = \"Lens\")\n// FOWL360LensImageEffectsSettings ImageEffects;\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "UPROPERTY(Interp, BlueprintReadWrite, Category = \"Lens\")\nFOWL360LensImageEffectsSettings ImageEffects;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bloom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Exposure;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalExposure;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DepthOfField;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360LensSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::NewProp_Bloom = { "Bloom", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensSettings, Bloom), Z_Construct_UScriptStruct_FOWL360LensBloomSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bloom_MetaData), NewProp_Bloom_MetaData) }; // 1605351206
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::NewProp_Exposure = { "Exposure", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensSettings, Exposure), Z_Construct_UScriptStruct_FOWL360LensExposureSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Exposure_MetaData), NewProp_Exposure_MetaData) }; // 3881153610
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensSettings, Camera), Z_Construct_UScriptStruct_FOWL360LensCameraSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) }; // 2725567570
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::NewProp_LocalExposure = { "LocalExposure", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensSettings, LocalExposure), Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalExposure_MetaData), NewProp_LocalExposure_MetaData) }; // 2854158559
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::NewProp_DepthOfField = { "DepthOfField", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360LensSettings, DepthOfField), Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DepthOfField_MetaData), NewProp_DepthOfField_MetaData) }; // 1875568256
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::NewProp_Bloom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::NewProp_Exposure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::NewProp_LocalExposure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::NewProp_DepthOfField,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360LensSettings",
	Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::PropPointers),
	sizeof(FOWL360LensSettings),
	alignof(FOWL360LensSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360LensSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360LensSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360LensSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360LensSettings.InnerSingleton;
}
// End ScriptStruct FOWL360LensSettings

// Begin ScriptStruct FOWL360ColorGradingTemperatureSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360ColorGradingTemperatureSettings;
class UScriptStruct* FOWL360ColorGradingTemperatureSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ColorGradingTemperatureSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360ColorGradingTemperatureSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360ColorGradingTemperatureSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360ColorGradingTemperatureSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360ColorGradingTemperatureSettings>()
{
	return FOWL360ColorGradingTemperatureSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// COLOR GRADING SETTINGS\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "COLOR GRADING SETTINGS" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_TemperatureType_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_WhiteTemp_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_WhiteTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemperatureType_MetaData[] = {
		{ "Category", "Color Grading|Temperature" },
		{ "Comment", "/**\n\x09* Selects the type of temperature calculation.\n\x09* White Balance uses the Temperature value to control the virtual camera's White Balance. This is the default selection.\n\x09* Color Temperature uses the Temperature value to adjust the color temperature of the scene, which is the inverse of the White Balance operation.\n\x09*/" },
		{ "DisplayName", "Temperature Type" },
		{ "editcondition", "bOverride_TemperatureType" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Selects the type of temperature calculation.\nWhite Balance uses the Temperature value to control the virtual camera's White Balance. This is the default selection.\nColor Temperature uses the Temperature value to adjust the color temperature of the scene, which is the inverse of the White Balance operation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteTemp_MetaData[] = {
		{ "Category", "Color Grading|Temperature" },
		{ "DisplayName", "Temp" },
		{ "editcondition", "bOverride_WhiteTemp" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "UIMax", "15000.0" },
		{ "UIMin", "1500.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteTint_MetaData[] = {
		{ "Category", "Color Grading|Temperature" },
		{ "DisplayName", "Tint" },
		{ "editcondition", "bOverride_WhiteTint" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_TemperatureType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_TemperatureType;
	static void NewProp_bOverride_WhiteTemp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_WhiteTemp;
	static void NewProp_bOverride_WhiteTint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_WhiteTint;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TemperatureType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhiteTemp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WhiteTint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360ColorGradingTemperatureSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_bOverride_TemperatureType_SetBit(void* Obj)
{
	((FOWL360ColorGradingTemperatureSettings*)Obj)->bOverride_TemperatureType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_bOverride_TemperatureType = { "bOverride_TemperatureType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingTemperatureSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_bOverride_TemperatureType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_TemperatureType_MetaData), NewProp_bOverride_TemperatureType_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_bOverride_WhiteTemp_SetBit(void* Obj)
{
	((FOWL360ColorGradingTemperatureSettings*)Obj)->bOverride_WhiteTemp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_bOverride_WhiteTemp = { "bOverride_WhiteTemp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingTemperatureSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_bOverride_WhiteTemp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_WhiteTemp_MetaData), NewProp_bOverride_WhiteTemp_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_bOverride_WhiteTint_SetBit(void* Obj)
{
	((FOWL360ColorGradingTemperatureSettings*)Obj)->bOverride_WhiteTint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_bOverride_WhiteTint = { "bOverride_WhiteTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingTemperatureSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_bOverride_WhiteTint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_WhiteTint_MetaData), NewProp_bOverride_WhiteTint_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_TemperatureType = { "TemperatureType", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingTemperatureSettings, TemperatureType), Z_Construct_UEnum_Engine_ETemperatureMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemperatureType_MetaData), NewProp_TemperatureType_MetaData) }; // 1414288926
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_WhiteTemp = { "WhiteTemp", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingTemperatureSettings, WhiteTemp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteTemp_MetaData), NewProp_WhiteTemp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_WhiteTint = { "WhiteTint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingTemperatureSettings, WhiteTint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteTint_MetaData), NewProp_WhiteTint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_bOverride_TemperatureType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_bOverride_WhiteTemp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_bOverride_WhiteTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_TemperatureType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_WhiteTemp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewProp_WhiteTint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360ColorGradingTemperatureSettings",
	Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::PropPointers),
	sizeof(FOWL360ColorGradingTemperatureSettings),
	alignof(FOWL360ColorGradingTemperatureSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ColorGradingTemperatureSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360ColorGradingTemperatureSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360ColorGradingTemperatureSettings.InnerSingleton;
}
// End ScriptStruct FOWL360ColorGradingTemperatureSettings

// Begin ScriptStruct FOWL360ColorGradingGlobalSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360ColorGradingGlobalSettings;
class UScriptStruct* FOWL360ColorGradingGlobalSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ColorGradingGlobalSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360ColorGradingGlobalSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360ColorGradingGlobalSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360ColorGradingGlobalSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360ColorGradingGlobalSettings>()
{
	return FOWL360ColorGradingGlobalSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturation_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrast_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGamma_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGain_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffset_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Saturation_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_ColorSaturation" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_ColorContrast" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "editcondition", "bOverride_ColorGamma" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "editcondition", "bOverride_ColorGain" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "editcondition", "bOverride_ColorOffset" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_ColorSaturation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturation;
	static void NewProp_bOverride_ColorContrast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrast;
	static void NewProp_bOverride_ColorGamma_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGamma;
	static void NewProp_bOverride_ColorGain_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGain;
	static void NewProp_bOverride_ColorOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Saturation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Contrast;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gamma;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360ColorGradingGlobalSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorSaturation_SetBit(void* Obj)
{
	((FOWL360ColorGradingGlobalSettings*)Obj)->bOverride_ColorSaturation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorSaturation = { "bOverride_ColorSaturation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingGlobalSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorSaturation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorSaturation_MetaData), NewProp_bOverride_ColorSaturation_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorContrast_SetBit(void* Obj)
{
	((FOWL360ColorGradingGlobalSettings*)Obj)->bOverride_ColorContrast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorContrast = { "bOverride_ColorContrast", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingGlobalSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorContrast_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorContrast_MetaData), NewProp_bOverride_ColorContrast_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorGamma_SetBit(void* Obj)
{
	((FOWL360ColorGradingGlobalSettings*)Obj)->bOverride_ColorGamma = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorGamma = { "bOverride_ColorGamma", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingGlobalSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorGamma_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorGamma_MetaData), NewProp_bOverride_ColorGamma_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorGain_SetBit(void* Obj)
{
	((FOWL360ColorGradingGlobalSettings*)Obj)->bOverride_ColorGain = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorGain = { "bOverride_ColorGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingGlobalSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorGain_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorGain_MetaData), NewProp_bOverride_ColorGain_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorOffset_SetBit(void* Obj)
{
	((FOWL360ColorGradingGlobalSettings*)Obj)->bOverride_ColorOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorOffset = { "bOverride_ColorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingGlobalSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorOffset_MetaData), NewProp_bOverride_ColorOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_Saturation = { "Saturation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingGlobalSettings, Saturation), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Saturation_MetaData), NewProp_Saturation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingGlobalSettings, Contrast), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contrast_MetaData), NewProp_Contrast_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingGlobalSettings, Gamma), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gamma_MetaData), NewProp_Gamma_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingGlobalSettings, Gain), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gain_MetaData), NewProp_Gain_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingGlobalSettings, Offset), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorContrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorGain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_bOverride_ColorOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_Saturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_Contrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_Gamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_Gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360ColorGradingGlobalSettings",
	Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::PropPointers),
	sizeof(FOWL360ColorGradingGlobalSettings),
	alignof(FOWL360ColorGradingGlobalSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ColorGradingGlobalSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360ColorGradingGlobalSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360ColorGradingGlobalSettings.InnerSingleton;
}
// End ScriptStruct FOWL360ColorGradingGlobalSettings

// Begin ScriptStruct FOWL360ColorGradingShadowsSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360ColorGradingShadowsSettings;
class UScriptStruct* FOWL360ColorGradingShadowsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ColorGradingShadowsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360ColorGradingShadowsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360ColorGradingShadowsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360ColorGradingShadowsSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360ColorGradingShadowsSettings>()
{
	return FOWL360ColorGradingShadowsSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturationShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrastShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGammaShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGainShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffsetShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorCorrectionShadowsMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Saturation_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_ColorSaturationShadows" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_ColorContrastShadows" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "editcondition", "bOverride_ColorGammaShadows" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "editcondition", "bOverride_ColorGainShadows" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "editcondition", "bOverride_ColorOffsetShadows" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowsMax_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "DisplayName", "ShadowsMax" },
		{ "editcondition", "bOverride_ColorCorrectionShadowsMax" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_ColorSaturationShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturationShadows;
	static void NewProp_bOverride_ColorContrastShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrastShadows;
	static void NewProp_bOverride_ColorGammaShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGammaShadows;
	static void NewProp_bOverride_ColorGainShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGainShadows;
	static void NewProp_bOverride_ColorOffsetShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffsetShadows;
	static void NewProp_bOverride_ColorCorrectionShadowsMax_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorCorrectionShadowsMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Saturation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Contrast;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gamma;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowsMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360ColorGradingShadowsSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorSaturationShadows_SetBit(void* Obj)
{
	((FOWL360ColorGradingShadowsSettings*)Obj)->bOverride_ColorSaturationShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorSaturationShadows = { "bOverride_ColorSaturationShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingShadowsSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorSaturationShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorSaturationShadows_MetaData), NewProp_bOverride_ColorSaturationShadows_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorContrastShadows_SetBit(void* Obj)
{
	((FOWL360ColorGradingShadowsSettings*)Obj)->bOverride_ColorContrastShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorContrastShadows = { "bOverride_ColorContrastShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingShadowsSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorContrastShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorContrastShadows_MetaData), NewProp_bOverride_ColorContrastShadows_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorGammaShadows_SetBit(void* Obj)
{
	((FOWL360ColorGradingShadowsSettings*)Obj)->bOverride_ColorGammaShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorGammaShadows = { "bOverride_ColorGammaShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingShadowsSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorGammaShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorGammaShadows_MetaData), NewProp_bOverride_ColorGammaShadows_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorGainShadows_SetBit(void* Obj)
{
	((FOWL360ColorGradingShadowsSettings*)Obj)->bOverride_ColorGainShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorGainShadows = { "bOverride_ColorGainShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingShadowsSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorGainShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorGainShadows_MetaData), NewProp_bOverride_ColorGainShadows_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorOffsetShadows_SetBit(void* Obj)
{
	((FOWL360ColorGradingShadowsSettings*)Obj)->bOverride_ColorOffsetShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorOffsetShadows = { "bOverride_ColorOffsetShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingShadowsSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorOffsetShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorOffsetShadows_MetaData), NewProp_bOverride_ColorOffsetShadows_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_SetBit(void* Obj)
{
	((FOWL360ColorGradingShadowsSettings*)Obj)->bOverride_ColorCorrectionShadowsMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax = { "bOverride_ColorCorrectionShadowsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingShadowsSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorCorrectionShadowsMax_MetaData), NewProp_bOverride_ColorCorrectionShadowsMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_Saturation = { "Saturation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingShadowsSettings, Saturation), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Saturation_MetaData), NewProp_Saturation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingShadowsSettings, Contrast), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contrast_MetaData), NewProp_Contrast_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingShadowsSettings, Gamma), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gamma_MetaData), NewProp_Gamma_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingShadowsSettings, Gain), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gain_MetaData), NewProp_Gain_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingShadowsSettings, Offset), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_ShadowsMax = { "ShadowsMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingShadowsSettings, ShadowsMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowsMax_MetaData), NewProp_ShadowsMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorSaturationShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorContrastShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorGammaShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorGainShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorOffsetShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_bOverride_ColorCorrectionShadowsMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_Saturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_Contrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_Gamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_Gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewProp_ShadowsMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360ColorGradingShadowsSettings",
	Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::PropPointers),
	sizeof(FOWL360ColorGradingShadowsSettings),
	alignof(FOWL360ColorGradingShadowsSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ColorGradingShadowsSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360ColorGradingShadowsSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360ColorGradingShadowsSettings.InnerSingleton;
}
// End ScriptStruct FOWL360ColorGradingShadowsSettings

// Begin ScriptStruct FOWL360ColorGradingHighlightsSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360ColorGradingHighlightsSettings;
class UScriptStruct* FOWL360ColorGradingHighlightsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ColorGradingHighlightsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360ColorGradingHighlightsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360ColorGradingHighlightsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360ColorGradingHighlightsSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360ColorGradingHighlightsSettings>()
{
	return FOWL360ColorGradingHighlightsSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturationHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrastHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGammaHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGainHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffsetHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorCorrectionHighlightsMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Saturation_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_ColorSaturationHighlights" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_ColorContrastHighlights" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "editcondition", "bOverride_ColorGammaHighlights" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "editcondition", "bOverride_ColorGainHighlights" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "editcondition", "bOverride_ColorOffsetHighlights" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightsMin_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "DisplayName", "HighlightsMin" },
		{ "editcondition", "bOverride_ColorCorrectionHighlightsMin" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighlightsMax_MetaData[] = {
		{ "Category", "Color Grading|Highlights" },
		{ "Comment", "/** Should be set larger than HighlightsMin. Default is 1.0, for backwards compatibility */" },
		{ "DisplayName", "HighlightsMax" },
		{ "editcondition", "bOverride_ColorCorrectionHighlightsMax" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Should be set larger than HighlightsMin. Default is 1.0, for backwards compatibility" },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_ColorSaturationHighlights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturationHighlights;
	static void NewProp_bOverride_ColorContrastHighlights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrastHighlights;
	static void NewProp_bOverride_ColorGammaHighlights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGammaHighlights;
	static void NewProp_bOverride_ColorGainHighlights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGainHighlights;
	static void NewProp_bOverride_ColorOffsetHighlights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffsetHighlights;
	static void NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorCorrectionHighlightsMin;
	static void NewProp_bOverride_ColorCorrectionHighlightsMax_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorCorrectionHighlightsMax;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Saturation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Contrast;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gamma;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighlightsMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighlightsMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360ColorGradingHighlightsSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_SetBit(void* Obj)
{
	((FOWL360ColorGradingHighlightsSettings*)Obj)->bOverride_ColorSaturationHighlights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorSaturationHighlights = { "bOverride_ColorSaturationHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingHighlightsSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorSaturationHighlights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorSaturationHighlights_MetaData), NewProp_bOverride_ColorSaturationHighlights_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorContrastHighlights_SetBit(void* Obj)
{
	((FOWL360ColorGradingHighlightsSettings*)Obj)->bOverride_ColorContrastHighlights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorContrastHighlights = { "bOverride_ColorContrastHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingHighlightsSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorContrastHighlights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorContrastHighlights_MetaData), NewProp_bOverride_ColorContrastHighlights_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorGammaHighlights_SetBit(void* Obj)
{
	((FOWL360ColorGradingHighlightsSettings*)Obj)->bOverride_ColorGammaHighlights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorGammaHighlights = { "bOverride_ColorGammaHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingHighlightsSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorGammaHighlights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorGammaHighlights_MetaData), NewProp_bOverride_ColorGammaHighlights_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorGainHighlights_SetBit(void* Obj)
{
	((FOWL360ColorGradingHighlightsSettings*)Obj)->bOverride_ColorGainHighlights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorGainHighlights = { "bOverride_ColorGainHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingHighlightsSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorGainHighlights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorGainHighlights_MetaData), NewProp_bOverride_ColorGainHighlights_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_SetBit(void* Obj)
{
	((FOWL360ColorGradingHighlightsSettings*)Obj)->bOverride_ColorOffsetHighlights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorOffsetHighlights = { "bOverride_ColorOffsetHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingHighlightsSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorOffsetHighlights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorOffsetHighlights_MetaData), NewProp_bOverride_ColorOffsetHighlights_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit(void* Obj)
{
	((FOWL360ColorGradingHighlightsSettings*)Obj)->bOverride_ColorCorrectionHighlightsMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin = { "bOverride_ColorCorrectionHighlightsMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingHighlightsSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData), NewProp_bOverride_ColorCorrectionHighlightsMin_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax_SetBit(void* Obj)
{
	((FOWL360ColorGradingHighlightsSettings*)Obj)->bOverride_ColorCorrectionHighlightsMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax = { "bOverride_ColorCorrectionHighlightsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingHighlightsSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorCorrectionHighlightsMax_MetaData), NewProp_bOverride_ColorCorrectionHighlightsMax_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_Saturation = { "Saturation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingHighlightsSettings, Saturation), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Saturation_MetaData), NewProp_Saturation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingHighlightsSettings, Contrast), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contrast_MetaData), NewProp_Contrast_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingHighlightsSettings, Gamma), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gamma_MetaData), NewProp_Gamma_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingHighlightsSettings, Gain), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gain_MetaData), NewProp_Gain_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingHighlightsSettings, Offset), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_HighlightsMin = { "HighlightsMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingHighlightsSettings, HighlightsMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightsMin_MetaData), NewProp_HighlightsMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_HighlightsMax = { "HighlightsMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingHighlightsSettings, HighlightsMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighlightsMax_MetaData), NewProp_HighlightsMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorSaturationHighlights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorContrastHighlights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorGammaHighlights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorGainHighlights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorOffsetHighlights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_bOverride_ColorCorrectionHighlightsMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_Saturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_Contrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_Gamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_Gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_HighlightsMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewProp_HighlightsMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360ColorGradingHighlightsSettings",
	Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::PropPointers),
	sizeof(FOWL360ColorGradingHighlightsSettings),
	alignof(FOWL360ColorGradingHighlightsSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ColorGradingHighlightsSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360ColorGradingHighlightsSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360ColorGradingHighlightsSettings.InnerSingleton;
}
// End ScriptStruct FOWL360ColorGradingHighlightsSettings

// Begin ScriptStruct FOWL360ColorGradingMidtonesSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360ColorGradingMidtonesSettings;
class UScriptStruct* FOWL360ColorGradingMidtonesSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ColorGradingMidtonesSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360ColorGradingMidtonesSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360ColorGradingMidtonesSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360ColorGradingMidtonesSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360ColorGradingMidtonesSettings>()
{
	return FOWL360ColorGradingMidtonesSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorSaturationMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorContrastMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGammaMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorGainMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ColorOffsetMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Saturation_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Saturation" },
		{ "editcondition", "bOverride_ColorSaturationMidtones" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Contrast" },
		{ "editcondition", "bOverride_ColorContrastMidtones" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gamma" },
		{ "editcondition", "bOverride_ColorGammaMidtones" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "gain" },
		{ "Delta", "0.01" },
		{ "DisplayName", "Gain" },
		{ "editcondition", "bOverride_ColorGainMidtones" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ColorGradingMode", "offset" },
		{ "Delta", "0.001" },
		{ "DisplayName", "Offset" },
		{ "editcondition", "bOverride_ColorOffsetMidtones" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_ColorSaturationMidtones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorSaturationMidtones;
	static void NewProp_bOverride_ColorContrastMidtones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorContrastMidtones;
	static void NewProp_bOverride_ColorGammaMidtones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGammaMidtones;
	static void NewProp_bOverride_ColorGainMidtones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorGainMidtones;
	static void NewProp_bOverride_ColorOffsetMidtones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ColorOffsetMidtones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Saturation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Contrast;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gamma;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360ColorGradingMidtonesSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_SetBit(void* Obj)
{
	((FOWL360ColorGradingMidtonesSettings*)Obj)->bOverride_ColorSaturationMidtones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorSaturationMidtones = { "bOverride_ColorSaturationMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingMidtonesSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorSaturationMidtones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorSaturationMidtones_MetaData), NewProp_bOverride_ColorSaturationMidtones_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorContrastMidtones_SetBit(void* Obj)
{
	((FOWL360ColorGradingMidtonesSettings*)Obj)->bOverride_ColorContrastMidtones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorContrastMidtones = { "bOverride_ColorContrastMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingMidtonesSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorContrastMidtones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorContrastMidtones_MetaData), NewProp_bOverride_ColorContrastMidtones_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorGammaMidtones_SetBit(void* Obj)
{
	((FOWL360ColorGradingMidtonesSettings*)Obj)->bOverride_ColorGammaMidtones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorGammaMidtones = { "bOverride_ColorGammaMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingMidtonesSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorGammaMidtones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorGammaMidtones_MetaData), NewProp_bOverride_ColorGammaMidtones_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorGainMidtones_SetBit(void* Obj)
{
	((FOWL360ColorGradingMidtonesSettings*)Obj)->bOverride_ColorGainMidtones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorGainMidtones = { "bOverride_ColorGainMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingMidtonesSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorGainMidtones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorGainMidtones_MetaData), NewProp_bOverride_ColorGainMidtones_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_SetBit(void* Obj)
{
	((FOWL360ColorGradingMidtonesSettings*)Obj)->bOverride_ColorOffsetMidtones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorOffsetMidtones = { "bOverride_ColorOffsetMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingMidtonesSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorOffsetMidtones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ColorOffsetMidtones_MetaData), NewProp_bOverride_ColorOffsetMidtones_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_Saturation = { "Saturation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingMidtonesSettings, Saturation), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Saturation_MetaData), NewProp_Saturation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingMidtonesSettings, Contrast), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contrast_MetaData), NewProp_Contrast_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingMidtonesSettings, Gamma), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gamma_MetaData), NewProp_Gamma_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingMidtonesSettings, Gain), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gain_MetaData), NewProp_Gain_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingMidtonesSettings, Offset), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorSaturationMidtones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorContrastMidtones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorGammaMidtones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorGainMidtones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_bOverride_ColorOffsetMidtones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_Saturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_Contrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_Gamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_Gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360ColorGradingMidtonesSettings",
	Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::PropPointers),
	sizeof(FOWL360ColorGradingMidtonesSettings),
	alignof(FOWL360ColorGradingMidtonesSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ColorGradingMidtonesSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360ColorGradingMidtonesSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360ColorGradingMidtonesSettings.InnerSingleton;
}
// End ScriptStruct FOWL360ColorGradingMidtonesSettings

// Begin ScriptStruct FOWL360ColorGradingMiscSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360ColorGradingMiscSettings;
class UScriptStruct* FOWL360ColorGradingMiscSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ColorGradingMiscSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360ColorGradingMiscSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360ColorGradingMiscSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360ColorGradingMiscSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360ColorGradingMiscSettings>()
{
	return FOWL360ColorGradingMiscSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ExpandGamut_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n//uint8 bOverride_BlueCorrection : 1;\n" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\nuint8 bOverride_BlueCorrection : 1;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ToneCurveAmount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_SceneColorTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpandGamut_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Expand bright saturated colors outside the sRGB gamut to fake wide gamut rendering. */" },
		{ "editcondition", "bOverride_ExpandGamut" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Expand bright saturated colors outside the sRGB gamut to fake wide gamut rendering." },
		{ "UIMax", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToneCurveAmount_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Allow effect of Tone Curve to be reduced (Set ToneCurveAmount and ExpandGamut to 0.0 to fully disable tone curve) */" },
		{ "editcondition", "bOverride_ToneCurveAmount" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Allow effect of Tone Curve to be reduced (Set ToneCurveAmount and ExpandGamut to 0.0 to fully disable tone curve)" },
		{ "UIMax", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneColorTint_MetaData[] = {
		{ "Category", "Color Grading|Misc" },
		{ "Comment", "/** Scene tint color */" },
		{ "editcondition", "bOverride_SceneColorTint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Scene tint color" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_ExpandGamut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ExpandGamut;
	static void NewProp_bOverride_ToneCurveAmount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ToneCurveAmount;
	static void NewProp_bOverride_SceneColorTint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_SceneColorTint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpandGamut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ToneCurveAmount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SceneColorTint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360ColorGradingMiscSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_bOverride_ExpandGamut_SetBit(void* Obj)
{
	((FOWL360ColorGradingMiscSettings*)Obj)->bOverride_ExpandGamut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_bOverride_ExpandGamut = { "bOverride_ExpandGamut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingMiscSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_bOverride_ExpandGamut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ExpandGamut_MetaData), NewProp_bOverride_ExpandGamut_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_bOverride_ToneCurveAmount_SetBit(void* Obj)
{
	((FOWL360ColorGradingMiscSettings*)Obj)->bOverride_ToneCurveAmount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_bOverride_ToneCurveAmount = { "bOverride_ToneCurveAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingMiscSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_bOverride_ToneCurveAmount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ToneCurveAmount_MetaData), NewProp_bOverride_ToneCurveAmount_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_bOverride_SceneColorTint_SetBit(void* Obj)
{
	((FOWL360ColorGradingMiscSettings*)Obj)->bOverride_SceneColorTint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_bOverride_SceneColorTint = { "bOverride_SceneColorTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ColorGradingMiscSettings), &Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_bOverride_SceneColorTint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_SceneColorTint_MetaData), NewProp_bOverride_SceneColorTint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_ExpandGamut = { "ExpandGamut", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingMiscSettings, ExpandGamut), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpandGamut_MetaData), NewProp_ExpandGamut_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_ToneCurveAmount = { "ToneCurveAmount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingMiscSettings, ToneCurveAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToneCurveAmount_MetaData), NewProp_ToneCurveAmount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_SceneColorTint = { "SceneColorTint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingMiscSettings, SceneColorTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneColorTint_MetaData), NewProp_SceneColorTint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_bOverride_ExpandGamut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_bOverride_ToneCurveAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_bOverride_SceneColorTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_ExpandGamut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_ToneCurveAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewProp_SceneColorTint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360ColorGradingMiscSettings",
	Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::PropPointers),
	sizeof(FOWL360ColorGradingMiscSettings),
	alignof(FOWL360ColorGradingMiscSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ColorGradingMiscSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360ColorGradingMiscSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360ColorGradingMiscSettings.InnerSingleton;
}
// End ScriptStruct FOWL360ColorGradingMiscSettings

// Begin ScriptStruct FOWL360ColorGradingSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360ColorGradingSettings;
class UScriptStruct* FOWL360ColorGradingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ColorGradingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360ColorGradingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360ColorGradingSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360ColorGradingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360ColorGradingSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360ColorGradingSettings>()
{
	return FOWL360ColorGradingSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Global_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shadows_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Midtones_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Highlights_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Misc_MetaData[] = {
		{ "Category", "Color Grading" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Global;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Shadows;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Midtones;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Highlights;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Misc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360ColorGradingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingSettings, Temperature), Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) }; // 3666829767
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingSettings, Global), Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Global_MetaData), NewProp_Global_MetaData) }; // 1740672498
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::NewProp_Shadows = { "Shadows", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingSettings, Shadows), Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shadows_MetaData), NewProp_Shadows_MetaData) }; // 3422532670
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::NewProp_Midtones = { "Midtones", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingSettings, Midtones), Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Midtones_MetaData), NewProp_Midtones_MetaData) }; // 3163529758
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::NewProp_Highlights = { "Highlights", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingSettings, Highlights), Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Highlights_MetaData), NewProp_Highlights_MetaData) }; // 505145942
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::NewProp_Misc = { "Misc", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ColorGradingSettings, Misc), Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Misc_MetaData), NewProp_Misc_MetaData) }; // 4077663585
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::NewProp_Global,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::NewProp_Shadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::NewProp_Midtones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::NewProp_Highlights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::NewProp_Misc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360ColorGradingSettings",
	Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::PropPointers),
	sizeof(FOWL360ColorGradingSettings),
	alignof(FOWL360ColorGradingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360ColorGradingSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ColorGradingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360ColorGradingSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360ColorGradingSettings.InnerSingleton;
}
// End ScriptStruct FOWL360ColorGradingSettings

// Begin ScriptStruct FOWL360GlobalIlluminationLumenAdvancedSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationLumenAdvancedSettings;
class UScriptStruct* FOWL360GlobalIlluminationLumenAdvancedSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationLumenAdvancedSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationLumenAdvancedSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360GlobalIlluminationLumenAdvancedSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationLumenAdvancedSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360GlobalIlluminationLumenAdvancedSettings>()
{
	return FOWL360GlobalIlluminationLumenAdvancedSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//USTRUCT(BlueprintType)\n//struct FOWL360FilmSettings\n//{\n//\x09GENERATED_BODY()\n//\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n//\x09uint8 bOverride_FilmSlope : 1;\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n//\x09uint8 bOverride_FilmToe : 1;\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n//\x09uint8 bOverride_FilmShoulder : 1;\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n//\x09uint8 bOverride_FilmBlackClip : 1;\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n//\x09uint8 bOverride_FilmWhiteClip : 1;\n//\n//\x09UPROPERTY(Interp, BlueprintReadWrite, Category = \"Film Stock\", meta = (UIMin = \"0.0\", UIMax = \"1.0\", editcondition = \"bOverride_FilmSlope\", DisplayName = \"Slope\"))\n//\x09""float Slope;\n//\x09UPROPERTY(Interp, BlueprintReadWrite, Category = \"Film Stock\", meta = (UIMin = \"0.0\", UIMax = \"1.0\", editcondition = \"bOverride_FilmToe\", DisplayName = \"Toe\"))\n//\x09""float Toe;\n//\x09UPROPERTY(Interp, BlueprintReadWrite, Category = \"Film Stock\", meta = (UIMin = \"0.0\", UIMax = \"1.0\", editcondition = \"bOverride_FilmShoulder\", DisplayName = \"Shoulder\"))\n//\x09""float Shoulder;\n//\x09UPROPERTY(Interp, BlueprintReadWrite, Category = \"Film Stock\", meta = (UIMin = \"0.0\", UIMax = \"1.0\", editcondition = \"bOverride_FilmBlackClip\", DisplayName = \"Black clip\"))\n//\x09""float BlackClip;\n//\x09UPROPERTY(Interp, BlueprintReadWrite, Category = \"Film Stock\", meta = (UIMin = \"0.0\", UIMax = \"1.0\", editcondition = \"bOverride_FilmWhiteClip\", DisplayName = \"White clip\"))\n//\x09""float WhiteClip;\n//\n//\x09""FOWL360FilmSettings()\n//\x09{\n//\x09\x09""FMemory::Memzero(this, sizeof(FOWL360FilmSettings));\n//\x09\x09Slope = 0.88f;\n//\x09\x09Toe = 0.55f;\n//\x09\x09Shoulder = 0.26f;\n//\x09\x09""BlackClip = 0.0f;\n//\x09\x09WhiteClip = 0.04f;\n//\x09}\n//\n//\x09/* Exports to post process settings with overrides. */\n//\x09OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostPorcessSettings* OutPostProcessSettings) const;\n//};\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FOWL360FilmSettings\n{\n       GENERATED_BODY()\n\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n       uint8 bOverride_FilmSlope : 1;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n       uint8 bOverride_FilmToe : 1;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n       uint8 bOverride_FilmShoulder : 1;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n       uint8 bOverride_FilmBlackClip : 1;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Overrides, meta = (PinHiddenByDefault, InlineEditConditionToggle))\n       uint8 bOverride_FilmWhiteClip : 1;\n\n       UPROPERTY(Interp, BlueprintReadWrite, Category = \"Film Stock\", meta = (UIMin = \"0.0\", UIMax = \"1.0\", editcondition = \"bOverride_FilmSlope\", DisplayName = \"Slope\"))\n       float Slope;\n       UPROPERTY(Interp, BlueprintReadWrite, Category = \"Film Stock\", meta = (UIMin = \"0.0\", UIMax = \"1.0\", editcondition = \"bOverride_FilmToe\", DisplayName = \"Toe\"))\n       float Toe;\n       UPROPERTY(Interp, BlueprintReadWrite, Category = \"Film Stock\", meta = (UIMin = \"0.0\", UIMax = \"1.0\", editcondition = \"bOverride_FilmShoulder\", DisplayName = \"Shoulder\"))\n       float Shoulder;\n       UPROPERTY(Interp, BlueprintReadWrite, Category = \"Film Stock\", meta = (UIMin = \"0.0\", UIMax = \"1.0\", editcondition = \"bOverride_FilmBlackClip\", DisplayName = \"Black clip\"))\n       float BlackClip;\n       UPROPERTY(Interp, BlueprintReadWrite, Category = \"Film Stock\", meta = (UIMin = \"0.0\", UIMax = \"1.0\", editcondition = \"bOverride_FilmWhiteClip\", DisplayName = \"White clip\"))\n       float WhiteClip;\n\n       FOWL360FilmSettings()\n       {\n               FMemory::Memzero(this, sizeof(FOWL360FilmSettings));\n               Slope = 0.88f;\n               Toe = 0.55f;\n               Shoulder = 0.26f;\n               BlackClip = 0.0f;\n               WhiteClip = 0.04f;\n       }\n\n        Exports to post process settings with overrides.\n       OWL360CAMERA_API void ExportToPostProcessSettings(FOWL360PostPorcessSettings* OutPostProcessSettings) const;\n};" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenSceneLightingUpdateSpeed_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenFinalGatherScreenTraces_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenSceneLightingUpdateSpeed_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMin", ".5" },
		{ "Comment", "/** Controls how much Lumen Scene is allowed to cache lighting results to improve performance.  Larger scales cause lighting changes to propagate faster, but increase GPU cost. */" },
		{ "DisplayName", "Lumen Scene Lighting Update Speed" },
		{ "editcondition", "bOverride_LumenSceneLightingUpdateSpeed" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Controls how much Lumen Scene is allowed to cache lighting results to improve performance.  Larger scales cause lighting changes to propagate faster, but increase GPU cost." },
		{ "UIMax", "4" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenFinalGatherScreenTraces_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "Comment", "/** Whether to use screen space traces for Lumen Global Illumination. Screen space traces bypass Lumen Scene and instead sample Scene Depth and Color. This improves quality, but at the same time prevents from Lumen Scene only changes like adding emissive objects, which are visible only in Global Illumination. */" },
		{ "DisplayName", "Screen Traces" },
		{ "editcondition", "bOverride_LumenFinalGatherScreenTraces" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Whether to use screen space traces for Lumen Global Illumination. Screen space traces bypass Lumen Scene and instead sample Scene Depth and Color. This improves quality, but at the same time prevents from Lumen Scene only changes like adding emissive objects, which are visible only in Global Illumination." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenFinalGatherLightingUpdateSpeed_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMin", ".5" },
		{ "Comment", "/** Controls how much Lumen Final Gather is allowed to cache lighting results to improve performance.  Larger scales cause lighting changes to propagate faster, but increase GPU cost and noise. */" },
		{ "DisplayName", "Final Gather Lighting Update Speed" },
		{ "editcondition", "bOverride_LumenFinalGatherLightingUpdateSpeed" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Controls how much Lumen Final Gather is allowed to cache lighting results to improve performance.  Larger scales cause lighting changes to propagate faster, but increase GPU cost and noise." },
		{ "UIMax", "4" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_LumenSceneLightingUpdateSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenSceneLightingUpdateSpeed;
	static void NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed;
	static void NewProp_bOverride_LumenFinalGatherScreenTraces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenFinalGatherScreenTraces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenSceneLightingUpdateSpeed;
	static void NewProp_LumenFinalGatherScreenTraces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LumenFinalGatherScreenTraces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenFinalGatherLightingUpdateSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360GlobalIlluminationLumenAdvancedSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_bOverride_LumenSceneLightingUpdateSpeed_SetBit(void* Obj)
{
	((FOWL360GlobalIlluminationLumenAdvancedSettings*)Obj)->bOverride_LumenSceneLightingUpdateSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_bOverride_LumenSceneLightingUpdateSpeed = { "bOverride_LumenSceneLightingUpdateSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360GlobalIlluminationLumenAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_bOverride_LumenSceneLightingUpdateSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LumenSceneLightingUpdateSpeed_MetaData), NewProp_bOverride_LumenSceneLightingUpdateSpeed_MetaData) };
void Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed_SetBit(void* Obj)
{
	((FOWL360GlobalIlluminationLumenAdvancedSettings*)Obj)->bOverride_LumenFinalGatherLightingUpdateSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed = { "bOverride_LumenFinalGatherLightingUpdateSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360GlobalIlluminationLumenAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed_MetaData), NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed_MetaData) };
void Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_bOverride_LumenFinalGatherScreenTraces_SetBit(void* Obj)
{
	((FOWL360GlobalIlluminationLumenAdvancedSettings*)Obj)->bOverride_LumenFinalGatherScreenTraces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_bOverride_LumenFinalGatherScreenTraces = { "bOverride_LumenFinalGatherScreenTraces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360GlobalIlluminationLumenAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_bOverride_LumenFinalGatherScreenTraces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LumenFinalGatherScreenTraces_MetaData), NewProp_bOverride_LumenFinalGatherScreenTraces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_LumenSceneLightingUpdateSpeed = { "LumenSceneLightingUpdateSpeed", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360GlobalIlluminationLumenAdvancedSettings, LumenSceneLightingUpdateSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenSceneLightingUpdateSpeed_MetaData), NewProp_LumenSceneLightingUpdateSpeed_MetaData) };
void Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_LumenFinalGatherScreenTraces_SetBit(void* Obj)
{
	((FOWL360GlobalIlluminationLumenAdvancedSettings*)Obj)->LumenFinalGatherScreenTraces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_LumenFinalGatherScreenTraces = { "LumenFinalGatherScreenTraces", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360GlobalIlluminationLumenAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_LumenFinalGatherScreenTraces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenFinalGatherScreenTraces_MetaData), NewProp_LumenFinalGatherScreenTraces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_LumenFinalGatherLightingUpdateSpeed = { "LumenFinalGatherLightingUpdateSpeed", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360GlobalIlluminationLumenAdvancedSettings, LumenFinalGatherLightingUpdateSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenFinalGatherLightingUpdateSpeed_MetaData), NewProp_LumenFinalGatherLightingUpdateSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_bOverride_LumenSceneLightingUpdateSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_bOverride_LumenFinalGatherLightingUpdateSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_bOverride_LumenFinalGatherScreenTraces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_LumenSceneLightingUpdateSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_LumenFinalGatherScreenTraces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewProp_LumenFinalGatherLightingUpdateSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360GlobalIlluminationLumenAdvancedSettings",
	Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::PropPointers),
	sizeof(FOWL360GlobalIlluminationLumenAdvancedSettings),
	alignof(FOWL360GlobalIlluminationLumenAdvancedSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationLumenAdvancedSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationLumenAdvancedSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationLumenAdvancedSettings.InnerSingleton;
}
// End ScriptStruct FOWL360GlobalIlluminationLumenAdvancedSettings

// Begin ScriptStruct FOWL360GlobalIlluminationLumenSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationLumenSettings;
class UScriptStruct* FOWL360GlobalIlluminationLumenSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationLumenSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationLumenSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360GlobalIlluminationLumenSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationLumenSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360GlobalIlluminationLumenSettings>()
{
	return FOWL360GlobalIlluminationLumenSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// GLOBAL ILLUMINATION SETTINGS\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "GLOBAL ILLUMINATION SETTINGS" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenSceneLightingQuality_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenSceneDetail_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenSceneViewDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenFinalGatherQuality_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenMaxTraceDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenSceneLightingQuality_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMin", ".25" },
		{ "Comment", "/** Scales Lumen Scene's quality.  Larger scales cause Lumen Scene to be calculated with a higher fidelity, which can be visible in reflections, but increase GPU cost. */" },
		{ "DisplayName", "Lumen Scene Lighting Quality" },
		{ "editcondition", "bOverride_LumenSceneLightingQuality" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Scales Lumen Scene's quality.  Larger scales cause Lumen Scene to be calculated with a higher fidelity, which can be visible in reflections, but increase GPU cost." },
		{ "UIMax", "2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenSceneDetail_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMin", ".25" },
		{ "Comment", "/** Controls the size of instances that can be represented in Lumen Scene.  Larger values will ensure small objects are represented, but increase GPU cost. */" },
		{ "DisplayName", "Lumen Scene Detail" },
		{ "editcondition", "bOverride_LumenSceneDetail" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Controls the size of instances that can be represented in Lumen Scene.  Larger values will ensure small objects are represented, but increase GPU cost." },
		{ "UIMax", "4" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenSceneViewDistance_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Sets the maximum view distance of the scene that Lumen maintains for ray tracing against.  Larger values will increase the effective range of sky shadowing and Global Illumination, but increase GPU cost. */" },
		{ "DisplayName", "Lumen Scene View Distance" },
		{ "editcondition", "bOverride_LumenSceneViewDistance" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Sets the maximum view distance of the scene that Lumen maintains for ray tracing against.  Larger values will increase the effective range of sky shadowing and Global Illumination, but increase GPU cost." },
		{ "UIMax", "2097152" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenFinalGatherQuality_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMin", ".25" },
		{ "Comment", "/** Scales Lumen's Final Gather quality.  Larger scales reduce noise, but greatly increase GPU cost. */" },
		{ "DisplayName", "Final Gather Quality" },
		{ "editcondition", "bOverride_LumenFinalGatherQuality" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Scales Lumen's Final Gather quality.  Larger scales reduce noise, but greatly increase GPU cost." },
		{ "UIMax", "2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenMaxTraceDistance_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Controls the maximum distance that Lumen should trace while solving lighting.  Values that are too small will cause lighting to leak into large caves, while values that are large will increase GPU cost. */" },
		{ "DisplayName", "Max Trace Distance" },
		{ "editcondition", "bOverride_LumenMaxTraceDistance" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Controls the maximum distance that Lumen should trace while solving lighting.  Values that are too small will cause lighting to leak into large caves, while values that are large will increase GPU cost." },
		{ "UIMax", "2097152" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Advanced_MetaData[] = {
		{ "Category", "Global Illumination|Lumen Global Illumination" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_LumenSceneLightingQuality_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenSceneLightingQuality;
	static void NewProp_bOverride_LumenSceneDetail_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenSceneDetail;
	static void NewProp_bOverride_LumenSceneViewDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenSceneViewDistance;
	static void NewProp_bOverride_LumenFinalGatherQuality_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenFinalGatherQuality;
	static void NewProp_bOverride_LumenMaxTraceDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenMaxTraceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenSceneLightingQuality;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenSceneDetail;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenSceneViewDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenFinalGatherQuality;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenMaxTraceDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Advanced;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360GlobalIlluminationLumenSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenSceneLightingQuality_SetBit(void* Obj)
{
	((FOWL360GlobalIlluminationLumenSettings*)Obj)->bOverride_LumenSceneLightingQuality = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenSceneLightingQuality = { "bOverride_LumenSceneLightingQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360GlobalIlluminationLumenSettings), &Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenSceneLightingQuality_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LumenSceneLightingQuality_MetaData), NewProp_bOverride_LumenSceneLightingQuality_MetaData) };
void Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenSceneDetail_SetBit(void* Obj)
{
	((FOWL360GlobalIlluminationLumenSettings*)Obj)->bOverride_LumenSceneDetail = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenSceneDetail = { "bOverride_LumenSceneDetail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360GlobalIlluminationLumenSettings), &Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenSceneDetail_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LumenSceneDetail_MetaData), NewProp_bOverride_LumenSceneDetail_MetaData) };
void Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenSceneViewDistance_SetBit(void* Obj)
{
	((FOWL360GlobalIlluminationLumenSettings*)Obj)->bOverride_LumenSceneViewDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenSceneViewDistance = { "bOverride_LumenSceneViewDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360GlobalIlluminationLumenSettings), &Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenSceneViewDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LumenSceneViewDistance_MetaData), NewProp_bOverride_LumenSceneViewDistance_MetaData) };
void Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenFinalGatherQuality_SetBit(void* Obj)
{
	((FOWL360GlobalIlluminationLumenSettings*)Obj)->bOverride_LumenFinalGatherQuality = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenFinalGatherQuality = { "bOverride_LumenFinalGatherQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360GlobalIlluminationLumenSettings), &Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenFinalGatherQuality_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LumenFinalGatherQuality_MetaData), NewProp_bOverride_LumenFinalGatherQuality_MetaData) };
void Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenMaxTraceDistance_SetBit(void* Obj)
{
	((FOWL360GlobalIlluminationLumenSettings*)Obj)->bOverride_LumenMaxTraceDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenMaxTraceDistance = { "bOverride_LumenMaxTraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360GlobalIlluminationLumenSettings), &Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenMaxTraceDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LumenMaxTraceDistance_MetaData), NewProp_bOverride_LumenMaxTraceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_LumenSceneLightingQuality = { "LumenSceneLightingQuality", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360GlobalIlluminationLumenSettings, LumenSceneLightingQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenSceneLightingQuality_MetaData), NewProp_LumenSceneLightingQuality_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_LumenSceneDetail = { "LumenSceneDetail", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360GlobalIlluminationLumenSettings, LumenSceneDetail), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenSceneDetail_MetaData), NewProp_LumenSceneDetail_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_LumenSceneViewDistance = { "LumenSceneViewDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360GlobalIlluminationLumenSettings, LumenSceneViewDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenSceneViewDistance_MetaData), NewProp_LumenSceneViewDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_LumenFinalGatherQuality = { "LumenFinalGatherQuality", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360GlobalIlluminationLumenSettings, LumenFinalGatherQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenFinalGatherQuality_MetaData), NewProp_LumenFinalGatherQuality_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_LumenMaxTraceDistance = { "LumenMaxTraceDistance", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360GlobalIlluminationLumenSettings, LumenMaxTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenMaxTraceDistance_MetaData), NewProp_LumenMaxTraceDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_Advanced = { "Advanced", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360GlobalIlluminationLumenSettings, Advanced), Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Advanced_MetaData), NewProp_Advanced_MetaData) }; // 1737749872
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenSceneLightingQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenSceneDetail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenSceneViewDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenFinalGatherQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_bOverride_LumenMaxTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_LumenSceneLightingQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_LumenSceneDetail,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_LumenSceneViewDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_LumenFinalGatherQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_LumenMaxTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewProp_Advanced,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360GlobalIlluminationLumenSettings",
	Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::PropPointers),
	sizeof(FOWL360GlobalIlluminationLumenSettings),
	alignof(FOWL360GlobalIlluminationLumenSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationLumenSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationLumenSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationLumenSettings.InnerSingleton;
}
// End ScriptStruct FOWL360GlobalIlluminationLumenSettings

// Begin ScriptStruct FOWL360GlobalIlluminationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationSettings;
class UScriptStruct* FOWL360GlobalIlluminationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360GlobalIlluminationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360GlobalIlluminationSettings>()
{
	return FOWL360GlobalIlluminationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_DynamicGlobalIlluminationMethod_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_IndirectLightingColor_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_IndirectLightingIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicGlobalIlluminationMethod_MetaData[] = {
		{ "Category", "Global Illumination" },
		{ "Comment", "/** Chooses the Dynamic Global Illumination method. */" },
		{ "DisplayName", "Method" },
		{ "editcondition", "bOverride_DynamicGlobalIlluminationMethod" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Chooses the Dynamic Global Illumination method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingColor_MetaData[] = {
		{ "Category", "Global Illumination" },
		{ "Comment", "/** Adjusts indirect lighting color. (1,1,1) is default. (0,0,0) to disable GI. The show flag 'Global Illumination' must be enabled to use this property. */" },
		{ "DisplayName", "Indirect Lighting Color" },
		{ "editcondition", "bOverride_IndirectLightingColor" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Adjusts indirect lighting color. (1,1,1) is default. (0,0,0) to disable GI. The show flag 'Global Illumination' must be enabled to use this property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingIntensity_MetaData[] = {
		{ "Category", "Global Illumination" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Scales the indirect lighting contribution. A value of 0 disables GI. Default is 1. The show flag 'Global Illumination' must be enabled to use this property. */" },
		{ "DisplayName", "Indirect Lighting Intensity" },
		{ "editcondition", "bOverride_IndirectLightingIntensity" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Scales the indirect lighting contribution. A value of 0 disables GI. Default is 1. The show flag 'Global Illumination' must be enabled to use this property." },
		{ "UIMax", "4.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lumen_MetaData[] = {
		{ "Category", "Global Illumination|Lumen" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_DynamicGlobalIlluminationMethod_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_DynamicGlobalIlluminationMethod;
	static void NewProp_bOverride_IndirectLightingColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_IndirectLightingColor;
	static void NewProp_bOverride_IndirectLightingIntensity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_IndirectLightingIntensity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DynamicGlobalIlluminationMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IndirectLightingColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingIntensity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Lumen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360GlobalIlluminationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_bOverride_DynamicGlobalIlluminationMethod_SetBit(void* Obj)
{
	((FOWL360GlobalIlluminationSettings*)Obj)->bOverride_DynamicGlobalIlluminationMethod = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_bOverride_DynamicGlobalIlluminationMethod = { "bOverride_DynamicGlobalIlluminationMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360GlobalIlluminationSettings), &Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_bOverride_DynamicGlobalIlluminationMethod_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_DynamicGlobalIlluminationMethod_MetaData), NewProp_bOverride_DynamicGlobalIlluminationMethod_MetaData) };
void Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_bOverride_IndirectLightingColor_SetBit(void* Obj)
{
	((FOWL360GlobalIlluminationSettings*)Obj)->bOverride_IndirectLightingColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_bOverride_IndirectLightingColor = { "bOverride_IndirectLightingColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360GlobalIlluminationSettings), &Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_bOverride_IndirectLightingColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_IndirectLightingColor_MetaData), NewProp_bOverride_IndirectLightingColor_MetaData) };
void Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_SetBit(void* Obj)
{
	((FOWL360GlobalIlluminationSettings*)Obj)->bOverride_IndirectLightingIntensity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_bOverride_IndirectLightingIntensity = { "bOverride_IndirectLightingIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360GlobalIlluminationSettings), &Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_bOverride_IndirectLightingIntensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_IndirectLightingIntensity_MetaData), NewProp_bOverride_IndirectLightingIntensity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_DynamicGlobalIlluminationMethod = { "DynamicGlobalIlluminationMethod", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360GlobalIlluminationSettings, DynamicGlobalIlluminationMethod), Z_Construct_UEnum_Engine_EDynamicGlobalIlluminationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicGlobalIlluminationMethod_MetaData), NewProp_DynamicGlobalIlluminationMethod_MetaData) }; // 2546568098
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_IndirectLightingColor = { "IndirectLightingColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360GlobalIlluminationSettings, IndirectLightingColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndirectLightingColor_MetaData), NewProp_IndirectLightingColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_IndirectLightingIntensity = { "IndirectLightingIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360GlobalIlluminationSettings, IndirectLightingIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndirectLightingIntensity_MetaData), NewProp_IndirectLightingIntensity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_Lumen = { "Lumen", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360GlobalIlluminationSettings, Lumen), Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lumen_MetaData), NewProp_Lumen_MetaData) }; // 2863819300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_bOverride_DynamicGlobalIlluminationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_bOverride_IndirectLightingColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_bOverride_IndirectLightingIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_DynamicGlobalIlluminationMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_IndirectLightingColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_IndirectLightingIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewProp_Lumen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360GlobalIlluminationSettings",
	Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::PropPointers),
	sizeof(FOWL360GlobalIlluminationSettings),
	alignof(FOWL360GlobalIlluminationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationSettings.InnerSingleton;
}
// End ScriptStruct FOWL360GlobalIlluminationSettings

// Begin ScriptStruct FOWL360ReflectionsLumenSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360ReflectionsLumenSettings;
class UScriptStruct* FOWL360ReflectionsLumenSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ReflectionsLumenSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360ReflectionsLumenSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360ReflectionsLumenSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360ReflectionsLumenSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360ReflectionsLumenSettings>()
{
	return FOWL360ReflectionsLumenSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// REFLECTIONS\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "REFLECTIONS" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenReflectionQuality_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_LumenRayLightingMode_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenReflectionQuality_MetaData[] = {
		{ "Category", "Reflections|Lumen" },
		{ "ClampMin", ".25" },
		{ "Comment", "/** Scales the Reflection quality.  Larger scales reduce noise in reflections, but greatly increase GPU cost. */" },
		{ "DisplayName", "Quality" },
		{ "editcondition", "bOverride_LumenReflectionQuality" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Scales the Reflection quality.  Larger scales reduce noise in reflections, but greatly increase GPU cost." },
		{ "UIMax", "2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenRayLightingMode_MetaData[] = {
		{ "Category", "Reflections|Lumen Reflections" },
		{ "Comment", "/** Controls how Lumen rays are lit when Lumen is using Hardware Ray Tracing.  By default, Lumen uses the Surface Cache for best performance, but can be set to 'Hit Lighting' for higher quality. */" },
		{ "DisplayName", "Ray Lighting Mode" },
		{ "editcondition", "bOverride_LumenRayLightingMode" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Controls how Lumen rays are lit when Lumen is using Hardware Ray Tracing.  By default, Lumen uses the Surface Cache for best performance, but can be set to 'Hit Lighting' for higher quality." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_LumenReflectionQuality_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenReflectionQuality;
	static void NewProp_bOverride_LumenRayLightingMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_LumenRayLightingMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LumenReflectionQuality;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LumenRayLightingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LumenRayLightingMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360ReflectionsLumenSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::NewProp_bOverride_LumenReflectionQuality_SetBit(void* Obj)
{
	((FOWL360ReflectionsLumenSettings*)Obj)->bOverride_LumenReflectionQuality = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::NewProp_bOverride_LumenReflectionQuality = { "bOverride_LumenReflectionQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ReflectionsLumenSettings), &Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::NewProp_bOverride_LumenReflectionQuality_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LumenReflectionQuality_MetaData), NewProp_bOverride_LumenReflectionQuality_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::NewProp_bOverride_LumenRayLightingMode_SetBit(void* Obj)
{
	((FOWL360ReflectionsLumenSettings*)Obj)->bOverride_LumenRayLightingMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::NewProp_bOverride_LumenRayLightingMode = { "bOverride_LumenRayLightingMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ReflectionsLumenSettings), &Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::NewProp_bOverride_LumenRayLightingMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_LumenRayLightingMode_MetaData), NewProp_bOverride_LumenRayLightingMode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::NewProp_LumenReflectionQuality = { "LumenReflectionQuality", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ReflectionsLumenSettings, LumenReflectionQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenReflectionQuality_MetaData), NewProp_LumenReflectionQuality_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::NewProp_LumenRayLightingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::NewProp_LumenRayLightingMode = { "LumenRayLightingMode", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ReflectionsLumenSettings, LumenRayLightingMode), Z_Construct_UEnum_Engine_ELumenRayLightingModeOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenRayLightingMode_MetaData), NewProp_LumenRayLightingMode_MetaData) }; // 3140618315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::NewProp_bOverride_LumenReflectionQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::NewProp_bOverride_LumenRayLightingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::NewProp_LumenReflectionQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::NewProp_LumenRayLightingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::NewProp_LumenRayLightingMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360ReflectionsLumenSettings",
	Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::PropPointers),
	sizeof(FOWL360ReflectionsLumenSettings),
	alignof(FOWL360ReflectionsLumenSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ReflectionsLumenSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360ReflectionsLumenSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360ReflectionsLumenSettings.InnerSingleton;
}
// End ScriptStruct FOWL360ReflectionsLumenSettings

// Begin ScriptStruct FOWL360ReflectionsScreenSpaceSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360ReflectionsScreenSpaceSettings;
class UScriptStruct* FOWL360ReflectionsScreenSpaceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ReflectionsScreenSpaceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360ReflectionsScreenSpaceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360ReflectionsScreenSpaceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360ReflectionsScreenSpaceSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360ReflectionsScreenSpaceSettings>()
{
	return FOWL360ReflectionsScreenSpaceSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// TODO: NEEDS INDEPENDENT RESEARCH, SSE IS DEFAULT REFLECTION TYPE FOR NOW, UNTIL WE SORT OUT DIRECT_X_12\n// IT MIGHT STILL GIVE ARTIFACTS (ESPECIALLY WITH BIGGER METALLIC SURFACES)\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "TODO: NEEDS INDEPENDENT RESEARCH, SSE IS DEFAULT REFLECTION TYPE FOR NOW, UNTIL WE SORT OUT DIRECT_X_12\nIT MIGHT STILL GIVE ARTIFACTS (ESPECIALLY WITH BIGGER METALLIC SURFACES)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenSpaceReflectionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenSpaceReflectionQuality_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "Category", "Reflections|Screen Space" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Enable/Fade/disable the Screen Space Reflection feature, in percent, avoid numbers between 0 and 1 fo consistency */" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_ScreenSpaceReflectionIntensity" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Enable/Fade/disable the Screen Space Reflection feature, in percent, avoid numbers between 0 and 1 fo consistency" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[] = {
		{ "Category", "Reflections|Screen Space" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** 0=lowest quality..100=maximum quality, only a few quality levels are implemented, no soft transition, 50 is the default for better performance. */" },
		{ "DisplayName", "Quality" },
		{ "editcondition", "bOverride_ScreenSpaceReflectionQuality" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "0=lowest quality..100=maximum quality, only a few quality levels are implemented, no soft transition, 50 is the default for better performance." },
		{ "UIMax", "100.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRoughness_MetaData[] = {
		{ "Category", "Reflections|Screen Space" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Until what roughness we fade the screen space reflections, 0.8 works well, smaller can run faster */" },
		{ "DisplayName", "Max Roughness" },
		{ "editcondition", "bOverride_ScreenSpaceReflectionMaxRoughness" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Until what roughness we fade the screen space reflections, 0.8 works well, smaller can run faster" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_ScreenSpaceReflectionIntensity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenSpaceReflectionIntensity;
	static void NewProp_bOverride_ScreenSpaceReflectionQuality_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenSpaceReflectionQuality;
	static void NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ScreenSpaceReflectionMaxRoughness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRoughness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360ReflectionsScreenSpaceSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_SetBit(void* Obj)
{
	((FOWL360ReflectionsScreenSpaceSettings*)Obj)->bOverride_ScreenSpaceReflectionIntensity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity = { "bOverride_ScreenSpaceReflectionIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ReflectionsScreenSpaceSettings), &Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ScreenSpaceReflectionIntensity_MetaData), NewProp_bOverride_ScreenSpaceReflectionIntensity_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_SetBit(void* Obj)
{
	((FOWL360ReflectionsScreenSpaceSettings*)Obj)->bOverride_ScreenSpaceReflectionQuality = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality = { "bOverride_ScreenSpaceReflectionQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ReflectionsScreenSpaceSettings), &Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ScreenSpaceReflectionQuality_MetaData), NewProp_bOverride_ScreenSpaceReflectionQuality_MetaData) };
void Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_SetBit(void* Obj)
{
	((FOWL360ReflectionsScreenSpaceSettings*)Obj)->bOverride_ScreenSpaceReflectionMaxRoughness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness = { "bOverride_ScreenSpaceReflectionMaxRoughness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ReflectionsScreenSpaceSettings), &Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_MetaData), NewProp_bOverride_ScreenSpaceReflectionMaxRoughness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ReflectionsScreenSpaceSettings, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ReflectionsScreenSpaceSettings, Quality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quality_MetaData), NewProp_Quality_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_MaxRoughness = { "MaxRoughness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ReflectionsScreenSpaceSettings, MaxRoughness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRoughness_MetaData), NewProp_MaxRoughness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_bOverride_ScreenSpaceReflectionMaxRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_Quality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewProp_MaxRoughness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360ReflectionsScreenSpaceSettings",
	Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::PropPointers),
	sizeof(FOWL360ReflectionsScreenSpaceSettings),
	alignof(FOWL360ReflectionsScreenSpaceSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ReflectionsScreenSpaceSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360ReflectionsScreenSpaceSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360ReflectionsScreenSpaceSettings.InnerSingleton;
}
// End ScriptStruct FOWL360ReflectionsScreenSpaceSettings

// Begin ScriptStruct FOWL360ReflectionsSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360ReflectionsSettings;
class UScriptStruct* FOWL360ReflectionsSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ReflectionsSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360ReflectionsSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360ReflectionsSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360ReflectionsSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360ReflectionsSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360ReflectionsSettings>()
{
	return FOWL360ReflectionsSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_ReflectionMethod_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionMethod_MetaData[] = {
		{ "Category", "Reflections" },
		{ "Comment", "/** Chooses the Reflection method. */" },
		{ "DisplayName", "Method" },
		{ "editcondition", "bOverride_ReflectionMethod" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Chooses the Reflection method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lumen_MetaData[] = {
		{ "Category", "Reflections|Lumen" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSpace_MetaData[] = {
		{ "Category", "Reflections|Screen Space" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_ReflectionMethod_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_ReflectionMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReflectionMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Lumen;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenSpace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360ReflectionsSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::NewProp_bOverride_ReflectionMethod_SetBit(void* Obj)
{
	((FOWL360ReflectionsSettings*)Obj)->bOverride_ReflectionMethod = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::NewProp_bOverride_ReflectionMethod = { "bOverride_ReflectionMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360ReflectionsSettings), &Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::NewProp_bOverride_ReflectionMethod_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_ReflectionMethod_MetaData), NewProp_bOverride_ReflectionMethod_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::NewProp_ReflectionMethod = { "ReflectionMethod", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ReflectionsSettings, ReflectionMethod), Z_Construct_UEnum_Engine_EReflectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionMethod_MetaData), NewProp_ReflectionMethod_MetaData) }; // 569687725
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::NewProp_Lumen = { "Lumen", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ReflectionsSettings, Lumen), Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lumen_MetaData), NewProp_Lumen_MetaData) }; // 2757493105
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::NewProp_ScreenSpace = { "ScreenSpace", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360ReflectionsSettings, ScreenSpace), Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenSpace_MetaData), NewProp_ScreenSpace_MetaData) }; // 1124481589
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::NewProp_bOverride_ReflectionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::NewProp_ReflectionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::NewProp_Lumen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::NewProp_ScreenSpace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360ReflectionsSettings",
	Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::PropPointers),
	sizeof(FOWL360ReflectionsSettings),
	alignof(FOWL360ReflectionsSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360ReflectionsSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360ReflectionsSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360ReflectionsSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360ReflectionsSettings.InnerSingleton;
}
// End ScriptStruct FOWL360ReflectionsSettings

// Begin ScriptStruct FOWL360RenderingFeaturesAmbientCubemapSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientCubemapSettings;
class UScriptStruct* FOWL360RenderingFeaturesAmbientCubemapSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientCubemapSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientCubemapSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360RenderingFeaturesAmbientCubemapSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientCubemapSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360RenderingFeaturesAmbientCubemapSettings>()
{
	return FOWL360RenderingFeaturesAmbientCubemapSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//// for easier detail customization, needed?\n//USTRUCT(BlueprintType)\n//struct FOWL360WeightedBlendables\n//{\n//\x09GENERATED_BODY()\n//\n//public:\n//\n//\x09""FOWL360WeightedBlendables() { }\n//\x09""FOWL360WeightedBlendables(const TArray<FOWL360WeightedBlendable>& InArray) : Array(InArray) { }\n//\n//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"PostProcessSettings360\", meta = (Keywords = \"PostProcess\"))\n//\x09TArray<FOWL360WeightedBlendable> Array;\n//};\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "/ for easier detail customization, needed?\nUSTRUCT(BlueprintType)\nstruct FOWL360WeightedBlendables\n{\n       GENERATED_BODY()\n\npublic:\n\n       FOWL360WeightedBlendables() { }\n       FOWL360WeightedBlendables(const TArray<FOWL360WeightedBlendable>& InArray) : Array(InArray) { }\n\n       UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"PostProcessSettings360\", meta = (Keywords = \"PostProcess\"))\n       TArray<FOWL360WeightedBlendable> Array;\n};" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientCubemapTint_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientCubemapIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tint_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Cubemap" },
		{ "Comment", "/** AmbientCubemap tint color */" },
		{ "DisplayName", "Tint" },
		{ "editcondition", "bOverride_AmbientCubemapTint" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "AmbientCubemap tint color" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Cubemap" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * To scale the Ambient cubemap brightness\n\x09 * >=0: off, 1(default), >1 brighter\n\x09 */" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_AmbientCubemapIntensity" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "To scale the Ambient cubemap brightness\n>=0: off, 1(default), >1 brighter" },
		{ "UIMax", "4.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientCubemap_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Cubemap" },
		{ "Comment", "/** The Ambient cubemap (Affects diffuse and specular shading), blends additively which if different from all other settings here */" },
		{ "DisplayName", "Cubemap Texture" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "The Ambient cubemap (Affects diffuse and specular shading), blends additively which if different from all other settings here" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_AmbientCubemapTint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientCubemapTint;
	static void NewProp_bOverride_AmbientCubemapIntensity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientCubemapIntensity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AmbientCubemap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360RenderingFeaturesAmbientCubemapSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::NewProp_bOverride_AmbientCubemapTint_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesAmbientCubemapSettings*)Obj)->bOverride_AmbientCubemapTint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::NewProp_bOverride_AmbientCubemapTint = { "bOverride_AmbientCubemapTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesAmbientCubemapSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::NewProp_bOverride_AmbientCubemapTint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AmbientCubemapTint_MetaData), NewProp_bOverride_AmbientCubemapTint_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesAmbientCubemapSettings*)Obj)->bOverride_AmbientCubemapIntensity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity = { "bOverride_AmbientCubemapIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesAmbientCubemapSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AmbientCubemapIntensity_MetaData), NewProp_bOverride_AmbientCubemapIntensity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesAmbientCubemapSettings, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tint_MetaData), NewProp_Tint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesAmbientCubemapSettings, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::NewProp_AmbientCubemap = { "AmbientCubemap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesAmbientCubemapSettings, AmbientCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientCubemap_MetaData), NewProp_AmbientCubemap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::NewProp_bOverride_AmbientCubemapTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::NewProp_bOverride_AmbientCubemapIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::NewProp_Tint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::NewProp_AmbientCubemap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360RenderingFeaturesAmbientCubemapSettings",
	Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::PropPointers),
	sizeof(FOWL360RenderingFeaturesAmbientCubemapSettings),
	alignof(FOWL360RenderingFeaturesAmbientCubemapSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientCubemapSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientCubemapSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientCubemapSettings.InnerSingleton;
}
// End ScriptStruct FOWL360RenderingFeaturesAmbientCubemapSettings

// Begin ScriptStruct FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientOcclusionAdvancedSettings;
class UScriptStruct* FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientOcclusionAdvancedSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientOcclusionAdvancedSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360RenderingFeaturesAmbientOcclusionAdvancedSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientOcclusionAdvancedSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings>()
{
	return FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionStaticFraction_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionRadiusInWS_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionFadeDistance_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionFadeRadius_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionPower_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionBias_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionQuality_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionMipBlend_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionMipScale_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionMipThreshold_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionTemporalBlendWeight_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticFraction_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** 0..1 0=no effect on static lighting .. 1=AO affects the stat lighting, 0 is free meaning no extra rendering pass */" },
		{ "DisplayName", "Static Fraction" },
		{ "editcondition", "bOverride_AmbientOcclusionStaticFraction" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "0..1 0=no effect on static lighting .. 1=AO affects the stat lighting, 0 is free meaning no extra rendering pass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadiusInWS_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "Comment", "/** true: AO radius is in world space units, false: AO radius is locked the view space in 400 units */" },
		{ "DisplayName", "Radius in WorldSpace" },
		{ "editcondition", "bOverride_AmbientOcclusionRadiusInWS" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "true: AO radius is in world space units, false: AO radius is locked the view space in 400 units" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeDistance_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** >0, in unreal units, at what distance the AO effect disppears in the distance (avoding artifacts and AO effects on huge object) */" },
		{ "DisplayName", "Fade Out Distance" },
		{ "editcondition", "bOverride_AmbientOcclusionFadeDistance" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", ">0, in unreal units, at what distance the AO effect disppears in the distance (avoding artifacts and AO effects on huge object)" },
		{ "UIMax", "20000.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeRadius_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** >0, in unreal units, how many units before AmbientOcclusionFadeOutDistance it starts fading out */" },
		{ "DisplayName", "Fade Out Radius" },
		{ "editcondition", "bOverride_AmbientOcclusionFadeRadius" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", ">0, in unreal units, how many units before AmbientOcclusionFadeOutDistance it starts fading out" },
		{ "UIMax", "20000.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Power_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** >0, in unreal units, bigger values means even distant surfaces affect the ambient occlusion */" },
		{ "DisplayName", "Power" },
		{ "editcondition", "bOverride_AmbientOcclusionPower" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", ">0, in unreal units, bigger values means even distant surfaces affect the ambient occlusion" },
		{ "UIMax", "8.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bias_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** >0, in unreal units, default (3.0) works well for flat surfaces but can reduce details */" },
		{ "DisplayName", "Bias" },
		{ "editcondition", "bOverride_AmbientOcclusionBias" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", ">0, in unreal units, default (3.0) works well for flat surfaces but can reduce details" },
		{ "UIMax", "10.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** 0=lowest quality..100=maximum quality, only a few quality levels are implemented, no soft transition */" },
		{ "DisplayName", "Quality" },
		{ "editcondition", "bOverride_AmbientOcclusionQuality" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "0=lowest quality..100=maximum quality, only a few quality levels are implemented, no soft transition" },
		{ "UIMax", "100.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipBlend_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Affects the blend over the multiple mips (lower resolution versions) , 0:fully use full resolution, 1::fully use low resolution, around 0.6 seems to be a good value */" },
		{ "DisplayName", "Mip Blend" },
		{ "editcondition", "bOverride_AmbientOcclusionMipBlend" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Affects the blend over the multiple mips (lower resolution versions) , 0:fully use full resolution, 1::fully use low resolution, around 0.6 seems to be a good value" },
		{ "UIMax", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipScale_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.5" },
		{ "Comment", "/** Affects the radius AO radius scale over the multiple mips (lower resolution versions) */" },
		{ "DisplayName", "Mip Scale" },
		{ "editcondition", "bOverride_AmbientOcclusionMipScale" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Affects the radius AO radius scale over the multiple mips (lower resolution versions)" },
		{ "UIMax", "4.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipThreshold_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** to tweak the bilateral upsampling when using multiple mips (lower resolution versions) */" },
		{ "DisplayName", "Mip Threshold" },
		{ "editcondition", "bOverride_AmbientOcclusionMipThreshold" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "to tweak the bilateral upsampling when using multiple mips (lower resolution versions)" },
		{ "UIMax", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporalBlendWeight_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much to blend the current frame with previous frames when using GTAO with temporal accumulation */" },
		{ "DisplayName", "Temporal Blend Weight" },
		{ "editcondition", "bOverride_AmbientOcclusionTemporalBlendWeight" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "How much to blend the current frame with previous frames when using GTAO with temporal accumulation" },
		{ "UIMax", "0.5" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_AmbientOcclusionStaticFraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionStaticFraction;
	static void NewProp_bOverride_AmbientOcclusionRadiusInWS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionRadiusInWS;
	static void NewProp_bOverride_AmbientOcclusionFadeDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionFadeDistance;
	static void NewProp_bOverride_AmbientOcclusionFadeRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionFadeRadius;
	static void NewProp_bOverride_AmbientOcclusionPower_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionPower;
	static void NewProp_bOverride_AmbientOcclusionBias_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionBias;
	static void NewProp_bOverride_AmbientOcclusionQuality_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionQuality;
	static void NewProp_bOverride_AmbientOcclusionMipBlend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionMipBlend;
	static void NewProp_bOverride_AmbientOcclusionMipScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionMipScale;
	static void NewProp_bOverride_AmbientOcclusionMipThreshold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionMipThreshold;
	static void NewProp_bOverride_AmbientOcclusionTemporalBlendWeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionTemporalBlendWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticFraction;
	static void NewProp_RadiusInWS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RadiusInWS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Power;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Bias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MipBlend;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MipScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MipThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TemporalBlendWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings*)Obj)->bOverride_AmbientOcclusionStaticFraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction = { "bOverride_AmbientOcclusionStaticFraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AmbientOcclusionStaticFraction_MetaData), NewProp_bOverride_AmbientOcclusionStaticFraction_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings*)Obj)->bOverride_AmbientOcclusionRadiusInWS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS = { "bOverride_AmbientOcclusionRadiusInWS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AmbientOcclusionRadiusInWS_MetaData), NewProp_bOverride_AmbientOcclusionRadiusInWS_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings*)Obj)->bOverride_AmbientOcclusionFadeDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance = { "bOverride_AmbientOcclusionFadeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AmbientOcclusionFadeDistance_MetaData), NewProp_bOverride_AmbientOcclusionFadeDistance_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings*)Obj)->bOverride_AmbientOcclusionFadeRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius = { "bOverride_AmbientOcclusionFadeRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AmbientOcclusionFadeRadius_MetaData), NewProp_bOverride_AmbientOcclusionFadeRadius_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings*)Obj)->bOverride_AmbientOcclusionPower = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionPower = { "bOverride_AmbientOcclusionPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionPower_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AmbientOcclusionPower_MetaData), NewProp_bOverride_AmbientOcclusionPower_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings*)Obj)->bOverride_AmbientOcclusionBias = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionBias = { "bOverride_AmbientOcclusionBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionBias_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AmbientOcclusionBias_MetaData), NewProp_bOverride_AmbientOcclusionBias_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings*)Obj)->bOverride_AmbientOcclusionQuality = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality = { "bOverride_AmbientOcclusionQuality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AmbientOcclusionQuality_MetaData), NewProp_bOverride_AmbientOcclusionQuality_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings*)Obj)->bOverride_AmbientOcclusionMipBlend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend = { "bOverride_AmbientOcclusionMipBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AmbientOcclusionMipBlend_MetaData), NewProp_bOverride_AmbientOcclusionMipBlend_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings*)Obj)->bOverride_AmbientOcclusionMipScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale = { "bOverride_AmbientOcclusionMipScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AmbientOcclusionMipScale_MetaData), NewProp_bOverride_AmbientOcclusionMipScale_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings*)Obj)->bOverride_AmbientOcclusionMipThreshold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold = { "bOverride_AmbientOcclusionMipThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AmbientOcclusionMipThreshold_MetaData), NewProp_bOverride_AmbientOcclusionMipThreshold_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionTemporalBlendWeight_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings*)Obj)->bOverride_AmbientOcclusionTemporalBlendWeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionTemporalBlendWeight = { "bOverride_AmbientOcclusionTemporalBlendWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionTemporalBlendWeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AmbientOcclusionTemporalBlendWeight_MetaData), NewProp_bOverride_AmbientOcclusionTemporalBlendWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_StaticFraction = { "StaticFraction", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings, StaticFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticFraction_MetaData), NewProp_StaticFraction_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_RadiusInWS_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings*)Obj)->RadiusInWS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_RadiusInWS = { "RadiusInWS", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_RadiusInWS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadiusInWS_MetaData), NewProp_RadiusInWS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_FadeDistance = { "FadeDistance", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings, FadeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeDistance_MetaData), NewProp_FadeDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_FadeRadius = { "FadeRadius", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings, FadeRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeRadius_MetaData), NewProp_FadeRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings, Power), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Power_MetaData), NewProp_Power_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_Bias = { "Bias", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings, Bias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bias_MetaData), NewProp_Bias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings, Quality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quality_MetaData), NewProp_Quality_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_MipBlend = { "MipBlend", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings, MipBlend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipBlend_MetaData), NewProp_MipBlend_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_MipScale = { "MipScale", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings, MipScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipScale_MetaData), NewProp_MipScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_MipThreshold = { "MipThreshold", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings, MipThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipThreshold_MetaData), NewProp_MipThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_TemporalBlendWeight = { "TemporalBlendWeight", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings, TemporalBlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporalBlendWeight_MetaData), NewProp_TemporalBlendWeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionStaticFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionRadiusInWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionFadeRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionMipBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionMipScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionMipThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_bOverride_AmbientOcclusionTemporalBlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_StaticFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_RadiusInWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_FadeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_FadeRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_Power,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_Bias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_Quality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_MipBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_MipScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_MipThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewProp_TemporalBlendWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360RenderingFeaturesAmbientOcclusionAdvancedSettings",
	Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::PropPointers),
	sizeof(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings),
	alignof(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientOcclusionAdvancedSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientOcclusionAdvancedSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientOcclusionAdvancedSettings.InnerSingleton;
}
// End ScriptStruct FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings

// Begin ScriptStruct FOWL360RenderingFeaturesAmbientOcclusionSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientOcclusionSettings;
class UScriptStruct* FOWL360RenderingFeaturesAmbientOcclusionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientOcclusionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientOcclusionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360RenderingFeaturesAmbientOcclusionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientOcclusionSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360RenderingFeaturesAmbientOcclusionSettings>()
{
	return FOWL360RenderingFeaturesAmbientOcclusionSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AmbientOcclusionRadius_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** 0..1 0=off/no ambient occlusion .. 1=strong ambient occlusion, defines how much it affects the non direct lighting after base pass */" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_AmbientOcclusionIntensity" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "0..1 0=off/no ambient occlusion .. 1=strong ambient occlusion, defines how much it affects the non direct lighting after base pass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** >0, in unreal units, bigger values means even distant surfaces affect the ambient occlusion */" },
		{ "DisplayName", "Radius" },
		{ "editcondition", "bOverride_AmbientOcclusionRadius" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", ">0, in unreal units, bigger values means even distant surfaces affect the ambient occlusion" },
		{ "UIMax", "500.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Advanced_MetaData[] = {
		{ "Category", "Rendering Features|Ambient Occlusion" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_AmbientOcclusionIntensity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionIntensity;
	static void NewProp_bOverride_AmbientOcclusionRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AmbientOcclusionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Advanced;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360RenderingFeaturesAmbientOcclusionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesAmbientOcclusionSettings*)Obj)->bOverride_AmbientOcclusionIntensity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity = { "bOverride_AmbientOcclusionIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesAmbientOcclusionSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AmbientOcclusionIntensity_MetaData), NewProp_bOverride_AmbientOcclusionIntensity_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesAmbientOcclusionSettings*)Obj)->bOverride_AmbientOcclusionRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius = { "bOverride_AmbientOcclusionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesAmbientOcclusionSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AmbientOcclusionRadius_MetaData), NewProp_bOverride_AmbientOcclusionRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesAmbientOcclusionSettings, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesAmbientOcclusionSettings, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::NewProp_Advanced = { "Advanced", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesAmbientOcclusionSettings, Advanced), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Advanced_MetaData), NewProp_Advanced_MetaData) }; // 1874070340
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::NewProp_bOverride_AmbientOcclusionIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::NewProp_bOverride_AmbientOcclusionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::NewProp_Advanced,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360RenderingFeaturesAmbientOcclusionSettings",
	Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::PropPointers),
	sizeof(FOWL360RenderingFeaturesAmbientOcclusionSettings),
	alignof(FOWL360RenderingFeaturesAmbientOcclusionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientOcclusionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientOcclusionSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientOcclusionSettings.InnerSingleton;
}
// End ScriptStruct FOWL360RenderingFeaturesAmbientOcclusionSettings

// Begin ScriptStruct FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesRayTracingAmbientOcclusionSettings;
class UScriptStruct* FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesRayTracingAmbientOcclusionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesRayTracingAmbientOcclusionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360RenderingFeaturesRayTracingAmbientOcclusionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesRayTracingAmbientOcclusionSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings>()
{
	return FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingAO_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingAOSamplesPerPixel_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingAOIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingAORadius_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingAO_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Ambient Occlusion" },
		{ "Comment", "/** Enables ray tracing ambient occlusion. */" },
		{ "DisplayName", "Enabled" },
		{ "editcondition", "bOverride_RayTracingAO" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Enables ray tracing ambient occlusion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingAOSamplesPerPixel_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Ambient Occlusion" },
		{ "ClampMax", "64" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Sets the samples per pixel for ray tracing ambient occlusion. */" },
		{ "DisplayName", "Samples Per Pixel" },
		{ "editcondition", "bOverride_RayTracingAOSamplesPerPixel" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Sets the samples per pixel for ray tracing ambient occlusion." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingAOIntensity_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Ambient Occlusion" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scalar factor on the ray-tracing ambient occlusion score. */" },
		{ "DisplayName", "Intensity" },
		{ "editcondition", "bOverride_RayTracingAOIntensity" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Scalar factor on the ray-tracing ambient occlusion score." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingAORadius_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Ambient Occlusion" },
		{ "ClampMax", "10000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Defines the world-space search radius for occlusion rays. */" },
		{ "DisplayName", "Radius" },
		{ "editcondition", "bOverride_RayTracingAORadius" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Defines the world-space search radius for occlusion rays." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_RayTracingAO_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingAO;
	static void NewProp_bOverride_RayTracingAOSamplesPerPixel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingAOSamplesPerPixel;
	static void NewProp_bOverride_RayTracingAOIntensity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingAOIntensity;
	static void NewProp_bOverride_RayTracingAORadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingAORadius;
	static void NewProp_RayTracingAO_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RayTracingAO;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RayTracingAOSamplesPerPixel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RayTracingAOIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RayTracingAORadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_bOverride_RayTracingAO_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings*)Obj)->bOverride_RayTracingAO = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_bOverride_RayTracingAO = { "bOverride_RayTracingAO", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_bOverride_RayTracingAO_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_RayTracingAO_MetaData), NewProp_bOverride_RayTracingAO_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings*)Obj)->bOverride_RayTracingAOSamplesPerPixel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel = { "bOverride_RayTracingAOSamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_RayTracingAOSamplesPerPixel_MetaData), NewProp_bOverride_RayTracingAOSamplesPerPixel_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_bOverride_RayTracingAOIntensity_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings*)Obj)->bOverride_RayTracingAOIntensity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_bOverride_RayTracingAOIntensity = { "bOverride_RayTracingAOIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_bOverride_RayTracingAOIntensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_RayTracingAOIntensity_MetaData), NewProp_bOverride_RayTracingAOIntensity_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_bOverride_RayTracingAORadius_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings*)Obj)->bOverride_RayTracingAORadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_bOverride_RayTracingAORadius = { "bOverride_RayTracingAORadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_bOverride_RayTracingAORadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_RayTracingAORadius_MetaData), NewProp_bOverride_RayTracingAORadius_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_RayTracingAO_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings*)Obj)->RayTracingAO = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_RayTracingAO = { "RayTracingAO", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_RayTracingAO_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingAO_MetaData), NewProp_RayTracingAO_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_RayTracingAOSamplesPerPixel = { "RayTracingAOSamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings, RayTracingAOSamplesPerPixel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingAOSamplesPerPixel_MetaData), NewProp_RayTracingAOSamplesPerPixel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_RayTracingAOIntensity = { "RayTracingAOIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings, RayTracingAOIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingAOIntensity_MetaData), NewProp_RayTracingAOIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_RayTracingAORadius = { "RayTracingAORadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings, RayTracingAORadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingAORadius_MetaData), NewProp_RayTracingAORadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_bOverride_RayTracingAO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_bOverride_RayTracingAOSamplesPerPixel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_bOverride_RayTracingAOIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_bOverride_RayTracingAORadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_RayTracingAO,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_RayTracingAOSamplesPerPixel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_RayTracingAOIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewProp_RayTracingAORadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360RenderingFeaturesRayTracingAmbientOcclusionSettings",
	Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::PropPointers),
	sizeof(FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings),
	alignof(FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesRayTracingAmbientOcclusionSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesRayTracingAmbientOcclusionSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesRayTracingAmbientOcclusionSettings.InnerSingleton;
}
// End ScriptStruct FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings

// Begin ScriptStruct FOWL360RenderingFeaturesMotionBlurSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesMotionBlurSettings;
class UScriptStruct* FOWL360RenderingFeaturesMotionBlurSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesMotionBlurSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesMotionBlurSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360RenderingFeaturesMotionBlurSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesMotionBlurSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360RenderingFeaturesMotionBlurSettings>()
{
	return FOWL360RenderingFeaturesMotionBlurSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MotionBlurAmount_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MotionBlurMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MotionBlurTargetFPS_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MotionBlurPerObjectSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "Rendering Features|Motion Blur" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Strength of motion blur, 0:off, should be renamed to intensity */" },
		{ "DisplayName", "Amount" },
		{ "editcondition", "bOverride_MotionBlurAmount" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Strength of motion blur, 0:off, should be renamed to intensity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[] = {
		{ "Category", "Rendering Features|Motion Blur" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** max distortion caused by motion blur, in percent of the screen width, 0:off */" },
		{ "DisplayName", "Max" },
		{ "editcondition", "bOverride_MotionBlurMax" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "max distortion caused by motion blur, in percent of the screen width, 0:off" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFPS_MetaData[] = {
		{ "Category", "Rendering Features|Motion Blur" },
		{ "ClampMax", "120" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Defines the target FPS for motion blur. Makes motion blur independent of actual frame rate and relative\n\x09 * to the specified target FPS instead. Higher target FPS results in shorter frames, which means shorter\n\x09 * shutter times and less motion blur. Lower FPS means more motion blur. A value of zero makes the motion\n\x09 * blur dependent on the actual frame rate.\n\x09 */" },
		{ "DisplayName", "Target FPS" },
		{ "editcondition", "bOverride_MotionBlurTargetFPS" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Defines the target FPS for motion blur. Makes motion blur independent of actual frame rate and relative\nto the specified target FPS instead. Higher target FPS results in shorter frames, which means shorter\nshutter times and less motion blur. Lower FPS means more motion blur. A value of zero makes the motion\nblur dependent on the actual frame rate." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerObjectSize_MetaData[] = {
		{ "Category", "Rendering Features|Motion Blur" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The minimum projected screen radius for a primitive to be drawn in the velocity pass, percentage of screen width. smaller numbers cause more draw calls, default: 4% */" },
		{ "DisplayName", "Per Object Size" },
		{ "editcondition", "bOverride_MotionBlurPerObjectSize" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "The minimum projected screen radius for a primitive to be drawn in the velocity pass, percentage of screen width. smaller numbers cause more draw calls, default: 4%" },
		{ "UIMax", "100.0" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_MotionBlurAmount_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MotionBlurAmount;
	static void NewProp_bOverride_MotionBlurMax_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MotionBlurMax;
	static void NewProp_bOverride_MotionBlurTargetFPS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MotionBlurTargetFPS;
	static void NewProp_bOverride_MotionBlurPerObjectSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MotionBlurPerObjectSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetFPS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerObjectSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360RenderingFeaturesMotionBlurSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_bOverride_MotionBlurAmount_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesMotionBlurSettings*)Obj)->bOverride_MotionBlurAmount = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_bOverride_MotionBlurAmount = { "bOverride_MotionBlurAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesMotionBlurSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_bOverride_MotionBlurAmount_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_MotionBlurAmount_MetaData), NewProp_bOverride_MotionBlurAmount_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_bOverride_MotionBlurMax_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesMotionBlurSettings*)Obj)->bOverride_MotionBlurMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_bOverride_MotionBlurMax = { "bOverride_MotionBlurMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesMotionBlurSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_bOverride_MotionBlurMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_MotionBlurMax_MetaData), NewProp_bOverride_MotionBlurMax_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_bOverride_MotionBlurTargetFPS_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesMotionBlurSettings*)Obj)->bOverride_MotionBlurTargetFPS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_bOverride_MotionBlurTargetFPS = { "bOverride_MotionBlurTargetFPS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesMotionBlurSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_bOverride_MotionBlurTargetFPS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_MotionBlurTargetFPS_MetaData), NewProp_bOverride_MotionBlurTargetFPS_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesMotionBlurSettings*)Obj)->bOverride_MotionBlurPerObjectSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize = { "bOverride_MotionBlurPerObjectSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesMotionBlurSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_MotionBlurPerObjectSize_MetaData), NewProp_bOverride_MotionBlurPerObjectSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesMotionBlurSettings, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesMotionBlurSettings, Max), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Max_MetaData), NewProp_Max_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_TargetFPS = { "TargetFPS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesMotionBlurSettings, TargetFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFPS_MetaData), NewProp_TargetFPS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_PerObjectSize = { "PerObjectSize", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesMotionBlurSettings, PerObjectSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerObjectSize_MetaData), NewProp_PerObjectSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_bOverride_MotionBlurAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_bOverride_MotionBlurMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_bOverride_MotionBlurTargetFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_bOverride_MotionBlurPerObjectSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_TargetFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewProp_PerObjectSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360RenderingFeaturesMotionBlurSettings",
	Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::PropPointers),
	sizeof(FOWL360RenderingFeaturesMotionBlurSettings),
	alignof(FOWL360RenderingFeaturesMotionBlurSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesMotionBlurSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesMotionBlurSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesMotionBlurSettings.InnerSingleton;
}
// End ScriptStruct FOWL360RenderingFeaturesMotionBlurSettings

// Begin ScriptStruct FOWL360RenderingFeaturesTranslucencySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesTranslucencySettings;
class UScriptStruct* FOWL360RenderingFeaturesTranslucencySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesTranslucencySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesTranslucencySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360RenderingFeaturesTranslucencySettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesTranslucencySettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360RenderingFeaturesTranslucencySettings>()
{
	return FOWL360RenderingFeaturesTranslucencySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_TranslucencyType_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Rendering Features|Translucency" },
		{ "Comment", "/** Sets the translucency type */" },
		{ "DisplayName", "Type" },
		{ "editcondition", "bOverride_TranslucencyType" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Sets the translucency type" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_TranslucencyType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_TranslucencyType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360RenderingFeaturesTranslucencySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::NewProp_bOverride_TranslucencyType_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesTranslucencySettings*)Obj)->bOverride_TranslucencyType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::NewProp_bOverride_TranslucencyType = { "bOverride_TranslucencyType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesTranslucencySettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::NewProp_bOverride_TranslucencyType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_TranslucencyType_MetaData), NewProp_bOverride_TranslucencyType_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesTranslucencySettings, Type), Z_Construct_UEnum_Engine_ETranslucencyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1421844469
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::NewProp_bOverride_TranslucencyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360RenderingFeaturesTranslucencySettings",
	Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::PropPointers),
	sizeof(FOWL360RenderingFeaturesTranslucencySettings),
	alignof(FOWL360RenderingFeaturesTranslucencySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesTranslucencySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesTranslucencySettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesTranslucencySettings.InnerSingleton;
}
// End ScriptStruct FOWL360RenderingFeaturesTranslucencySettings

// Begin ScriptStruct FOWL360RenderingFeaturesRayTracingTranslucencySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesRayTracingTranslucencySettings;
class UScriptStruct* FOWL360RenderingFeaturesRayTracingTranslucencySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesRayTracingTranslucencySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesRayTracingTranslucencySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360RenderingFeaturesRayTracingTranslucencySettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesRayTracingTranslucencySettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360RenderingFeaturesRayTracingTranslucencySettings>()
{
	return FOWL360RenderingFeaturesRayTracingTranslucencySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingTranslucencyMaxRoughness_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingTranslucencyRefractionRays_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingTranslucencyShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_RayTracingTranslucencyRefraction_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRoughness_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Translucency" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Sets the maximum roughness until which ray tracing translucency will be visible (lower value is faster). Translucency contribution is smoothly faded when close to roughness threshold. This parameter behaves similarly to ScreenSpaceReflectionMaxRoughness. */" },
		{ "DisplayName", "Max Roughness" },
		{ "editcondition", "bOverride_RayTracingTranslucencyMaxRoughness" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Sets the maximum roughness until which ray tracing translucency will be visible (lower value is faster). Translucency contribution is smoothly faded when close to roughness threshold. This parameter behaves similarly to ScreenSpaceReflectionMaxRoughness." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefractionRays_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Translucency" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Sets the maximum number of ray tracing refraction rays. */" },
		{ "DisplayName", "Max. Refraction Rays" },
		{ "editcondition", "bOverride_RayTracingTranslucencyRefractionRays" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Sets the maximum number of ray tracing refraction rays." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerPixel_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Translucency" },
		{ "ClampMax", "64" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Sets the samples per pixel for ray traced translucency. */" },
		{ "DisplayName", "Samples Per Pixel" },
		{ "editcondition", "bOverride_RayTracingTranslucencyRefractionRays" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Sets the samples per pixel for ray traced translucency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shadows_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Translucency" },
		{ "Comment", "/** Sets the translucency shadows type. */" },
		{ "DisplayName", "Shadows" },
		{ "editcondition", "bOverride_RayTracingTranslucencyRefractionRays" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Sets the translucency shadows type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Refraction_MetaData[] = {
		{ "Category", "Rendering Features|Ray Tracing Translucency" },
		{ "Comment", "/** Sets whether refraction should be enabled or not (if not rays will not scatter and only travel in the same direction as before the intersection event). */" },
		{ "DisplayName", "Refraction" },
		{ "editcondition", "bOverride_RayTracingTranslucencyRefractionRays" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Sets whether refraction should be enabled or not (if not rays will not scatter and only travel in the same direction as before the intersection event)." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_RayTracingTranslucencyMaxRoughness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingTranslucencyMaxRoughness;
	static void NewProp_bOverride_RayTracingTranslucencyRefractionRays_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingTranslucencyRefractionRays;
	static void NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingTranslucencySamplesPerPixel;
	static void NewProp_bOverride_RayTracingTranslucencyShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingTranslucencyShadows;
	static void NewProp_bOverride_RayTracingTranslucencyRefraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_RayTracingTranslucencyRefraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRoughness;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RefractionRays;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SamplesPerPixel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Shadows_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Shadows;
	static void NewProp_Refraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Refraction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360RenderingFeaturesRayTracingTranslucencySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesRayTracingTranslucencySettings*)Obj)->bOverride_RayTracingTranslucencyMaxRoughness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness = { "bOverride_RayTracingTranslucencyMaxRoughness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesRayTracingTranslucencySettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_RayTracingTranslucencyMaxRoughness_MetaData), NewProp_bOverride_RayTracingTranslucencyMaxRoughness_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesRayTracingTranslucencySettings*)Obj)->bOverride_RayTracingTranslucencyRefractionRays = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays = { "bOverride_RayTracingTranslucencyRefractionRays", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesRayTracingTranslucencySettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_RayTracingTranslucencyRefractionRays_MetaData), NewProp_bOverride_RayTracingTranslucencyRefractionRays_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesRayTracingTranslucencySettings*)Obj)->bOverride_RayTracingTranslucencySamplesPerPixel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel = { "bOverride_RayTracingTranslucencySamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesRayTracingTranslucencySettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_MetaData), NewProp_bOverride_RayTracingTranslucencySamplesPerPixel_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesRayTracingTranslucencySettings*)Obj)->bOverride_RayTracingTranslucencyShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows = { "bOverride_RayTracingTranslucencyShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesRayTracingTranslucencySettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_RayTracingTranslucencyShadows_MetaData), NewProp_bOverride_RayTracingTranslucencyShadows_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesRayTracingTranslucencySettings*)Obj)->bOverride_RayTracingTranslucencyRefraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction = { "bOverride_RayTracingTranslucencyRefraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesRayTracingTranslucencySettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_RayTracingTranslucencyRefraction_MetaData), NewProp_bOverride_RayTracingTranslucencyRefraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_MaxRoughness = { "MaxRoughness", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesRayTracingTranslucencySettings, MaxRoughness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRoughness_MetaData), NewProp_MaxRoughness_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_RefractionRays = { "RefractionRays", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesRayTracingTranslucencySettings, RefractionRays), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefractionRays_MetaData), NewProp_RefractionRays_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_SamplesPerPixel = { "SamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesRayTracingTranslucencySettings, SamplesPerPixel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplesPerPixel_MetaData), NewProp_SamplesPerPixel_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_Shadows_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_Shadows = { "Shadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesRayTracingTranslucencySettings, Shadows), Z_Construct_UEnum_Engine_EReflectedAndRefractedRayTracedShadows, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shadows_MetaData), NewProp_Shadows_MetaData) }; // 3233819598
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_Refraction_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesRayTracingTranslucencySettings*)Obj)->Refraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_Refraction = { "Refraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesRayTracingTranslucencySettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_Refraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Refraction_MetaData), NewProp_Refraction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencyMaxRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefractionRays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencySamplesPerPixel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencyShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_bOverride_RayTracingTranslucencyRefraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_MaxRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_RefractionRays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_SamplesPerPixel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_Shadows_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_Shadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewProp_Refraction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360RenderingFeaturesRayTracingTranslucencySettings",
	Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::PropPointers),
	sizeof(FOWL360RenderingFeaturesRayTracingTranslucencySettings),
	alignof(FOWL360RenderingFeaturesRayTracingTranslucencySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesRayTracingTranslucencySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesRayTracingTranslucencySettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesRayTracingTranslucencySettings.InnerSingleton;
}
// End ScriptStruct FOWL360RenderingFeaturesRayTracingTranslucencySettings

// Begin ScriptStruct FOWL360RenderingFeaturesPathTracingSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesPathTracingSettings;
class UScriptStruct* FOWL360RenderingFeaturesPathTracingSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesPathTracingSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesPathTracingSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360RenderingFeaturesPathTracingSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesPathTracingSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360RenderingFeaturesPathTracingSettings>()
{
	return FOWL360RenderingFeaturesPathTracingSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingMaxBounces_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingSamplesPerPixel_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingIncludeEmissive_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingMaxPathExposure_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingEnableEmissiveMaterials_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingEnableReferenceDOF_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_PathTracingEnableDenoiser_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBounces_MetaData[] = {
		{ "Category", "Rendering Features|PathTracing" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Sets the path tracing maximum bounces */" },
		{ "DisplayName", "Max. Bounces" },
		{ "editcondition", "bOverride_PathTracingMaxBounces" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Sets the path tracing maximum bounces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerPixel_MetaData[] = {
		{ "Category", "Rendering Features|PathTracing" },
		{ "ClampMax", "64" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Sets the samples per pixel for the path tracer. */" },
		{ "DisplayName", "Samples Per Pixel" },
		{ "editcondition", "bOverride_PathTracingSamplesPerPixel" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Sets the samples per pixel for the path tracer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterWidth_MetaData[] = {
		{ "Category", "Rendering Features|PathTracing" },
		{ "ClampMax", "6.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Sets anti-aliasing filter width for the path tracer. */" },
		{ "DisplayName", "Filter Width" },
		{ "editcondition", "bOverride_PathTracingFilterWidth" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Sets anti-aliasing filter width for the path tracer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableEmissive_MetaData[] = {
		{ "Category", "Rendering Features|PathTracing" },
		{ "Comment", "/** Enables emissive materials for the path tracer. This can prevent double-counting of illumination from surfaces that are also represented by light sources, and noise from small emitters. */" },
		{ "DisplayName", "Emissive Materials" },
		{ "editcondition", "bOverride_PathTracingIncludeEmissive" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Enables emissive materials for the path tracer. This can prevent double-counting of illumination from surfaces that are also represented by light sources, and noise from small emitters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPathExposure_MetaData[] = {
		{ "Category", "Rendering Features|PathTracing" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "-10.0" },
		{ "Comment", "/** Sets the maximum exposure allowed in the path tracer to reduce fireflies. This should be set a few stops higher than the scene exposure. */" },
		{ "DisplayName", "Max Path Exposure" },
		{ "editcondition", "bOverride_PathTracingMaxPathExposure" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Sets the maximum exposure allowed in the path tracer to reduce fireflies. This should be set a few stops higher than the scene exposure." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableReferenceDOF_MetaData[] = {
		{ "Category", "Rendering Features|PathTracing" },
		{ "Comment", "/** Enables a reference quality depth-of-field which replaces the post-process effect. */" },
		{ "DisplayName", "Reference Depth Of Field" },
		{ "editcondition", "bOverride_PathTracingEnableReferenceDOF" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Enables a reference quality depth-of-field which replaces the post-process effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableDenoiser_MetaData[] = {
		{ "Category", "Rendering Features|PathTracing" },
		{ "Comment", "/** Run the currently loaded denoiser plugin on the last sample to remove noise from the output. Has no effect if a plug-in is not loaded. */" },
		{ "DisplayName", "Denoiser" },
		{ "editcondition", "bOverride_PathTracingEnableDenoiser" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Run the currently loaded denoiser plugin on the last sample to remove noise from the output. Has no effect if a plug-in is not loaded." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_PathTracingMaxBounces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingMaxBounces;
	static void NewProp_bOverride_PathTracingSamplesPerPixel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingSamplesPerPixel;
	static void NewProp_bOverride_PathTracingIncludeEmissive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingIncludeEmissive;
	static void NewProp_bOverride_PathTracingMaxPathExposure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingMaxPathExposure;
	static void NewProp_bOverride_PathTracingEnableEmissiveMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingEnableEmissiveMaterials;
	static void NewProp_bOverride_PathTracingEnableReferenceDOF_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingEnableReferenceDOF;
	static void NewProp_bOverride_PathTracingEnableDenoiser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_PathTracingEnableDenoiser;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBounces;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SamplesPerPixel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterWidth;
	static void NewProp_EnableEmissive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableEmissive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPathExposure;
	static void NewProp_EnableReferenceDOF_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableReferenceDOF;
	static void NewProp_EnableDenoiser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableDenoiser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360RenderingFeaturesPathTracingSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingMaxBounces_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesPathTracingSettings*)Obj)->bOverride_PathTracingMaxBounces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingMaxBounces = { "bOverride_PathTracingMaxBounces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesPathTracingSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingMaxBounces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_PathTracingMaxBounces_MetaData), NewProp_bOverride_PathTracingMaxBounces_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesPathTracingSettings*)Obj)->bOverride_PathTracingSamplesPerPixel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel = { "bOverride_PathTracingSamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesPathTracingSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_PathTracingSamplesPerPixel_MetaData), NewProp_bOverride_PathTracingSamplesPerPixel_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingIncludeEmissive_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesPathTracingSettings*)Obj)->bOverride_PathTracingIncludeEmissive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingIncludeEmissive = { "bOverride_PathTracingIncludeEmissive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesPathTracingSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingIncludeEmissive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_PathTracingIncludeEmissive_MetaData), NewProp_bOverride_PathTracingIncludeEmissive_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingMaxPathExposure_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesPathTracingSettings*)Obj)->bOverride_PathTracingMaxPathExposure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingMaxPathExposure = { "bOverride_PathTracingMaxPathExposure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesPathTracingSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingMaxPathExposure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_PathTracingMaxPathExposure_MetaData), NewProp_bOverride_PathTracingMaxPathExposure_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingEnableEmissiveMaterials_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesPathTracingSettings*)Obj)->bOverride_PathTracingEnableEmissiveMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingEnableEmissiveMaterials = { "bOverride_PathTracingEnableEmissiveMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesPathTracingSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingEnableEmissiveMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_PathTracingEnableEmissiveMaterials_MetaData), NewProp_bOverride_PathTracingEnableEmissiveMaterials_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceDOF_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesPathTracingSettings*)Obj)->bOverride_PathTracingEnableReferenceDOF = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceDOF = { "bOverride_PathTracingEnableReferenceDOF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesPathTracingSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceDOF_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_PathTracingEnableReferenceDOF_MetaData), NewProp_bOverride_PathTracingEnableReferenceDOF_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingEnableDenoiser_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesPathTracingSettings*)Obj)->bOverride_PathTracingEnableDenoiser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingEnableDenoiser = { "bOverride_PathTracingEnableDenoiser", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesPathTracingSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingEnableDenoiser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_PathTracingEnableDenoiser_MetaData), NewProp_bOverride_PathTracingEnableDenoiser_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_MaxBounces = { "MaxBounces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesPathTracingSettings, MaxBounces), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBounces_MetaData), NewProp_MaxBounces_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_SamplesPerPixel = { "SamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesPathTracingSettings, SamplesPerPixel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplesPerPixel_MetaData), NewProp_SamplesPerPixel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_FilterWidth = { "FilterWidth", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesPathTracingSettings, FilterWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterWidth_MetaData), NewProp_FilterWidth_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_EnableEmissive_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesPathTracingSettings*)Obj)->EnableEmissive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_EnableEmissive = { "EnableEmissive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesPathTracingSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_EnableEmissive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableEmissive_MetaData), NewProp_EnableEmissive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_MaxPathExposure = { "MaxPathExposure", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesPathTracingSettings, MaxPathExposure), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPathExposure_MetaData), NewProp_MaxPathExposure_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_EnableReferenceDOF_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesPathTracingSettings*)Obj)->EnableReferenceDOF = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_EnableReferenceDOF = { "EnableReferenceDOF", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesPathTracingSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_EnableReferenceDOF_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableReferenceDOF_MetaData), NewProp_EnableReferenceDOF_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_EnableDenoiser_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesPathTracingSettings*)Obj)->EnableDenoiser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_EnableDenoiser = { "EnableDenoiser", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360RenderingFeaturesPathTracingSettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_EnableDenoiser_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableDenoiser_MetaData), NewProp_EnableDenoiser_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingMaxBounces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingSamplesPerPixel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingIncludeEmissive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingMaxPathExposure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingEnableEmissiveMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingEnableReferenceDOF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_bOverride_PathTracingEnableDenoiser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_MaxBounces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_SamplesPerPixel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_FilterWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_EnableEmissive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_MaxPathExposure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_EnableReferenceDOF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewProp_EnableDenoiser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360RenderingFeaturesPathTracingSettings",
	Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::PropPointers),
	sizeof(FOWL360RenderingFeaturesPathTracingSettings),
	alignof(FOWL360RenderingFeaturesPathTracingSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesPathTracingSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesPathTracingSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesPathTracingSettings.InnerSingleton;
}
// End ScriptStruct FOWL360RenderingFeaturesPathTracingSettings

// Begin ScriptStruct FOWL360RenderingFeaturesTemporalAASettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesTemporalAASettings;
class UScriptStruct* FOWL360RenderingFeaturesTemporalAASettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesTemporalAASettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesTemporalAASettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360RenderingFeaturesTemporalAASettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesTemporalAASettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360RenderingFeaturesTemporalAASettings>()
{
	return FOWL360RenderingFeaturesTemporalAASettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporalAAEnabled_MetaData[] = {
		{ "Category", "Rendering Features|TemporalAA" },
		{ "Comment", "/**\n\x09* TemporalAA settings are not included by default in the ue4 PostProcessSettings struct\n\x09* They are included here by OffWorldLive\n\x09*/" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "TemporalAA settings are not included by default in the ue4 PostProcessSettings struct\nThey are included here by OffWorldLive" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporalAAMotionBlurEnabled_MetaData[] = {
		{ "Category", "Rendering Features|TemporalAA" },
		{ "Comment", "/**\n\x09* TemporalAA settings are not included by default in the ue4 PostProcessSettings struct\n\x09* They are included here by OffWorldLive\n\x09*/" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "TemporalAA settings are not included by default in the ue4 PostProcessSettings struct\nThey are included here by OffWorldLive" },
	};
#endif // WITH_METADATA
	static void NewProp_TemporalAAEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TemporalAAEnabled;
	static void NewProp_TemporalAAMotionBlurEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TemporalAAMotionBlurEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360RenderingFeaturesTemporalAASettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::NewProp_TemporalAAEnabled_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesTemporalAASettings*)Obj)->TemporalAAEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::NewProp_TemporalAAEnabled = { "TemporalAAEnabled", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWL360RenderingFeaturesTemporalAASettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::NewProp_TemporalAAEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporalAAEnabled_MetaData), NewProp_TemporalAAEnabled_MetaData) };
void Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::NewProp_TemporalAAMotionBlurEnabled_SetBit(void* Obj)
{
	((FOWL360RenderingFeaturesTemporalAASettings*)Obj)->TemporalAAMotionBlurEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::NewProp_TemporalAAMotionBlurEnabled = { "TemporalAAMotionBlurEnabled", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOWL360RenderingFeaturesTemporalAASettings), &Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::NewProp_TemporalAAMotionBlurEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporalAAMotionBlurEnabled_MetaData), NewProp_TemporalAAMotionBlurEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::NewProp_TemporalAAEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::NewProp_TemporalAAMotionBlurEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360RenderingFeaturesTemporalAASettings",
	Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::PropPointers),
	sizeof(FOWL360RenderingFeaturesTemporalAASettings),
	alignof(FOWL360RenderingFeaturesTemporalAASettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesTemporalAASettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesTemporalAASettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesTemporalAASettings.InnerSingleton;
}
// End ScriptStruct FOWL360RenderingFeaturesTemporalAASettings

// Begin ScriptStruct FOWL360RenderingFeaturesSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesSettings;
class UScriptStruct* FOWL360RenderingFeaturesSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360RenderingFeaturesSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360RenderingFeaturesSettings>()
{
	return FOWL360RenderingFeaturesSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientCubemap_MetaData[] = {
		{ "Category", "Rendering Features" },
		{ "Comment", "/**\n\x09 * Allows custom post process materials to be defined, using a MaterialInstance with the same Material as its parent to allow blending.\n\x09 * For materials this needs to be the \"PostProcess\" domain type. This can be used for any UObject object implementing the IBlendableInterface (e.g. could be used to fade weather settings).\n\x09 *///UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Rendering Features\", meta = (Keywords = \"PostProcess\", DisplayName = \"Post Process Materials\"))\n//FOWL360WeightedBlendables WeightedBlendables;\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Allows custom post process materials to be defined, using a MaterialInstance with the same Material as its parent to allow blending.\nFor materials this needs to be the \"PostProcess\" domain type. This can be used for any UObject object implementing the IBlendableInterface (e.g. could be used to fade weather settings).\n        //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Rendering Features\", meta = (Keywords = \"PostProcess\", DisplayName = \"Post Process Materials\"))\n//FOWL360WeightedBlendables WeightedBlendables;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusion_MetaData[] = {
		{ "Category", "Rendering Features" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingAmbientOcclusion_MetaData[] = {
		{ "Category", "Rendering Features" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlur_MetaData[] = {
		{ "Category", "Rendering Features" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Translucency_MetaData[] = {
		{ "Category", "Rendering Features" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayTracingTranslucency_MetaData[] = {
		{ "Category", "Rendering Features" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathTracing_MetaData[] = {
		{ "Category", "Rendering Features" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemporalAA_MetaData[] = {
		{ "Category", "Rendering Features" },
		{ "Comment", "//UPROPERTY(Interp, BlueprintReadWrite, Category = \"Rendering Features\")\n//FOWL360RenderingFeaturesMiscSettings Misc;\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "UPROPERTY(Interp, BlueprintReadWrite, Category = \"Rendering Features\")\nFOWL360RenderingFeaturesMiscSettings Misc;" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmbientCubemap;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmbientOcclusion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayTracingAmbientOcclusion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MotionBlur;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Translucency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RayTracingTranslucency;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathTracing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TemporalAA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360RenderingFeaturesSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewProp_AmbientCubemap = { "AmbientCubemap", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesSettings, AmbientCubemap), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientCubemap_MetaData), NewProp_AmbientCubemap_MetaData) }; // 3133966156
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewProp_AmbientOcclusion = { "AmbientOcclusion", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesSettings, AmbientOcclusion), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientOcclusion_MetaData), NewProp_AmbientOcclusion_MetaData) }; // 260461816
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewProp_RayTracingAmbientOcclusion = { "RayTracingAmbientOcclusion", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesSettings, RayTracingAmbientOcclusion), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingAmbientOcclusion_MetaData), NewProp_RayTracingAmbientOcclusion_MetaData) }; // 1969691016
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewProp_MotionBlur = { "MotionBlur", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesSettings, MotionBlur), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionBlur_MetaData), NewProp_MotionBlur_MetaData) }; // 3669855106
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewProp_Translucency = { "Translucency", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesSettings, Translucency), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Translucency_MetaData), NewProp_Translucency_MetaData) }; // 3586482257
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewProp_RayTracingTranslucency = { "RayTracingTranslucency", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesSettings, RayTracingTranslucency), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayTracingTranslucency_MetaData), NewProp_RayTracingTranslucency_MetaData) }; // 199196464
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewProp_PathTracing = { "PathTracing", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesSettings, PathTracing), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathTracing_MetaData), NewProp_PathTracing_MetaData) }; // 247850118
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewProp_TemporalAA = { "TemporalAA", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360RenderingFeaturesSettings, TemporalAA), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemporalAA_MetaData), NewProp_TemporalAA_MetaData) }; // 2201660197
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewProp_AmbientCubemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewProp_AmbientOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewProp_RayTracingAmbientOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewProp_MotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewProp_Translucency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewProp_RayTracingTranslucency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewProp_PathTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewProp_TemporalAA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360RenderingFeaturesSettings",
	Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::PropPointers),
	sizeof(FOWL360RenderingFeaturesSettings),
	alignof(FOWL360RenderingFeaturesSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesSettings.InnerSingleton;
}
// End ScriptStruct FOWL360RenderingFeaturesSettings

// Begin ScriptStruct FOWL360FilmGrainSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360FilmGrainSettings;
class UScriptStruct* FOWL360FilmGrainSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360FilmGrainSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360FilmGrainSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360FilmGrainSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360FilmGrainSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360FilmGrainSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360FilmGrainSettings>()
{
	return FOWL360FilmGrainSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainIntensity_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainIntensityShadows_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainIntensityMidtones_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainIntensityHighlights_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainShadowsMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainHighlightsMin_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainHighlightsMax_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainTexelSize_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_FilmGrainTexture_MetaData[] = {
		{ "Category", "Overrides" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainIntensity_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "Comment", "/** 0..1 Film grain intensity to apply. LinearSceneColor *= lerp(1.0, DecodedFilmGrainTexture, FilmGrainIntensity) */" },
		{ "editcondition", "bOverride_FilmGrainIntensity" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "0..1 Film grain intensity to apply. LinearSceneColor *= lerp(1.0, DecodedFilmGrainTexture, FilmGrainIntensity)" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainIntensityShadows_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "editcondition", "bOverride_FilmGrainIntensityShadows" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainIntensityMidtones_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "editcondition", "bOverride_FilmGrainIntensityMidtones" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainIntensityHighlights_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "editcondition", "bOverride_FilmGrainIntensityHighlights" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainShadowsMax_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "editcondition", "bOverride_FilmGrainShadowsMax" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainHighlightsMin_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "editcondition", "bOverride_FilmGrainHighlightsMin" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainHighlightsMax_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "Comment", "/** Should be set larger than HighlightsMin. Default is 1.0, for backwards compatibility */" },
		{ "editcondition", "bOverride_FilmGrainHighlightsMax" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Should be set larger than HighlightsMin. Default is 1.0, for backwards compatibility" },
		{ "UIMax", "10.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainTexelSize_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "Comment", "/** Size of texel of FilmGrainTexture on screen. */" },
		{ "editcondition", "bOverride_FilmGrainTexelSize" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Size of texel of FilmGrainTexture on screen." },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrainTexture_MetaData[] = {
		{ "Category", "Film Grain" },
		{ "Comment", "/** Defines film grain texture to use. */" },
		{ "editcondition", "bOverride_FilmGrainTexture" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "Defines film grain texture to use." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_FilmGrainIntensity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainIntensity;
	static void NewProp_bOverride_FilmGrainIntensityShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainIntensityShadows;
	static void NewProp_bOverride_FilmGrainIntensityMidtones_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainIntensityMidtones;
	static void NewProp_bOverride_FilmGrainIntensityHighlights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainIntensityHighlights;
	static void NewProp_bOverride_FilmGrainShadowsMax_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainShadowsMax;
	static void NewProp_bOverride_FilmGrainHighlightsMin_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainHighlightsMin;
	static void NewProp_bOverride_FilmGrainHighlightsMax_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainHighlightsMax;
	static void NewProp_bOverride_FilmGrainTexelSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainTexelSize;
	static void NewProp_bOverride_FilmGrainTexture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_FilmGrainTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainIntensityShadows;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainIntensityMidtones;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainIntensityHighlights;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainShadowsMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainHighlightsMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainHighlightsMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilmGrainTexelSize;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FilmGrainTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360FilmGrainSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainIntensity_SetBit(void* Obj)
{
	((FOWL360FilmGrainSettings*)Obj)->bOverride_FilmGrainIntensity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainIntensity = { "bOverride_FilmGrainIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360FilmGrainSettings), &Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainIntensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_FilmGrainIntensity_MetaData), NewProp_bOverride_FilmGrainIntensity_MetaData) };
void Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainIntensityShadows_SetBit(void* Obj)
{
	((FOWL360FilmGrainSettings*)Obj)->bOverride_FilmGrainIntensityShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainIntensityShadows = { "bOverride_FilmGrainIntensityShadows", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360FilmGrainSettings), &Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainIntensityShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_FilmGrainIntensityShadows_MetaData), NewProp_bOverride_FilmGrainIntensityShadows_MetaData) };
void Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainIntensityMidtones_SetBit(void* Obj)
{
	((FOWL360FilmGrainSettings*)Obj)->bOverride_FilmGrainIntensityMidtones = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainIntensityMidtones = { "bOverride_FilmGrainIntensityMidtones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360FilmGrainSettings), &Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainIntensityMidtones_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_FilmGrainIntensityMidtones_MetaData), NewProp_bOverride_FilmGrainIntensityMidtones_MetaData) };
void Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainIntensityHighlights_SetBit(void* Obj)
{
	((FOWL360FilmGrainSettings*)Obj)->bOverride_FilmGrainIntensityHighlights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainIntensityHighlights = { "bOverride_FilmGrainIntensityHighlights", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360FilmGrainSettings), &Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainIntensityHighlights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_FilmGrainIntensityHighlights_MetaData), NewProp_bOverride_FilmGrainIntensityHighlights_MetaData) };
void Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainShadowsMax_SetBit(void* Obj)
{
	((FOWL360FilmGrainSettings*)Obj)->bOverride_FilmGrainShadowsMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainShadowsMax = { "bOverride_FilmGrainShadowsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360FilmGrainSettings), &Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainShadowsMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_FilmGrainShadowsMax_MetaData), NewProp_bOverride_FilmGrainShadowsMax_MetaData) };
void Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMin_SetBit(void* Obj)
{
	((FOWL360FilmGrainSettings*)Obj)->bOverride_FilmGrainHighlightsMin = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMin = { "bOverride_FilmGrainHighlightsMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360FilmGrainSettings), &Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_FilmGrainHighlightsMin_MetaData), NewProp_bOverride_FilmGrainHighlightsMin_MetaData) };
void Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMax_SetBit(void* Obj)
{
	((FOWL360FilmGrainSettings*)Obj)->bOverride_FilmGrainHighlightsMax = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMax = { "bOverride_FilmGrainHighlightsMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360FilmGrainSettings), &Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMax_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_FilmGrainHighlightsMax_MetaData), NewProp_bOverride_FilmGrainHighlightsMax_MetaData) };
void Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainTexelSize_SetBit(void* Obj)
{
	((FOWL360FilmGrainSettings*)Obj)->bOverride_FilmGrainTexelSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainTexelSize = { "bOverride_FilmGrainTexelSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360FilmGrainSettings), &Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainTexelSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_FilmGrainTexelSize_MetaData), NewProp_bOverride_FilmGrainTexelSize_MetaData) };
void Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainTexture_SetBit(void* Obj)
{
	((FOWL360FilmGrainSettings*)Obj)->bOverride_FilmGrainTexture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainTexture = { "bOverride_FilmGrainTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FOWL360FilmGrainSettings), &Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainTexture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_FilmGrainTexture_MetaData), NewProp_bOverride_FilmGrainTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainIntensity = { "FilmGrainIntensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360FilmGrainSettings, FilmGrainIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmGrainIntensity_MetaData), NewProp_FilmGrainIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainIntensityShadows = { "FilmGrainIntensityShadows", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360FilmGrainSettings, FilmGrainIntensityShadows), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmGrainIntensityShadows_MetaData), NewProp_FilmGrainIntensityShadows_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainIntensityMidtones = { "FilmGrainIntensityMidtones", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360FilmGrainSettings, FilmGrainIntensityMidtones), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmGrainIntensityMidtones_MetaData), NewProp_FilmGrainIntensityMidtones_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainIntensityHighlights = { "FilmGrainIntensityHighlights", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360FilmGrainSettings, FilmGrainIntensityHighlights), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmGrainIntensityHighlights_MetaData), NewProp_FilmGrainIntensityHighlights_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainShadowsMax = { "FilmGrainShadowsMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360FilmGrainSettings, FilmGrainShadowsMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmGrainShadowsMax_MetaData), NewProp_FilmGrainShadowsMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainHighlightsMin = { "FilmGrainHighlightsMin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360FilmGrainSettings, FilmGrainHighlightsMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmGrainHighlightsMin_MetaData), NewProp_FilmGrainHighlightsMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainHighlightsMax = { "FilmGrainHighlightsMax", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360FilmGrainSettings, FilmGrainHighlightsMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmGrainHighlightsMax_MetaData), NewProp_FilmGrainHighlightsMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainTexelSize = { "FilmGrainTexelSize", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360FilmGrainSettings, FilmGrainTexelSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmGrainTexelSize_MetaData), NewProp_FilmGrainTexelSize_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainTexture = { "FilmGrainTexture", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360FilmGrainSettings, FilmGrainTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmGrainTexture_MetaData), NewProp_FilmGrainTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainIntensityShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainIntensityMidtones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainIntensityHighlights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainShadowsMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainHighlightsMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainTexelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_bOverride_FilmGrainTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainIntensityShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainIntensityMidtones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainIntensityHighlights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainShadowsMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainHighlightsMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainHighlightsMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainTexelSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewProp_FilmGrainTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360FilmGrainSettings",
	Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::PropPointers),
	sizeof(FOWL360FilmGrainSettings),
	alignof(FOWL360FilmGrainSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360FilmGrainSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360FilmGrainSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360FilmGrainSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360FilmGrainSettings.InnerSingleton;
}
// End ScriptStruct FOWL360FilmGrainSettings

// Begin ScriptStruct FOWL360PostProcessSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OWL360PostProcessSettings;
class UScriptStruct* FOWL360PostProcessSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360PostProcessSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OWL360PostProcessSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWL360PostProcessSettings, (UObject*)Z_Construct_UPackage__Script_OWL360Camera(), TEXT("OWL360PostProcessSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OWL360PostProcessSettings.OuterSingleton;
}
template<> OWL360CAMERA_API UScriptStruct* StaticStruct<FOWL360PostProcessSettings>()
{
	return FOWL360PostProcessSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** To be able to use struct PostProcessSettings. */// the variable declaration and further down the default value for it.\n// The comment should include the meaning and usable range.\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "To be able to use struct PostProcessSettings. // the variable declaration and further down the default value for it.\n// The comment should include the meaning and usable range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lens_MetaData[] = {
		{ "Category", "Off World Live 360 Post Process Settings" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorGrading_MetaData[] = {
		{ "Category", "Off World Live 360 Post Process Settings" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalIllumination_MetaData[] = {
		{ "Category", "Off World Live 360 Post Process Settings" },
		{ "Comment", "//UPROPERTY(interp, BlueprintReadWrite, Category = \"Off World Live 360 Post Process Settings\")\n//FOWL360FilmSettings Film;\n" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
		{ "ToolTip", "UPROPERTY(interp, BlueprintReadWrite, Category = \"Off World Live 360 Post Process Settings\")\nFOWL360FilmSettings Film;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reflections_MetaData[] = {
		{ "Category", "Off World Live 360 Post Process Settings" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderingFeatures_MetaData[] = {
		{ "Category", "Off World Live 360 Post Process Settings" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmGrain_MetaData[] = {
		{ "Category", "Off World Live 360 Post Process Settings" },
		{ "ModuleRelativePath", "Public/PostProcessing/OWL360PostProcessSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Lens;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGrading;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalIllumination;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Reflections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderingFeatures;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilmGrain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWL360PostProcessSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::NewProp_Lens = { "Lens", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360PostProcessSettings, Lens), Z_Construct_UScriptStruct_FOWL360LensSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lens_MetaData), NewProp_Lens_MetaData) }; // 4125741985
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::NewProp_ColorGrading = { "ColorGrading", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360PostProcessSettings, ColorGrading), Z_Construct_UScriptStruct_FOWL360ColorGradingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorGrading_MetaData), NewProp_ColorGrading_MetaData) }; // 163873265
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::NewProp_GlobalIllumination = { "GlobalIllumination", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360PostProcessSettings, GlobalIllumination), Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalIllumination_MetaData), NewProp_GlobalIllumination_MetaData) }; // 1950794762
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::NewProp_Reflections = { "Reflections", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360PostProcessSettings, Reflections), Z_Construct_UScriptStruct_FOWL360ReflectionsSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reflections_MetaData), NewProp_Reflections_MetaData) }; // 154042267
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::NewProp_RenderingFeatures = { "RenderingFeatures", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360PostProcessSettings, RenderingFeatures), Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderingFeatures_MetaData), NewProp_RenderingFeatures_MetaData) }; // 3581144812
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::NewProp_FilmGrain = { "FilmGrain", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWL360PostProcessSettings, FilmGrain), Z_Construct_UScriptStruct_FOWL360FilmGrainSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmGrain_MetaData), NewProp_FilmGrain_MetaData) }; // 3461296750
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::NewProp_Lens,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::NewProp_ColorGrading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::NewProp_GlobalIllumination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::NewProp_Reflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::NewProp_RenderingFeatures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::NewProp_FilmGrain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWL360Camera,
	nullptr,
	&NewStructOps,
	"OWL360PostProcessSettings",
	Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::PropPointers),
	sizeof(FOWL360PostProcessSettings),
	alignof(FOWL360PostProcessSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWL360PostProcessSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OWL360PostProcessSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OWL360PostProcessSettings.InnerSingleton, Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OWL360PostProcessSettings.InnerSingleton;
}
// End ScriptStruct FOWL360PostProcessSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_OWL360PostProcessSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOWL360BloomAdvancedSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360BloomAdvancedSettings_Statics::NewStructOps, TEXT("OWL360BloomAdvancedSettings"), &Z_Registration_Info_UScriptStruct_OWL360BloomAdvancedSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360BloomAdvancedSettings), 4183588739U) },
		{ FOWL360LensBloomSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360LensBloomSettings_Statics::NewStructOps, TEXT("OWL360LensBloomSettings"), &Z_Registration_Info_UScriptStruct_OWL360LensBloomSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360LensBloomSettings), 1605351206U) },
		{ FOWL360LensExposureSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360LensExposureSettings_Statics::NewStructOps, TEXT("OWL360LensExposureSettings"), &Z_Registration_Info_UScriptStruct_OWL360LensExposureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360LensExposureSettings), 3881153610U) },
		{ FOWL360LensCameraSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360LensCameraSettings_Statics::NewStructOps, TEXT("OWL360LensCameraSettings"), &Z_Registration_Info_UScriptStruct_OWL360LensCameraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360LensCameraSettings), 2725567570U) },
		{ FOWL360LensLocalExposureSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360LensLocalExposureSettings_Statics::NewStructOps, TEXT("OWL360LensLocalExposureSettings"), &Z_Registration_Info_UScriptStruct_OWL360LensLocalExposureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360LensLocalExposureSettings), 2854158559U) },
		{ FOWL360LensDepthOfFieldSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360LensDepthOfFieldSettings_Statics::NewStructOps, TEXT("OWL360LensDepthOfFieldSettings"), &Z_Registration_Info_UScriptStruct_OWL360LensDepthOfFieldSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360LensDepthOfFieldSettings), 1875568256U) },
		{ FOWL360LensSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360LensSettings_Statics::NewStructOps, TEXT("OWL360LensSettings"), &Z_Registration_Info_UScriptStruct_OWL360LensSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360LensSettings), 4125741985U) },
		{ FOWL360ColorGradingTemperatureSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360ColorGradingTemperatureSettings_Statics::NewStructOps, TEXT("OWL360ColorGradingTemperatureSettings"), &Z_Registration_Info_UScriptStruct_OWL360ColorGradingTemperatureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360ColorGradingTemperatureSettings), 3666829767U) },
		{ FOWL360ColorGradingGlobalSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360ColorGradingGlobalSettings_Statics::NewStructOps, TEXT("OWL360ColorGradingGlobalSettings"), &Z_Registration_Info_UScriptStruct_OWL360ColorGradingGlobalSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360ColorGradingGlobalSettings), 1740672498U) },
		{ FOWL360ColorGradingShadowsSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360ColorGradingShadowsSettings_Statics::NewStructOps, TEXT("OWL360ColorGradingShadowsSettings"), &Z_Registration_Info_UScriptStruct_OWL360ColorGradingShadowsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360ColorGradingShadowsSettings), 3422532670U) },
		{ FOWL360ColorGradingHighlightsSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360ColorGradingHighlightsSettings_Statics::NewStructOps, TEXT("OWL360ColorGradingHighlightsSettings"), &Z_Registration_Info_UScriptStruct_OWL360ColorGradingHighlightsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360ColorGradingHighlightsSettings), 505145942U) },
		{ FOWL360ColorGradingMidtonesSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360ColorGradingMidtonesSettings_Statics::NewStructOps, TEXT("OWL360ColorGradingMidtonesSettings"), &Z_Registration_Info_UScriptStruct_OWL360ColorGradingMidtonesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360ColorGradingMidtonesSettings), 3163529758U) },
		{ FOWL360ColorGradingMiscSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360ColorGradingMiscSettings_Statics::NewStructOps, TEXT("OWL360ColorGradingMiscSettings"), &Z_Registration_Info_UScriptStruct_OWL360ColorGradingMiscSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360ColorGradingMiscSettings), 4077663585U) },
		{ FOWL360ColorGradingSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360ColorGradingSettings_Statics::NewStructOps, TEXT("OWL360ColorGradingSettings"), &Z_Registration_Info_UScriptStruct_OWL360ColorGradingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360ColorGradingSettings), 163873265U) },
		{ FOWL360GlobalIlluminationLumenAdvancedSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenAdvancedSettings_Statics::NewStructOps, TEXT("OWL360GlobalIlluminationLumenAdvancedSettings"), &Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationLumenAdvancedSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360GlobalIlluminationLumenAdvancedSettings), 1737749872U) },
		{ FOWL360GlobalIlluminationLumenSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360GlobalIlluminationLumenSettings_Statics::NewStructOps, TEXT("OWL360GlobalIlluminationLumenSettings"), &Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationLumenSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360GlobalIlluminationLumenSettings), 2863819300U) },
		{ FOWL360GlobalIlluminationSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360GlobalIlluminationSettings_Statics::NewStructOps, TEXT("OWL360GlobalIlluminationSettings"), &Z_Registration_Info_UScriptStruct_OWL360GlobalIlluminationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360GlobalIlluminationSettings), 1950794762U) },
		{ FOWL360ReflectionsLumenSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360ReflectionsLumenSettings_Statics::NewStructOps, TEXT("OWL360ReflectionsLumenSettings"), &Z_Registration_Info_UScriptStruct_OWL360ReflectionsLumenSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360ReflectionsLumenSettings), 2757493105U) },
		{ FOWL360ReflectionsScreenSpaceSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360ReflectionsScreenSpaceSettings_Statics::NewStructOps, TEXT("OWL360ReflectionsScreenSpaceSettings"), &Z_Registration_Info_UScriptStruct_OWL360ReflectionsScreenSpaceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360ReflectionsScreenSpaceSettings), 1124481589U) },
		{ FOWL360ReflectionsSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360ReflectionsSettings_Statics::NewStructOps, TEXT("OWL360ReflectionsSettings"), &Z_Registration_Info_UScriptStruct_OWL360ReflectionsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360ReflectionsSettings), 154042267U) },
		{ FOWL360RenderingFeaturesAmbientCubemapSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientCubemapSettings_Statics::NewStructOps, TEXT("OWL360RenderingFeaturesAmbientCubemapSettings"), &Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientCubemapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360RenderingFeaturesAmbientCubemapSettings), 3133966156U) },
		{ FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings_Statics::NewStructOps, TEXT("OWL360RenderingFeaturesAmbientOcclusionAdvancedSettings"), &Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientOcclusionAdvancedSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360RenderingFeaturesAmbientOcclusionAdvancedSettings), 1874070340U) },
		{ FOWL360RenderingFeaturesAmbientOcclusionSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesAmbientOcclusionSettings_Statics::NewStructOps, TEXT("OWL360RenderingFeaturesAmbientOcclusionSettings"), &Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesAmbientOcclusionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360RenderingFeaturesAmbientOcclusionSettings), 260461816U) },
		{ FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings_Statics::NewStructOps, TEXT("OWL360RenderingFeaturesRayTracingAmbientOcclusionSettings"), &Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesRayTracingAmbientOcclusionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360RenderingFeaturesRayTracingAmbientOcclusionSettings), 1969691016U) },
		{ FOWL360RenderingFeaturesMotionBlurSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesMotionBlurSettings_Statics::NewStructOps, TEXT("OWL360RenderingFeaturesMotionBlurSettings"), &Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesMotionBlurSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360RenderingFeaturesMotionBlurSettings), 3669855106U) },
		{ FOWL360RenderingFeaturesTranslucencySettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTranslucencySettings_Statics::NewStructOps, TEXT("OWL360RenderingFeaturesTranslucencySettings"), &Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesTranslucencySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360RenderingFeaturesTranslucencySettings), 3586482257U) },
		{ FOWL360RenderingFeaturesRayTracingTranslucencySettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesRayTracingTranslucencySettings_Statics::NewStructOps, TEXT("OWL360RenderingFeaturesRayTracingTranslucencySettings"), &Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesRayTracingTranslucencySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360RenderingFeaturesRayTracingTranslucencySettings), 199196464U) },
		{ FOWL360RenderingFeaturesPathTracingSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesPathTracingSettings_Statics::NewStructOps, TEXT("OWL360RenderingFeaturesPathTracingSettings"), &Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesPathTracingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360RenderingFeaturesPathTracingSettings), 247850118U) },
		{ FOWL360RenderingFeaturesTemporalAASettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesTemporalAASettings_Statics::NewStructOps, TEXT("OWL360RenderingFeaturesTemporalAASettings"), &Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesTemporalAASettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360RenderingFeaturesTemporalAASettings), 2201660197U) },
		{ FOWL360RenderingFeaturesSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360RenderingFeaturesSettings_Statics::NewStructOps, TEXT("OWL360RenderingFeaturesSettings"), &Z_Registration_Info_UScriptStruct_OWL360RenderingFeaturesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360RenderingFeaturesSettings), 3581144812U) },
		{ FOWL360FilmGrainSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360FilmGrainSettings_Statics::NewStructOps, TEXT("OWL360FilmGrainSettings"), &Z_Registration_Info_UScriptStruct_OWL360FilmGrainSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360FilmGrainSettings), 3461296750U) },
		{ FOWL360PostProcessSettings::StaticStruct, Z_Construct_UScriptStruct_FOWL360PostProcessSettings_Statics::NewStructOps, TEXT("OWL360PostProcessSettings"), &Z_Registration_Info_UScriptStruct_OWL360PostProcessSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWL360PostProcessSettings), 1339491173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_OWL360PostProcessSettings_h_3453442705(TEXT("/Script/OWL360Camera"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_OWL360PostProcessSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_toolkit_tmp_Plugins_OWLLivestreamingToolkit_Source_OWL360Camera_Public_PostProcessing_OWL360PostProcessSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
