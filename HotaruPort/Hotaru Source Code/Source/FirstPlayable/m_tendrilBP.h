// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "m_tendrilBP.generated.h"

UCLASS()
class FIRSTPLAYABLE_API Am_tendrilBP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Am_tendrilBP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	/*protected m_tendrilVars*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_tendrilVars)
		FVector m_toPlayer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_tendrilVars)
		bool m_isDead;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_tendrilVars)
		bool m_isHitting;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_tendrilVars)
		float m_health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_tendrilVars)
		float m_stretch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_tendrilVars)
		float m_deltaStretch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_tendrilVars)
		FRotator m_deltaRotation;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = m_tendrilFunctions)
		void m_getHit(AActor *inHitActor, FVector inHitNormal);
};
