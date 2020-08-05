// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "btVehicleUtility.generated.h"

/**
 *
 */
UCLASS()
class BTPLUGIN_API UbtVehicleUtility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable)
		static void assembleVehicle();

};
