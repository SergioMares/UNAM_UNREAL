// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ColliderP.generated.h"

UCLASS()
class UNAM_CPP_API AColliderP : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AColliderP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	class USphereComponent* SphereComponent;

	FORCEINLINE UStaticMeshComponent* GetMeshComponent() { return MeshComponent; }
	FORCEINLINE void SetMeshComponent(UStaticMeshComponent* Mesh) { MeshComponent = Mesh; }
	FORCEINLINE USphereComponent* GetSphereComponent() { return SphereComponent; }
	FORCEINLINE void SetSphereComponent(USphereComponent* Sphere) { SphereComponent = Sphere; }



};
