// Fill out your copyright notice in the Description page of Project Settings.


#include "CruzwayUtility.h"

#include "WheeledVehicleObject.h"
#include "AssetRegistryModule.h"
#include "AssetData.h"
#include "AssetDataTagMap.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "AssetToolsModule.h"
#include "PackageTools.h"
#include "ObjectTools.h"
#include "UObject/UObjectGlobals.h"
#include "KismetCompilerModule.h"
#include "Toolkits/AssetEditorManager.h"
#include "FileHelpers.h"

void UCruzwayUtility::assembleVehicle() {
    UE_LOG(LogTemp, Warning, TEXT("Assembling the car"));
    FAssetRegistryModule &AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

    //TODO: change hardcoding and move to FGuid
    FString name = "Test_1";
    FName fname = *name;
    FString packagePath = "/BT_Plugin/VehicleModel/" + name;
    UE_LOG(LogTemp, Warning, TEXT("Package Path: %s"), *packagePath);
    UPackage *OuterForAsset = CreatePackage(nullptr, *packagePath);


    UClass *BlueprintClass = nullptr;
    UClass *BlueprintGeneratedClass = nullptr;

    IKismetCompilerInterface &KismetCompilerModule = FModuleManager::LoadModuleChecked<IKismetCompilerInterface>("KismetCompiler");
    KismetCompilerModule.GetBlueprintTypesForClass(AWheeledVehicleObject::StaticClass(), BlueprintClass, BlueprintGeneratedClass);

    UBlueprint* newBlueprint = FKismetEditorUtilities::CreateBlueprint(AWheeledVehicleObject::StaticClass(), OuterForAsset, fname, BPTYPE_Normal, BlueprintClass, BlueprintGeneratedClass, FName("GeneratingBlueprintTest"));
    UE_LOG(LogTemp, Warning, TEXT("Done1 here"));
    FAssetRegistryModule::AssetCreated(newBlueprint);
    FAssetEditorManager::Get().OpenEditorForAsset(newBlueprint);

    OuterForAsset->SetDirtyFlag(true);
    TArray<UPackage*> packagesToSave;
    packagesToSave.Add(OuterForAsset);
    FEditorFileUtils::PromptForCheckoutAndSave(packagesToSave, false, false);
    UE_LOG(LogTemp, Warning, TEXT("Done here"));
}
