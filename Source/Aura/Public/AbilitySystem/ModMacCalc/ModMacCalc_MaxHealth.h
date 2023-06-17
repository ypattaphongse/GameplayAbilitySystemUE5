// Copyright Yosan Dev

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "ModMacCalc_MaxHealth.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UModMacCalc_MaxHealth : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()
	
public:
	UModMacCalc_MaxHealth();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	FGameplayEffectAttributeCaptureDefinition VigorDef;
};
