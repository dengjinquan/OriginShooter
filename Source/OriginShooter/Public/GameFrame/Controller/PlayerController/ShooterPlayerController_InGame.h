// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShooterPlayerController_InGame.generated.h"

/**
 * 
 */
UCLASS(hidedropdown)
class ORIGINSHOOTER_API AShooterPlayerController_InGame : public APlayerController
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
	virtual void TickActor(float DeltaTime, enum ELevelTick TickType, FActorTickFunction& ThisTickFunction) override;

public:
	virtual void UpdateRotation(float DeltaTime) override;
};
