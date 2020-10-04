// Fill out your copyright notice in the Description page of Project Settings.


#include "Obj_Base.h"
#include "Net/UnrealNetwork.h"

AObj_Base::AObj_Base()
{
	bReplicates = true;

	PrimaryActorTick.bCanEverTick = false;

	if (GetLocalRole() == ROLE_Authority)
	{
		bActive = true;
	}
}

void AObj_Base::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AObj_Base, bActive);
}

bool AObj_Base::isActive()
{
	return bActive;
}

void AObj_Base::SetActive(bool newItemState)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		bActive = newItemState;
	}
}

void AObj_Base::OnRep_IsActive()
{

}
