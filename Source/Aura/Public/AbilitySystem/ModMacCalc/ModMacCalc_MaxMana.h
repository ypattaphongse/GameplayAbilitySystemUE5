// Copyright Yosan Dev

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "ModMacCalc_MaxMana.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UModMacCalc_MaxMana : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()
public:
	UModMacCalc_MaxMana();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;

private:
	FGameplayEffectAttributeCaptureDefinition IntelligenceDef;
};
