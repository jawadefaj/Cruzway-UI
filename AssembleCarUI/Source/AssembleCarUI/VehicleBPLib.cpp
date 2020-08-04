// Fill out your copyright notice in the Description page of Project Settings.

#include "VehicleBPLib.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "AssetRegistryModule.h"
#include "AssetData.h"
#include "AssetDataTagMap.h"

void UVehicleBPLib::assembleVehicle(FString skeletalMesh, FString animationBlueprint, FString physicsAsset)
{
    //return TEXT("Hello World");
    //UBlueprint* Vehicle = FKismetEditorUtilities::CreateBlueprintUsingAsset("/Game/VehicleVarietyPack/Blueprints/BoxTruck/BP_BoxTruck", true);
    UE_LOG(LogTemp, Warning, TEXT("\tSkel Mesh: %s"), *skeletalMesh);
    UE_LOG(LogTemp, Warning, TEXT("\tAnimation Blueprint: %s"), *animationBlueprint);
    UE_LOG(LogTemp, Warning, TEXT("\tSkel Mesh: %s"), *physicsAsset);

    FAssetRegistryModule &AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
    TArray<FAssetData> AssetData;
    const UClass *Class = UStaticMesh::StaticClass();
    //FString myPath = "/Game/VehicleVarietyPack/Meshes";
    FString myPath = "/Game/VehicleVarietyPack/Blueprints/BoxTruck";
    FName nm = FName(*myPath);
    AssetRegistryModule.Get().GetAssetsByPath(nm, AssetData, false, true);
    for (auto const &Asset : AssetData)
    {

        UBlueprint *blueprinto = Cast<UBlueprint>(Asset.GetAsset());
        if ((blueprinto))
        {
            UE_LOG(LogTemp, Warning, TEXT("\t\t\t%s"), *(blueprinto->GetFriendlyName()));
            /*
             for (TFieldIterator<UProperty> PropIt(blueprinto->GeneratedClass); PropIt; ++PropIt)
             {
                 UProperty* Property = *PropIt;
                 // Do something with the property
                 UE_LOG(LogTemp, Warning, TEXT("%s"), *Property->GetName())
             }
             */
        }
    }
}