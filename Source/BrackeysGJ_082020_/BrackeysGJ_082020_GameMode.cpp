// Copyright Epic Games, Inc. All Rights Reserved.

#include "BrackeysGJ_082020_GameMode.h"
#include "BrackeysGJ_082020_PlayerController.h"
#include "BrackeysGJ_082020_Character.h"
#include "UObject/ConstructorHelpers.h"

ABrackeysGJ_082020_GameMode::ABrackeysGJ_082020_GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ABrackeysGJ_082020_PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}