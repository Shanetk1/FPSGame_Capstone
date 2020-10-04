// Fill out your copyright notice in the Description page of Project Settings.


#include "NetworkedObjTest.h"

ANetworkedObjTest::ANetworkedObjTest()
{
	//Keep sync
	SetReplicates(true);
	SetReplicateMovement(true);

	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetSimulatePhysics(true);
}