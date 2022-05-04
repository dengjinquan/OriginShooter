// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterPlayerController_InGame.h"

void AShooterPlayerController_InGame::BeginPlay()
{
	Super::BeginPlay();


}

void AShooterPlayerController_InGame::TickActor(float DeltaTime, enum ELevelTick TickType, FActorTickFunction& ThisTickFunction)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("%f,%f,%f"), RotationInput.Roll, RotationInput.Pitch, RotationInput.Yaw));

	Super::TickActor(DeltaTime, TickType, ThisTickFunction);
}

void AShooterPlayerController_InGame::UpdateRotation(float DeltaTime)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, FString::Printf(TEXT("%f,%f,%f"), RotationInput.Roll, RotationInput.Pitch, RotationInput.Yaw));

	Super::UpdateRotation(DeltaTime);
}
