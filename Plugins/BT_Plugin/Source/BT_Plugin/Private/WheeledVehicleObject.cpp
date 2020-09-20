// Fill out your copyright notice in the Description page of Project Settings.


#include "WheeledVehicleObject.h"


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
}

void AWheeledVehicleObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//PrintLog("Inside vehicle object tick");
}
