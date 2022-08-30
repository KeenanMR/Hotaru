// Fill out your copyright notice in the Description page of Project Settings.


#include "m_foodBoxNoFunBP.h"

// Sets default values
Am_foodBoxNoFunBP::Am_foodBoxNoFunBP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_iteration = 2;
}

// Called when the game starts or when spawned
void Am_foodBoxNoFunBP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Am_foodBoxNoFunBP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

