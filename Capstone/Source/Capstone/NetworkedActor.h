// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NetworkedActor.generated.h"

UCLASS()
class CAPSTONE_API ANetworkedActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANetworkedActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	UPROPERTY(EditAnywhere, Category = Sphere)
		class USphereComponent* sphere;

	UPROPERTY(EditAnywhere, Category = Mesh)
		class UStaticMeshComponent* mesh;

};
