// Fill out your copyright notice in the Description page of Project Settings.

//#include "ABPawn.h"
#include "ABGameMode.h"
#include "ABCharacter.h"
#include "ABPlayerController.h"

AABGameMode::AABGameMode()
{
	//캐릭터 클래스 사용
	DefaultPawnClass = AABCharacter::StaticClass();
	PlayerControllerClass = AABPlayerController::StaticClass();

	//폰 클래스 사용
	/*DefaultPawnClass = AABPawn::StaticClass();*/
	/*static ConstructorHelpers::FClassFinder<APawn> BP_PAWN_C(TEXT("/Game/ThirdPersonBP/Blueprints/ThirdPersonCharacter.ThirdPersonCharacter_C"));
	if (BP_PAWN_C.Succeeded())
	{
		DefaultPawnClass = BP_PAWN_C.Class;
	}*/
}

void AABGameMode::PostLogin(APlayerController* NewPlayer)
{
	//캐릭터 클래스 사용
	Super::PostLogin(NewPlayer);
	ABLOG_S(Warning);

	//폰 클래스 사용
	/*ABLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	ABLOG(Warning, TEXT("PostLogin End"));*/
}