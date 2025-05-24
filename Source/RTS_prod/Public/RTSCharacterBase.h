// RTS Tutorial project

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RTSCharacterBase.generated.h"

UCLASS()
class RTS_PROD_API ARTSCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARTSCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
