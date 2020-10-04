// Fill out your copyright notice in the Description page of Project Settings.


#include "ArriveAlgorithm.h"

ArriveAlgorithm::ArriveAlgorithm()
{}
ArriveAlgorithm::ArriveAlgorithm(FTransform targetTransform_, FTransform aiTransform_)
{
	targetTransform = targetTransform_;
	aiTransform = aiTransform_;
}

ArriveAlgorithm::~ArriveAlgorithm()
{



}
SteeringOutput* ArriveAlgorithm::getSteering()
{
	SteeringOutput* result = new SteeringOutput();
	result->outputTransform.SetLocation(targetTransform.GetLocation() - aiTransform.GetLocation());
	//Get direction

	if (result->outputTransform.GetLocation().Size() < radius)
	{
		return nullptr;
	}

	//result->velocity /= timeTo;


	if (result->outputTransform.GetLocation().Size() > maxSpeed)
	{
		result->outputTransform.GetLocation().Normalize();
		result->outputTransform.GetLocation() *= maxSpeed;
	}
	//Hard coded max speed bad i know

	//Orientation goes here brrrr

	FQuat newRot = result->outputTransform.GetRotation();
	FQuat aiRot = aiTransform.GetRotation();
	
	result->outputTransform.SetRotation(FQuat(aiTransform.GetRotation().Vector(), newOrientation(result->outputTransform.GetLocation())));
	//We need to create orientation
	//UE_LOG(LogTemp, Warning, TEXT("Text, %d %f %s"), intVar, floatVar, *fstringVar);


	return result;
}
void ArriveAlgorithm::setCurrPos(FTransform aiTransform_)
{
	aiTransform = aiTransform_;
}
void ArriveAlgorithm::setTarget(FTransform targetTransform_)
{
	targetTransform = targetTransform_;
}
float ArriveAlgorithm::newOrientation(FVector velocity)
{
	//Basically this will be our yaw value
	if (velocity.Size() > 0)
	{
		return atan2(velocity.X, velocity.Y);
	}
	else
	{
		return 0;
	}
}