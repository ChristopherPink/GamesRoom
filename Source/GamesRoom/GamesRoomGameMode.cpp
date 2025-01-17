// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GamesRoomGameMode.h"
#include "GamesRoomHUD.h"
#include "GamesRoomCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGamesRoomGameMode::AGamesRoomGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGamesRoomHUD::StaticClass();
}
