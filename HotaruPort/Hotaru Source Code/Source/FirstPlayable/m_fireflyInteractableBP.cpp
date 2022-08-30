// Fill out your copyright notice in the Description page of Project Settings.


#include "m_fireflyInteractableBP.h"

// Sets default values
Am_fireflyInteractableBP::Am_fireflyInteractableBP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*init m_fireflyInteractableVars*/
	m_isActive = 1;
	m_type = 0;
	m_duration = 1;
	m_alpha = 0;
}

// Called when the game starts or when spawned
void Am_fireflyInteractableBP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Am_fireflyInteractableBP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

