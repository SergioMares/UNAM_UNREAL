// Fill out your copyright notice in the Description page of Project Settings.


#include "Floater.h"

// Sets default values
AFloater::AFloater()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));

	InitialLocation = FVector(0.0f);
	PlacedLocations = FVector(0.0f);

	Offset = FVector(1.0f, 0.0f, 0.0f);
	Rotation = FRotator(1.0f, 0.0f, 0.0f);

	Force = FVector(2000000.f, 0.0f, 0.0f);
	Torque = FVector(2000000.f, 0.0f, 0.0f);


	bInitializeFloaterLocations = false;	
	bLocalOffset = false;
	bWorldOffset = false;
	bLocalRotation = false;
	bWorldRotation = false;
	bUseRandomNumbers = false;
	bUseSinFunction = false;
	bAddTorque = false;
	bAddForce = false;

	RunningTime = 0.f;
	BaseZLocation = 0.f;
}

// Called when the game starts or when spawned
void AFloater::BeginPlay()
{
	Super::BeginPlay();

	PlacedLocations = GetActorLocation();

	if (bUseRandomNumbers)
	{
		InitialLocation = FVector(FMath::FRandRange(-500.f, 500.f), 
								  FMath::FRand(), 
								  FMath::FRand()*100);
	}

	if (bInitializeFloaterLocations)
	{
		SetActorLocation(InitialLocation);
	}

	BaseZLocation = PlacedLocations.Z;
	
}

// Called every frame
void AFloater::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (bLocalOffset)
	{
		AddActorLocalOffset(Offset);
	}
	
	if (bWorldOffset)
	{
		AddActorWorldOffset(Offset);
	}

	if (bLocalRotation)
	{
		AddActorLocalRotation(Rotation);
	}

	if (bWorldRotation)
	{
		AddActorWorldRotation(Rotation);
	}

	if (bAddForce)
	{
		StaticMesh->AddForce(Force);
	}
	
	if (bAddTorque)
	{
		StaticMesh->AddTorque(Torque);
	}
	
	if (bUseSinFunction)
	{
		FVector NewLocation = GetActorLocation();

		NewLocation.Z = BaseZLocation + 100 * FMath::Sin(RunningTime);

		SetActorLocation(NewLocation);
		RunningTime += DeltaTime;
	}
	

}

