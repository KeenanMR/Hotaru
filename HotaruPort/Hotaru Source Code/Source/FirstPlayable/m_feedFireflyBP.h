// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "m_feedFireflyBP.generated.h"

UCLASS()
class FIRSTPLAYABLE_API Am_feedFireflyBP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Am_feedFireflyBP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, Category = m_Vars)
		int m_iteration;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
