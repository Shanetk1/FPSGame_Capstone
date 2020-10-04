// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Math/Vector.h"
/**
 * 
 */
class CAPSTONE_API SteeringOutput
{
public:
	SteeringOutput();
	~SteeringOutput();

	//This sound confusing but rather than bringing in 2 separate vectors I will use the poisition vector for velocity, and the 
	//Rotation vector for well rotation
	FTransform outputTransform;
};
