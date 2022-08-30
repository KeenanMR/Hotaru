// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "m_foodBP.generated.h"

UCLASS()
class FIRSTPLAYABLE_API Am_foodBP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Am_foodBP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/*protected m_foodVars*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_foodVars)
		int m_rotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_foodVars)
		FVector m_worldPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_foodVars)
		bool m_isHeld;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_foodVars)
		bool m_isPickupable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_foodVars)
		bool m_isPlaced;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
