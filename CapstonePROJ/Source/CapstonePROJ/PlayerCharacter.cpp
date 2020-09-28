// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	bUseControllerRotationYaw = false;

	//Attach camera to root component might be bad so idk yet



	hands = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("hands"));
	hands->AttachTo(RootComponent);
	hands->SetRelativeLocation(FVector(0.0f, 0.0f, -100.f));

	springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	springArm->AttachToComponent(hands,FAttachmentTransformRules::KeepWorldTransform, FName("CameraSocket"));

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->AttachTo(springArm);

		
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("Horizontal", this, &APlayerCharacter::horiMove);
	InputComponent->BindAxis("Vertical", this, &APlayerCharacter::vertMove);

	InputComponent->BindAxis("Horizontal_Rotation", this, &APlayerCharacter::horiRot);
	InputComponent->BindAxis("Vertical_Rotation", this, &APlayerCharacter::vertRot);





}

void APlayerCharacter::horiMove(float val)
{
	if (val)
	{
		AddMovementInput(GetActorRightVector(), val);
	}
}
void APlayerCharacter::vertMove(float val)
{
	if (val)
	{
		AddMovementInput(GetActorForwardVector(), val);
	}

}


void APlayerCharacter::horiRot(float val)
{

}
void APlayerCharacter::vertRot(float val)
{

}