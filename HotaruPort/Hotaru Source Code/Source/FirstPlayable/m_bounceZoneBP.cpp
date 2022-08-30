// Fill out your copyright notice in the Description page of Project Settings.


#include "m_bounceZoneBP.h"

// Sets default values
Am_bounceZoneBP::Am_bounceZoneBP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	m_bouncePower = 0;
}

// Called when the game starts or when spawned
void Am_bounceZoneBP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Am_bounceZoneBP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

