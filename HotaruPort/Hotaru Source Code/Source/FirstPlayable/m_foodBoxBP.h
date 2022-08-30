// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "m_foodBoxBP.generated.h"

UCLASS()
class FIRSTPLAYABLE_API Am_foodBoxBP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Am_foodBoxBP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_Vars)
		int m_iteration;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
