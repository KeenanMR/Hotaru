// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "m_fireflyCinematicBP.generated.h"

UCLASS()
class FIRSTPLAYABLE_API Am_fireflyCinematicBP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Am_fireflyCinematicBP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_Vars)
		bool m_isTriggered;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
