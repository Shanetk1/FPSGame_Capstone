// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAI.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "ArriveAlgorithm.h"


// Sets default values
AMyAI::AMyAI()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	CapsuleComponent->InitCapsuleSize(50.f, 50.f);
	CapsuleComponent->SetupAttachment(RootComponent);

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(CapsuleComponent);
	
	//capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	//capsule->InitCapsuleSize(50.f, 50.f);
	//capsule->SetupAttachment(RootComponent);
//
	//mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
//	mesh->SetupAttachment(capsule);
	

}

// Called when the game starts or when spawned
void AMyAI::BeginPlay()
{
	Super::BeginPlay();
	myAlgorithm = new ArriveAlgorithm();



}

// Called every frame
void AMyAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	myAlgorithm->setTarget(GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorTransform());
	myAlgorithm->setCurrPos(GetActorTransform());
		//Get both transforms of myself, and the player

	
	//FVector myVelocity = myAlgorithm->getSteering()->velocity;//Updates get steering every frame
	//UE_LOG(LogTemp, Warning, TEXT("is Null?, %f"), myVelocity.X);
	SteeringOutput* output = myAlgorithm->getSteering();
	if (output != nullptr)
	{

		//Looks odd but our output 'Location' is our veloity
		FVector myVelocity = output->outputTransform.GetLocation();




		
		FVector location = GetActorLocation();
		FQuat orientation = GetActorRotation().Quaternion();
		location += myVelocity * DeltaTime;
		orientation += output->outputTransform.GetRotation() * DeltaTime;
		SetActorLocation(location);
		SetActorRotation(orientation);



	}
}

// Called to bind functionality to input
void AMyAI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

