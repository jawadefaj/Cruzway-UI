// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CruzwayUtility.generated.h"

/**
 *
 */
UCLASS()
class MYPROJECTCRUZWAYUI_API UCruzwayUtility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		// Creates a new Blueprint
		UFUNCTION(BlueprintCallable)
		static void assembleVehicle();
};
