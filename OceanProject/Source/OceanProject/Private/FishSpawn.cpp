// 2016 - Community based open project

#include "FishSpawn.h"
// Sets default values
AFishSpawn::AFishSpawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFishSpawn::BeginPlay()
{
	Super::BeginPlay();
}
// Called every frame
void AFishSpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector newLocation = GetActorLocation();
	float deltaHeight = (FMath::Sin(run + DeltaTime)- FMath::Sin(run));

	newLocation.X += deltaHeight * xValue;
	newLocation.Y += deltaHeight * yValue;
	newLocation.Z += deltaHeight * zValue;

	run += DeltaTime;
	SetActorLocation(newLocation);

}

