// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TPSPlayer.generated.h"

//DECLARE_DELEGATE_OneParam(FMyDelegate, FName);
//DECLARE_DYNAMIC_DELEGATE_OneParam(FMyDynamicDelegate, FName, name);
//DECLARE_MULTICAST_DELEGATE_OneParam(FMyMultiDelegate, FName);
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMyDMDelegate, FName, name);
DECLARE_MULTICAST_DELEGATE_OneParam(FInputBindingDelegate, class UInputComponent*);

UCLASS()
class TPSPROJECT_API ATPSPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATPSPlayer();
	~ATPSPlayer();

	FInputBindingDelegate onInputBindingDelegate;

	/*FMyDelegate myVar;
	FMyDynamicDelegate myDynamicVar;
	FMyMultiDelegate myMultiVar;
	FMyDMDelegate myDMVar;

	UFUNCTION()
	void TestFunc(FName name);
	void PlayDelegate();*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(VisibleAnywhere, Category = Camera)
		class USpringArmComponent* springArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		class UCameraComponent* tpsCamComp;

	UPROPERTY(VisibleAnywhere, Category = GunMesh)
		class USkeletalMeshComponent* gunMeshComp;

	UPROPERTY(VisibleAnywhere, Category = GunMesh)
		class UStaticMeshComponent* sniperGunComp;

	UPROPERTY(VisibleAnywhere, Category = Component)
		class UPlayerBaseComponent* playerMove;
	UPROPERTY(VisibleAnywhere, Category = Component)
		class UPlayerBaseComponent* playerFire;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Health)
		int32 hp;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Health)
		int32 initialHp = 10;

	UFUNCTION(BlueprintCallable, Category = Health)
		void OnHitEvent();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Health)
		void OnGameOver();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = Health)
		void OnUsingGrenade(bool isGrenade);
};
