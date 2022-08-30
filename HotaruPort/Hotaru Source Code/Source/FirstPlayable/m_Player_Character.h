// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/Character.h"
#include "m_Player_Character.generated.h"

UCLASS()
class FIRSTPLAYABLE_API Am_Player_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	Am_Player_Character();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	/*public m_vars*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_Vars)
		bool m_isHitting;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_Vars)
		bool m_isJumping;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/*protected m_vars*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_pcVars)
		int m_fireflyCount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_pcVars)
		FVector m_spawnPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_pcVars)
		float m_relativePlayerY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_pcVars)
		float m_railDistanceAlong;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_pcVars)
		bool m_isHoldingFood;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_pcVars)
		bool m_isMoving;// 1
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_pcVars)
		bool m_isCollecting;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_pcVars)
		bool m_canDie;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_pcVars)
		bool m_isImmune;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_pcVars)
		bool m_isReset;// 1
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = m_pcVars)
		bool m_isFalling;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
