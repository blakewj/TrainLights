// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGResourceSettings.h"

#if WITH_EDITORONLY_DATA && WITH_EDITOR
const FItemSettings& UFGResourceSettings::GetResourceSettings( TSubclassOf<  UFGItemDescriptor > resourceClass){ return *(new FItemSettings); }
#endif 
UFGResourceSettings::UFGResourceSettings(){ }
UFGResourceSettings* UFGResourceSettings::Get(){ return nullptr; }
const FResourceDepositPackage& UFGResourceSettings::GetRandomResourceDepositData( int32& out_resourceDepositPackageIdx, AActor* worldContext){ return *(new FResourceDepositPackage); }
const FResourceDepositPackage& UFGResourceSettings::GetResourceDepositDataFromClass( TSubclassOf<  UFGResourceDescriptor > desiredResourceClass, int32& out_resourceDepositPackageIdx, AActor* worldContext){ return *(new FResourceDepositPackage); }
