// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterPlayerController_InGame.h"

void AShooterPlayerController_InGame::BeginPlay()
{
	Super::BeginPlay();


}

void AShooterPlayerController_InGame::TickActor(float DeltaTime, enum ELevelTick TickType, FActorTickFunction& ThisTickFunction)
{
	Super::TickActor(DeltaTime, TickType, ThisTickFunction);
}

void AShooterPlayerController_InGame::UpdateRotation(float DeltaTime)
{
	Super::UpdateRotation(DeltaTime);
}
