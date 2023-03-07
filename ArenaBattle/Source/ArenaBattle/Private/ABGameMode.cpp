// Fill out your copyright notice in the Description page of Project Settings.

//#include "ABPawn.h"
#include "ABGameMode.h"
#include "ABCharacter.h"
#include "ABPlayerController.h"

AABGameMode::AABGameMode()
{
	//ĳ���� Ŭ���� ���
	DefaultPawnClass = AABCharacter::StaticClass();
	PlayerControllerClass = AABPlayerController::StaticClass();

	//�� Ŭ���� ���
	/*DefaultPawnClass = AABPawn::StaticClass();*/
	/*static ConstructorHelpers::FClassFinder<APawn> BP_PAWN_C(TEXT("/Game/ThirdPersonBP/Blueprints/ThirdPersonCharacter.ThirdPersonCharacter_C"));
	if (BP_PAWN_C.Succeeded())
	{
		DefaultPawnClass = BP_PAWN_C.Class;
	}*/
}

void AABGameMode::PostLogin(APlayerController* NewPlayer)
{
	//ĳ���� Ŭ���� ���
	Super::PostLogin(NewPlayer);
	ABLOG_S(Warning);

	//�� Ŭ���� ���
	/*ABLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	ABLOG(Warning, TEXT("PostLogin End"));*/
}