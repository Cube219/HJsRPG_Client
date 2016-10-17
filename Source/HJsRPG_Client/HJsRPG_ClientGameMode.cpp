// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "HJsRPG_Client.h"
#include "HJsRPG_ClientGameMode.h"
#include "HJsRPG_ClientPlayerController.h"
#include "HJsRPG_ClientCharacter.h"

AHJsRPG_ClientGameMode::AHJsRPG_ClientGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AHJsRPG_ClientPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}