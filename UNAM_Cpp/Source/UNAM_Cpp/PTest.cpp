// Fill out your copyright notice in the Description page of Project Settings.


#include "PTest.h"
#include "Camera/CameraComponent.h"


// Sets default values
APTest::APTest()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(GetRootComponent());

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(GetRootComponent());
	Camera->SetRelativeLocation(FVector(-200.f, 0.f, 300.f));
	Camera->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));
	AutoPossessPlayer = EAutoReceiveInput::Player0;
	CurrentVelocity = FVector(0.f);
	MaxSpeed = 100.f;


}

// Called when the game starts or when spawned
void APTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation() + (CurrentVelocity * DeltaTime);

	SetActorLocation(NewLocation);

}

// Called to bind functionality to input
void APTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &APTest::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &APTest::MoveRight);

}

void APTest::MoveForward(float Value)
{
	CurrentVelocity.X = FMath::Clamp(Value, -1.f, 1.f) * MaxSpeed;
}

void APTest::MoveRight(float Value)
{
	CurrentVelocity.Y = FMath::Clamp(Value, -1.f, 1.f) * MaxSpeed;
}
