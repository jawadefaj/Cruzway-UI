// Fill out your copyright notice in the Description page of Project Settings.


#include "TaskLaneFollow.h"

EBTNodeResult::Type UTaskLaneFollow::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UBehaviorTreeComponent& MyComp = OwnerComp;
	PrintLog("inside execute task");
	return EBTNodeResult::Type();
}

float UTaskLaneFollow::UpdatedSteeringValue(AWayPoint* WayPoint, float Delta)
{
	return 0.0f;
}

float UTaskLaneFollow::UpdatedThrottleValue()
{
	return 0.0f;
}
