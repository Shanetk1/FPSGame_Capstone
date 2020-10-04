// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SteeringOutput.h"
/**
 * 
 */
class CAPSTONE_API ArriveAlgorithm
{
public:
	ArriveAlgorithm();
	ArriveAlgorithm(FTransform targetTransform_, FTransform aiTransform_);
	~ArriveAlgorithm();
	SteeringOutput* getSteering();
	void setTarget(FTransform targetTransform_);
	void setCurrPos(FTransform aitTransform_);
private:
	float newOrientation(FVector velocitys);
	FTransform targetTransform;
	FTransform aiTransform;
	float radius = 100.0f;
	float timeTo;
	float maxSpeed = 200.0f;
};
