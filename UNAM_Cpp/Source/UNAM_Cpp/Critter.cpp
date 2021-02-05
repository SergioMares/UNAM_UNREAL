// Fill out your copyright notice in the Description page of Project Settings.


#include "Critter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
ACritter::ACritter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//we can access directly to the RootComponent because of Hierarchy
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(GetRootComponent());
	
	
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));
	SpringArm->TargetArmLength = 400.f;
	SpringArm->bEnableCameraLag = true;
	SpringArm->CameraLagSpeed = 3.f;	

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	
	CameraInput = FVector2D(0.f, 0.f);


	AutoPossessPlayer = EAutoReceiveInput::Player0;

	CurrentVelocity = FVector(0.f);
	MaxSpeed = 100.f;
}

// Called when the game starts or when spawned
void ACritter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACritter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation() + (CurrentVelocity * DeltaTime);
	SetActorLocation(NewLocation);
	
	
	FRotator NewRotation = GetActorRotation();
	NewRotation.Yaw += CameraInput.X;	
	SetActorRotation(NewRotation);
	
	
	FRotator NewSpringArmRotation = SpringArm->GetComponentRotation();
	NewSpringArmRotation.Pitch = FMath::Clamp(NewSpringArmRotation.Pitch += CameraInput.Y, -80.f, -15.f);
	//NewSpringArmRotation.Pitch += CameraInput.Y;

	SpringArm->SetWorldRotation(NewSpringArmRotation);
	
}

// Called to bind functionality to input
void ACritter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ACritter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &ACritter::MoveRight);

	PlayerInputComponent->BindAxis(TEXT("CameraPitch"), this, &ACritter::PitchCamera);
	PlayerInputComponent->BindAxis(TEXT("CameraYaw"), this, &ACritter::YawCamera);

}

void ACritter::MoveForward(float Value)
{
	CurrentVelocity.X = FMath::Clamp(Value, -1.f, 1.f) * MaxSpeed;
}

void ACritter::MoveRight(float Value)
{
	CurrentVelocity.Y = FMath::Clamp(Value, -1.f, 1.f) * MaxSpeed;
}

void ACritter::PitchCamera(float AxisValue)
{
	CameraInput.Y = AxisValue;
}

void ACritter::YawCamera(float AxisValue)
{
	CameraInput.X = AxisValue;
}