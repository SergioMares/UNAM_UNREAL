// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Critter.generated.h"


UCLASS()
class UNAM_CPP_API ACritter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACritter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = "Mesh")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	class USpringArmComponent* SpringArm;

	UPROPERTY(EditAnywhere, Category = "PawnMove")
	float MaxSpeed;

private:

	void MoveForward(float Value);
	void MoveRight(float Value);
	
	void PitchCamera(float AxisValue);
	void YawCamera(float AxisValue);

	FVector2D CameraInput;

	FVector CurrentVelocity;

};
