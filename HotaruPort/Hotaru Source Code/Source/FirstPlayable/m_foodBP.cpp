// Fill out your copyright notice in the Description page of Project Settings.


#include "m_foodBP.h"

// Sets default values
Am_foodBP::Am_foodBP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*init m_foodVars*/
	m_rotation = 0;
	m_worldPosition = {0.0f,0.0f,0.0f};

	m_isHeld, m_isPlaced = 0;
	m_isPickupable = 1;
}

// Called when the game starts or when spawned
void Am_foodBP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Am_foodBP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

