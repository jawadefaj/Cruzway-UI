// Fill out your copyright notice in the Description page of Project Settings.


#include "WheeledVehicleObject.h"
#include "WheeledVehicleMovementComponent.h"


//runs first Tick when simulate
AWheeledVehicleObject::AWheeledVehicleObject()
{
	PrimaryActorTick.bCanEverTick = true;
	PrintLog("Inside vehicle object constructor ");
}

void AWheeledVehicleObject::BeginPlay()
{
	Super::BeginPlay();
	PrintLog("Inside vehicle object beginplay");
	VehicleController = GetController<AVehicleController>();
	//InitializeWheeledVehicle(BehaviorTreePath, WayPoint);
}

void AWheeledVehicleObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//PrintLog("Inside vehicle object tick");
	//VehicleVelocity = this->GetVehicleMovementComponent()->Velocity;
	//float Brake = VehicleController->GetBlackboardComponent()->GetValueAsFloat("BrakeValue");
	//float Throttle = VehicleController->GetBlackboardComponent()->GetValueAsFloat("ThrottleValue");
	//float Steer = VehicleController->GetBlackboardComponent()->GetValueAsFloat("SteerValue");
	//ApplyControlValue(Throttle, Steer, Brake);
}

bool AWheeledVehicleObject::SelfDestroy()
{
	this->Destroy();
	return true;
}

bool AWheeledVehicleObject::InitializeWheeledVehicle(FString BehaviorTreePath, AWayPoint* WayPoint)
{
	PrintLog("Initialize Wheeled Vehicle ");
	if (VehicleController != NULL)
	{
		VehicleController->InitializeVehicleController(BehaviorTreePath, WayPoint);
		return true;
	}
	
	return false;
}

void AWheeledVehicleObject::ApplyControlValue(float Throttle, float Steering, float Brake)
{
	this->GetVehicleMovement()->SetBrakeInput(Brake);
	this->GetVehicleMovement()->SetThrottleInput(Throttle);
	this->GetVehicleMovement()->SetSteeringInput(Steering);
}
