// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnController.generated.h"

class ASpawnPos;

UCLASS()
class MYPROJECT_API ASpawnController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnController();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Enemy1SpawnAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor>ActorToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<AActor>> ActorsToSpawn;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ASpawnPos*> SpawnLocations;
	
	UPROPERTY(BlueprintReadOnly)
	int SpawnSelector;

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
