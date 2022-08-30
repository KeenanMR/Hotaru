// Fill out your copyright notice in the Description page of Project Settings.


#include "m_tendrilBP.h"
#include "m_Player_Character.h"
// Sets default values
Am_tendrilBP::Am_tendrilBP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*init m_tendrilVars*/
	// floats
	m_health = 20.0f;
	m_stretch = 1.0f;
	m_deltaStretch = 0.02f;

	m_isHitting, m_isDead = 0;// bools
	m_deltaRotation = { 0.0f,0.0f,0.0f };// rotator
	m_toPlayer = { 0.0f,0.0f,0.0f };// vector
}

// Called when the game starts or when spawned
void Am_tendrilBP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Am_tendrilBP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Am_tendrilBP::m_getHit(AActor* inHitActor, FVector inHitNormal) {
	Am_Player_Character* hitPlayer = Cast<Am_Player_Character>(inHitActor);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("player is getting hit")));

	inHitNormal *= -1000;
	inHitNormal.Z += 50;

	m_isHitting = 1;
	if (m_isHitting) {
		hitPlayer->LaunchCharacter(inHitNormal, 1,1);
	}
}