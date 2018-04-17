// Copyright 2018 fadedGames

#include "TankPlayerController.h"

ATank* ATankPlayerController::GetControlledTank() const
{

	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("PlayerController Begin Play Run"));
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Error, TEXT("PlayerController not possessing tank!!"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Controlled Tank %s, found!"), *ControlledTank->GetName());
	}
	
}


