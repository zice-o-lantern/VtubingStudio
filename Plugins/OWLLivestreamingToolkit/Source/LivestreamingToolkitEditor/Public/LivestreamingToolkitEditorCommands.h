// Copyright Off World Live Limited 2020-2024. All rights reserved.


#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "LivestreamingToolkitEditorStyle.h"

class FLivestreamingToolkitEditorCommands : public TCommands<FLivestreamingToolkitEditorCommands>
{
public:

	FLivestreamingToolkitEditorCommands()
		: TCommands<FLivestreamingToolkitEditorCommands>(TEXT("LivestreamingToolkitEditor"), NSLOCTEXT("Contexts", "LivestreamingToolkitEditor", "OWLLivestreamingToolkit Plugin"), NAME_None, FLivestreamingToolkitEditorStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
//CDV:improbable:excludestart
	TSharedPtr<FUICommandInfo> UseLivestreamWizard;
	TSharedPtr<FUICommandInfo> LogIn;
	TSharedPtr<FUICommandInfo> LogOut;
	TSharedPtr<FUICommandInfo> WaitingForLogin;
	TSharedPtr<FUICommandInfo> CancelLogin;
	TSharedPtr<FUICommandInfo> MyAccount;
	TSharedPtr<FUICommandInfo> LicenseUtility;
	TSharedPtr<FUICommandInfo> AffiliateScheme;
//CDV:improbable:excludeend
	TSharedPtr<FUICommandInfo> EditorViewportRendering;
	TSharedPtr<FUICommandInfo> RuntimeViewportRendering;
	TSharedPtr<FUICommandInfo> PluginVersion;
	TSharedPtr<FUICommandInfo> KnowledgeCentre;
	TSharedPtr<FUICommandInfo> OffWorldWebsite;
	TSharedPtr<FUICommandInfo> DiscordCommunity;
	TSharedPtr<FUICommandInfo> VideoTutorials;
//CDV:improbable:excludestart
	TSharedPtr<FUICommandInfo> OpenSourceLicenses;
//CDV:improbable:excludeend
};

