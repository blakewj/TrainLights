// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGObjectScanner.h"

AFGObjectScanner::AFGObjectScanner(){ }
void AFGObjectScanner::BeginPlay(){ }
void AFGObjectScanner::Tick( float deltaTime){ }
void AFGObjectScanner::Equip(  AFGCharacterPlayer* character){ }
void AFGObjectScanner::UnEquip(){ }
bool AFGObjectScanner::CycleForward(){ return bool(); }
bool AFGObjectScanner::CycleBackward(){ return bool(); }
FScannableDetails AFGObjectScanner::GetCurrentDetails(){ return FScannableDetails(); }
TArray < FScannableDetails > AFGObjectScanner::GetAvailableObjectDetails(){ return TArray< FScannableDetails>(); }
void AFGObjectScanner::SetScannableEntry( TSubclassOf< AActor > scannableClass){ }
void AFGObjectScanner::PrecacheObjects(){ }
void AFGObjectScanner::RemoveInvalidObjectsFromCache( TSubclassOf< AActor > scannableClass){ }
void AFGObjectScanner::UpdateClosestObject(){ }
void AFGObjectScanner::Internal_PlayBeep(){ }
void AFGObjectScanner::GetAllActorsOfClassAsWeakPtr( TSubclassOf<  AActor > actorClass, TArray< TWeakObjectPtr<  AActor > > &out_Actors){ }
void AFGObjectScannerAttachment::GetLifetimeReplicatedProps( TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGObjectScannerAttachment::OnRep_IsBeeping(){ }
void AFGObjectScannerAttachment::OnRep_ScannerLightColor(){ }
