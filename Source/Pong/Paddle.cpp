// Fill out your copyright notice in the Description page of Project Settings.


#include "Paddle.h"

// Sets default values
APaddle::APaddle()
{
	PrimaryActorTick.bCanEverTick = true;

	Collider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	RootComponent = Collider;

	PaddleSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
	PaddleSprite->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void APaddle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

