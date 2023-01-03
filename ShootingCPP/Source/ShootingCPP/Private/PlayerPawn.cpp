#include "PlayerPawn.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

APlayerPawn::APlayerPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// �ڽ� �ݶ��̴� ������Ʈ�� �����Ѵ�.
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("My Box Component"));

	// ������ �ڽ� �ݶ��̴� ������Ʈ�� �ֻ�� ������Ʈ�� �����Ѵ�.
	SetRootComponent(boxComp);

	// ����ƽ �޽� ������Ʈ�� �����Ѵ�.
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Static Mesh"));

	// �ڽ� �ݶ��̴� ������Ʈ�� �ڽ� ������Ʈ�� �����Ѵ�.
	meshComp->SetupAttachment(boxComp);

	// �޽� ũ�⸦ 50 x 50 x 50���� �����Ѵ�.
	FVector boxSize = FVector(50.0f, 50.0f, 50.0f);
	boxComp->SetBoxExtent(boxSize);
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// ������� �Է� Ű�� �̿��ؼ� 
	// 1. ���� �Է� ���� �¿� �Է� ���� �̿��ؼ� ���� ���͸� �����.
	FVector dir = FVector(0, h, v);

	// 2. ���� ������ ���̰� 1�� �ǵ��� ���͸� ����ȭ�Ѵ�.
	dir.Normalize();

	// 3. �̵��� ��ġ ��ǥ�� ���Ѵ�(p = p0 + vt).
	FVector newLocation = GetActorLocation() + dir * moveSpeed * DeltaTime;

	// 4. ���� ������ ��ġ ��ǥ�� �տ��� ���� �� ��ǥ�� �����Ѵ�.
	SetActorLocation(newLocation, true);

}

void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Axis ���ε� �� ���� �Լ��� �����Ѵ�. 
	PlayerInputComponent->BindAxis("Horizontal", this, &APlayerPawn::MoveHorizontal);
	PlayerInputComponent->BindAxis("Vertical", this, &APlayerPawn::MoveVertical);

}

// �¿��� �Է� ó�� �Լ�
void APlayerPawn::MoveHorizontal(float value)
{
	// ������� �Է� ��(Axis)�� h ������ �ִ´�.
	h = value;
}

// ������ �Է� ó�� �Լ�
void APlayerPawn::MoveVertical(float value)
{
	// ������� �Է� ��(Axis)�� h ������ �ִ´�.
	v = value;
}