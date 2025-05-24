// RTS Tutorial project


#include "Character/RTSCharacterBase.h"

ARTSCharacterBase::ARTSCharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ARTSCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}
