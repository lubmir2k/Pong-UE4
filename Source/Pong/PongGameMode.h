// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PongGameMode.generated.h"

class ABall;
class UGameHUD;
/**
 * 
 */
UCLASS()
class PONG_API APongGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
	void IncreasePlayerScore();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
	void IncreaseAIScore();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category= "Logic")
	void SpawnNewBall();
	
protected:
	UPROPERTY(BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	UGameHUD* GameHUDRef;

	UPROPERTY(BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	ABall* BallRef;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Float", meta = (BluePrintProtected))
	float Direction = -1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Float", meta = (BluePrintProtected))
	float BallSpeed = 1400.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score", meta = (BluePrintProtected))
	int PlayerScore = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score", meta = (BluePrintProtected))
	int AIScore = 0;
};
