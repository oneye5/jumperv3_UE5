// Fill out your copyright notice in the Description page of Project Settings.


#include "PLAYER_MAIN.h"

// Sets default values
APLAYER_MAIN::APLAYER_MAIN()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APLAYER_MAIN::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APLAYER_MAIN::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APLAYER_MAIN::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAxis(TEXT("inputX"), this, &APLAYER_MAIN::moveX);
	PlayerInputComponent->BindAxis(TEXT("inputZ"), this, &APLAYER_MAIN::moveZ);

	PlayerInputComponent->BindAxis(TEXT("rotYaw"), this, &APLAYER_MAIN::AddControllerYawInput);
	PlayerInputComponent->BindAxis(TEXT("rotPitch"), this, &APLAYER_MAIN::AddControllerPitchInput);
}

void APLAYER_MAIN::moveZ(float z)
{
	AddMovementInput(GetActorForwardVector() * z);
}

void APLAYER_MAIN::moveX(float x)
{
	AddMovementInput(GetActorRightVector() * x);
}

