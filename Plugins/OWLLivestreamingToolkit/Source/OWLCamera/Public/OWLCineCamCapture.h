// Copyright Off World Live Limited 2020-2024. All rights reserved.


#pragma once

#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "OWLCineCamCapture.generated.h"

UCLASS(hidecategories = (Collision, Attachment, Actor), meta=(DisplayName="OWL Cine Camera Capture"))
class OWLCAMERA_API AOWLCineCamCapture : public ACineCameraActor
{
	GENERATED_BODY()

public:
	AOWLCineCamCapture(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(Category = OffWorldLive, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UOWLCaptureComponent* CaptureComponent = nullptr;
};

