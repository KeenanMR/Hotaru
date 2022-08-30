// Fill out your copyright notice in the Description page of Project Settings.


#include "m_sickFireflyBP.h"

// Sets default values
Am_sickFireflyBP::Am_sickFireflyBP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	/*init m_sickFireflyVars*/
	 m_isActive = 1;
	m_type = 0;
	m_duration = 1.0f;
	m_alpha = 0.0f;
}

// Called when the game starts or when spawned
void Am_sickFireflyBP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Am_sickFireflyBP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

