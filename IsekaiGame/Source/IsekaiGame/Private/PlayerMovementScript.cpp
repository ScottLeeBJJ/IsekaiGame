// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerMovementScript.h"

// Sets default values for this component's properties
UPlayerMovementScript::UPlayerMovementScript()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayerMovementScript::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPlayerMovementScript::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Set up the WASD for movement and the Space Bar for jumping here!
}

