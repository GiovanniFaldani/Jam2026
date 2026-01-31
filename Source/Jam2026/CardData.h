// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CardData.generated.h"

/**
 * 
 */
UCLASS()
class JAM2026_API UCardData : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Assets")
	USoundBase* BaseSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Assets")
	USoundBase* EnhancedSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Assets")
	UTexture2D* CardImage;
};
