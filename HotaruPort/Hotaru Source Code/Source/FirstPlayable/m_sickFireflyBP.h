// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "m_sickFireflyBP.generated.h"

UCLASS()
class FIRSTPLAYABLE_API Am_sickFireflyBP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Am_sickFireflyBP();

	/*public m_sickFireflyVars*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_sickFireflyVars)
		bool m_isActive;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_sickFireflyVars)
		int m_type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_sickFireflyVars)
		float m_duration;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/*protected m_sickFireflyVars*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_sickFireflyVars)
		float m_alpha;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
