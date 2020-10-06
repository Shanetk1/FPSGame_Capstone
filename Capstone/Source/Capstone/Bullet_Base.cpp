// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet_Base.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "DrawDebugHelpers.h"
// Sets default values
ABullet_Base::ABullet_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	RootComponent = sphere;


	//AddDynamic(this, );
	


	projMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Component"));
	//projMovement->bAutoActivate = false;
	//projMovement->InitialSpeed = 3000;
	//projMovement->MaxSpeed = 3000;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	mesh->AttachTo(sphere);



}

// Called when the game starts or when spawned
FVector vel;
FVector spawnLoc;
void ABullet_Base::BeginPlay()
{
	Super::BeginPlay();
	sphere->InitSphereRadius(radius);
	SetActorLabel(name);
	sphere->OnComponentHit.AddDynamic(this, &ABullet_Base::OnBullet_BaseHit);


	sphere->ComponentVelocity = GetActorForwardVector();
//	sphere->AddImpulse()

	
	vel = GetActorForwardVector();
	spawnLoc = GetActorLocation();
//	sphere->GetComponentTransform().GetLocation().Set();


	//Mass doesnt exist?
	//Calc with gravity, wind resist.




//	projMovement->Activate();
	
	
}
// Called every frame
void ABullet_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

	FVector accel = FVector(0.f);
	vel = (GetActorForwardVector() * 30000);
	FVector pos = (GetActorLocation());



	pos += vel * DeltaTime + 0.5f * accel * DeltaTime * DeltaTime;
	vel += accel * DeltaTime;


	SetActorLocation(pos);

	UE_LOG(LogTemp, Warning, TEXT("Text, %f"), accel.X);



	DrawDebugLine(GetWorld(),spawnLoc , pos, FColor::Green, false, 1, 0, 1);


}

void ABullet_Base::OnBullet_BaseHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	//This will delete the object when hit Gathering hit component, otherActor
	
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		Destroy();
	}
}