// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet_Base.generated.h"

UCLASS()
class CAPSTONE_API ABullet_Base : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet_Base();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere, Category = BulletProperties)
		class USphereComponent* sphere;

	UPROPERTY(EditAnywhere, Category = BulletProperties)
		class UProjectileMovementComponent*	projMovement;

	UPROPERTY(EditAnywhere, Category = BulletProperties)
		class UStaticMeshComponent* mesh;


	UPROPERTY(EditAnywhere, Category = BulletProperties)
		float radius;


	//This is still WIP will basically be sent from weapon on create, setting the weapons muzzle velocity when exiting the muzzle of the wweapon
	//Helps us set up the physics basically
	UPROPERTY(EditAnywhere, Category = BulletProperties)
		FVector muzzleVelocity = FVector(3000.f, 0.f, 0.f);

	//Weight has no effect on the projectile movement component
	//However this variable will be used in determining effects of collision response
	UPROPERTY(EditAnywhere, Category = BulletProperties)
		float weight = 0.5f;

	UPROPERTY(EditAnywhere, Category = BulletProperties)
		FString name = "bulletDEFAULT";


	//WIP trying to create delegate for onhit event instead of using blueprint collision for destruction
	UFUNCTION()
		void OnBullet_BaseHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
