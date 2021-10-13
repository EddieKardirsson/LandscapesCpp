// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomLandscape.h"

// Sets default values
ACustomLandscape::ACustomLandscape()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Noise2D = 0.f;
	Noise3D = 0.f;

	FastNoiseWrapper = CreateDefaultSubobject<UFastNoiseWrapper>(TEXT("FastNoiseWrapper"));
	FastNoiseWrapper->SetupFastNoise(EFastNoise_NoiseType::Simplex, 23, 0.01, EFastNoise_Interp::Quintic, EFastNoise_FractalType::FBM,
		3, 2.f, 0.5f, 0.45, EFastNoise_CellularDistanceFunction::Euclidean, EFastNoise_CellularReturnType::CellValue);

	
}

// Called when the game starts or when spawned
void ACustomLandscape::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACustomLandscape::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

