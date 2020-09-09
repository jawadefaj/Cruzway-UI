// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehicle.h"
#include "WheeledVehicleObject.generated.h"

/**
 * 
 */
UCLASS()
class BT_PLUGIN_API AWheeledVehicleObject : public AWheeledVehicle
{
	GENERATED_BODY()

private:
	// Sets default values for this actor's properties
	AWheeledVehicleObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:

};
