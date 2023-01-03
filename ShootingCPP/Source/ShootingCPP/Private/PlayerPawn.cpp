#include "PlayerPawn.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

APlayerPawn::APlayerPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// 박스 콜라이더 컴포넌트를 생성한다.
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("My Box Component"));

	// 생성한 박스 콜라이더 컴포넌트를 최상단 컴포넌트로 설정한다.
	SetRootComponent(boxComp);

	// 스태틱 메쉬 컴포넌트를 생성한다.
	meshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Static Mesh"));

	// 박스 콜라이더 컴포넌트의 자식 컴포넌트로 설정한다.
	meshComp->SetupAttachment(boxComp);

	// 메쉬 크기를 50 x 50 x 50으로 설정한다.
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

	// 사용자의 입력 키를 이용해서 
	// 1. 상하 입력 값과 좌우 입력 값을 이용해서 방향 벡터를 만든다.
	FVector dir = FVector(0, h, v);

	// 2. 방향 벡터의 길이가 1이 되도록 벡터를 정규화한다.
	dir.Normalize();

	// 3. 이동할 위치 좌표를 구한다(p = p0 + vt).
	FVector newLocation = GetActorLocation() + dir * moveSpeed * DeltaTime;

	// 4. 현재 액터의 위치 좌표를 앞에서 구한 새 좌표로 갱신한다.
	SetActorLocation(newLocation, true);

}

void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Axis 바인딩 된 값을 함수에 연결한다. 
	PlayerInputComponent->BindAxis("Horizontal", this, &APlayerPawn::MoveHorizontal);
	PlayerInputComponent->BindAxis("Vertical", this, &APlayerPawn::MoveVertical);

}

// 좌우축 입력 처리 함수
void APlayerPawn::MoveHorizontal(float value)
{
	// 사용자의 입력 값(Axis)을 h 변수에 넣는다.
	h = value;
}

// 상하축 입력 처리 함수
void APlayerPawn::MoveVertical(float value)
{
	// 사용자의 입력 값(Axis)을 h 변수에 넣는다.
	v = value;
}