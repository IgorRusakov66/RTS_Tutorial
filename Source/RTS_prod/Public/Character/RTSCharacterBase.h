// RTS Tutorial project

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RTSCharacterBase.generated.h"

UCLASS(Abstract)
class RTS_PROD_API ARTSCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	ARTSCharacterBase();

protected:
	virtual void BeginPlay() override;

};
