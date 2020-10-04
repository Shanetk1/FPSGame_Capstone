// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Obj_Base.generated.h"

/**
 * 
 */
UCLASS()
class CAPSTONE_API AObj_Base : public AStaticMeshActor
{
	GENERATED_BODY()
	

public:

	AObj_Base();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const override;

	UFUNCTION(BlueprintPure, Category = "Pickup")
		bool isActive();
	
	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void SetActive(bool newItemState);

protected:

	//True when pickup can be used
	UPROPERTY(ReplicatedUsing = OnRep_IsActive)
	bool bActive;

	//Called whenever BActive is updated
	UFUNCTION()
	virtual void OnRep_IsActive();

};
