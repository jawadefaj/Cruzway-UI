// Fill out your copyright notice in the Description page of Project Settings.



#include "TaskLaneFollow.h"
#include "VehicleController.h"
#include "WheeledVehicleMovementComponent.h"



EBTNodeResult::Type UTaskLaneFollow::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UBehaviorTreeComponent& MyComp = OwnerComp;
	AVehicleController* MyController = &MyComp ? Cast<AVehicleController>(MyComp.GetOwner()) : NULL;

	AWayPoint* WayPoint = MyController->WayPoint;
	UWheeledVehicleMovementComponent* VehicleMovementComponent = Cast<UWheeledVehicleMovementComponent>( MyController->BlackboardComponent->GetValueAsObject("WheeledVehicleMovementComponent"));
	
	PrintLog("Forward speed  " + FString::SanitizeFloat(VehicleMovementComponent->GetForwardSpeed()));
	return EBTNodeResult::Succeeded;
}

float UTaskLaneFollow::UpdatedSteeringValue(AWayPoint* WayPoint, float Delta)
{
	return 0.0f;
}

float UTaskLaneFollow::UpdatedThrottleValue()
{
	return 0.0f;
}
