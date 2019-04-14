// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GamesRoomHUD.generated.h"

UCLASS()
class AGamesRoomHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGamesRoomHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

