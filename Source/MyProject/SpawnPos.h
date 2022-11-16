// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnPos.generated.h"

UCLASS()
class MYPROJECT_API ASpawnPos : public AActor
{
	GENERATED_BODY()
	
public:	
	ASpawnPos();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SpawnPosition;

protected:

	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
