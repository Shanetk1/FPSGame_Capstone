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

	bUseControllerRotationYaw = true;
	bUseControllerRotationPitch = true;
	//Attach camera to root component might be bad so idk yet


	FRotator NewRotation = FRotator(0.0f, -90.0f, 0.0f);
	FQuat QuatRotation = FQuat(NewRotation);

	USkeletalMeshComponent* derMesh = GetMesh();
	derMesh->SetRelativeLocation(FVector(0.0f,0.0f, -50.0f));
	derMesh->SetRelativeRotation(QuatRotation);
	

	hands = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("hands"));
	hands->AttachTo(RootComponent);
	hands->SetRelativeLocation(FVector(0.0f, 0.0f, -100.f));
	hands->SetRelativeRotation(QuatRotation);

	gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun"));
	gun->AttachToComponent(hands, FAttachmentTransformRules::KeepWorldTransform, FName("R_GunSocket"));
	gun->SetVisibility(false, false);



	springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	springArm->AttachToComponent(hands,FAttachmentTransformRules::KeepWorldTransform, FName("CameraSocket"));
	springArm->TargetArmLength = 0.0f;
	springArm->bEnableCameraLag = true;
	springArm->CameraLagMaxDistance = 4.0f;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->AttachTo(springArm);
	Camera->SetRelativeRotation(FRotator(0.0f,90.0f, 0.0f));
	
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

	InputComponent->BindAction("Left_Click", IE_Pressed, this, &APlayerCharacter::leftClick);



}

//Input Controls (Action Mappings)
void APlayerCharacter::leftClick()
{

}





//Movement Controls (Axis Mappings)
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
	if (val)
	{
		AddControllerYawInput(val);
		//AddActorLocalRotation(FRotator(0,val, 0));
	}
}
void APlayerCharacter::vertRot(float val)
{
	AddControllerPitchInput(val * -1.0f);
}