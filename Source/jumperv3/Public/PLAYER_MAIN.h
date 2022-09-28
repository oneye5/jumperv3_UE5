// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PLAYER_MAIN.generated.h"

UCLASS()
class JUMPERV3_API APLAYER_MAIN : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APLAYER_MAIN();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	void moveX(float x);
	void moveZ(float z);
};
