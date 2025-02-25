// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "Classes/Components/SplineComponent.h"
#include "GameFramework/Actor.h"
#include "WayPoint.generated.h"

UCLASS()
class BT_PLUGIN_API AWayPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWayPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	USplineComponent* SplineComponent;
	UPROPERTY(EditAnywhere)
	FString splineID;
	UPROPERTY(EditAnywhere)
	TArray<AWayPoint*> ConnectedSpline;
	UPROPERTY(EditAnywhere)
	TArray<AWayPoint*> CutSpline;
	UPROPERTY(EditAnywhere)
	TArray<APawn*> VehiclePawnList;

	UPROPERTY(EditAnywhere)
	FString turnType;
	FVector directionOfSpline;

	//UPROPERTY(EditAnywhere)
	//TMap<FString, AWayPoint*> ConnectedSplineMap;
	UPROPERTY(EditAnywhere)
	float TotalDistance = 0.0;
	UPROPERTY(EditAnywhere)
	int SpeedLimit = 0;
	UPROPERTY(EditAnywhere)
	bool isStopSignConnected = false;
	int32 twoTimesTotalConnectedSplines = 0; //multiple of 2
	void calculateCurrentSplineTurnTypes();
	FString calculateDecalSelection();
	float GetDistanceAlongSpline(FVector WorldLocation);

	void PrintLog(FString Text)
	{
		if (!GEngine) return;
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, *Text);
	}
};
