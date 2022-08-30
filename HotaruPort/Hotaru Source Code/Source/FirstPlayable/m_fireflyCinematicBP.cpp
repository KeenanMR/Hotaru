// Fill out your copyright notice in the Description page of Project Settings.


#include "m_fireflyCinematicBP.h"

// Sets default values
Am_fireflyCinematicBP::Am_fireflyCinematicBP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_isTriggered = 0;
}

// Called when the game starts or when spawned
void Am_fireflyCinematicBP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Am_fireflyCinematicBP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

