// Copyright Yosan Dev

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
	
public:
	AAuraEnemy();

	/*Enermy Interface*/
	virtual void HighlightActor() override;
	virtual void UnhighlightActor() override;
	/*End Enermy Interface*/

	/*Combat Interface*/
	virtual int32 GetPlayerLevel() override;
	/*End Combat Interface*/
protected:
	virtual void BeginPlay() override;
	virtual void InitAbilityActorInfo() override;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = "Character Class Defaults")
	int32 Level = 1;

};
