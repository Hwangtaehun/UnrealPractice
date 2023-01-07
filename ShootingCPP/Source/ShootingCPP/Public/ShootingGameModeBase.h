// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShootingGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGCPP_API AShootingGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
private:
	int32 currentScore = 0;

	class UMainWidget* mainUI;

	void PrintScore();

protected:
	virtual void BeginPlay() override;

public:
	AShootingGameModeBase();
	~AShootingGameModeBase();

	void AddScore(int32 point);

	UPROPERTY(EditAnywhere)
		TSubclassOf<class UMainWidget> mainWidget;

};
