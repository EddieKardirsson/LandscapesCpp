// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FastNoiseWrapper.h"
#include "CustomLandscape.generated.h"

UCLASS()
class LANDSCAPESCPP_API ACustomLandscape : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACustomLandscape();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fast Noise")
	float Noise2D;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fast Noise")
	float Noise3D;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fast Noise")
	UFastNoiseWrapper* FastNoiseWrapper;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
