// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnController.h"

#include "Enemy1.h"
#include "SpawnPos.h"

// Sets default values
ASpawnController::ASpawnController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Enemy1SpawnAmount = 5;
	ActorToSpawn = NULL;

}

// Called when the game starts or when spawned
void ASpawnController::BeginPlay()
{
	Super::BeginPlay();
	for(int i = 0; i < Enemy1SpawnAmount; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("Spawned Enemy 1") );
		SpawnSelector = FMath::RandRange(0, SpawnLocations.Num()-1 );
		GetWorld()->SpawnActor<AActor>(ActorToSpawn, SpawnLocations[SpawnSelector]->GetActorLocation() , GetActorRotation());
	}
	
}

// Called every frame
void ASpawnController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

