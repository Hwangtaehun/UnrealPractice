// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingGameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "MainWidget.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"

AShootingGameModeBase::AShootingGameModeBase() {}
AShootingGameModeBase::~AShootingGameModeBase() {}

void AShootingGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (mainWidget != nullptr) 
	{
		mainUI = CreateWidget<UMainWidget>(GetWorld(), mainWidget);

		if (mainUI != nullptr)
		{
			mainUI->AddToViewport();
		}
	}
}

void AShootingGameModeBase::PrintScore()
{
	if (mainUI != nullptr)
	{
		mainUI->scoreData->SetText(FText::AsNumber(currentScore));
	}
}

void AShootingGameModeBase::AddScore(int32 point)
{
	currentScore += point;

	PrintScore();
}