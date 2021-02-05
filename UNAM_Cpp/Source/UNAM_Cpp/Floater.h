// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Floater.generated.h"

UCLASS()
class UNAM_CPP_API AFloater : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloater();
	
	UPROPERTY(VisibleAnywhere, Category = "ActorMeshComponents")
	UStaticMeshComponent* StaticMesh;

	//Location used by the SerActor Location() when BeginPlay() is called
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Floater Variables")
	FVector InitialLocation;

	//Location od the Actor when dragged in from the editor
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Floater Variables")
	FVector PlacedLocations;
	
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Floater Variables")
	FVector Force;

	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Floater Variables")
	FVector Torque;
	
	UPROPERTY(EditInstanceOnly, Category = "Floater Variables")
	FVector Offset;
	
	UPROPERTY(EditInstanceOnly, Category = "Floater Variables")
	FRotator Rotation;

	//defines if we wanna set the location given in the instance
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Floater Variables")
	bool bInitializeFloaterLocations;

	UPROPERTY(EditAnywhere, Category = "Floater Variables")
	bool bLocalOffset;

	UPROPERTY(EditAnywhere, Category = "Floater Variables")
	bool bWorldOffset;

	UPROPERTY(EditAnywhere, Category = "Floater Variables")
	bool bLocalRotation;

	UPROPERTY(EditAnywhere, Category = "Floater Variables")
	bool bWorldRotation;

	UPROPERTY(EditAnywhere, Category = "Floater Variables")
	bool bAddForce;

	UPROPERTY(EditAnywhere, Category = "Floater Variables")
	bool bAddTorque;

	UPROPERTY(EditAnywhere, Category = "Floater Variables")
	bool bUseRandomNumbers;

	UPROPERTY(EditAnywhere, Category = "Floater Variables")
	bool bUseSinFunction;

private:
	float RunningTime;

	float BaseZLocation;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
