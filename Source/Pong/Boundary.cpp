// Fill out your copyright notice in the Description page of Project Settings.


#include "Boundary.h"

// Sets default values
ABoundary::ABoundary()
{
	PrimaryActorTick.bCanEverTick = false;

	Bounds = CreateDefaultSubobject<UBoxComponent>(TEXT("Bounds"));
	RootComponent = Bounds;
}
