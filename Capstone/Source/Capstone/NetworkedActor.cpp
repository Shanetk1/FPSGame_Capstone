// Fill out your copyright notice in the Description page of Project Settings.


#include "NetworkedActor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
// Sets default values
ANetworkedActor::ANetworkedActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;
	SetReplicates(true);
	SetReplicateMovement(true);

	sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	sphere->InitSphereRadius(45.0f);
	sphere->SetCollisionProfileName(TEXT("BlockAllDynamic"));
	RootComponent = sphere;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	mesh->AttachTo(sphere);
	mesh->SetSimulatePhysics(true);



}

// Called when the game starts or when spawned
void ANetworkedActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANetworkedActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

