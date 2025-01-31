// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PTest.generated.h"

UCLASS()
class UNAM_CPP_API APTest : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APTest();

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
	
	UPROPERTY(EditAnywhere, Category = "PawnMove")
	float MaxSpeed;

private:
	void MoveForward(float Value);
	void MoveRight(float Value);
	FVector CurrentVelocity;


};
