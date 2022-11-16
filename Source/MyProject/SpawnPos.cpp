// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnPos.h"

// Sets default values
ASpawnPos::ASpawnPos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpawnPosition = {0,0,0};
	

}

// Called when the game starts or when spawned
void ASpawnPos::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Spawn Pos Is Ready") );
	
}

// Called every frame
void ASpawnPos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

