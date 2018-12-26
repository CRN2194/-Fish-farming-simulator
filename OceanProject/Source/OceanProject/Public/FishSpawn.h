// 2016 - Community based open project

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FishSpawn.generated.h"

UCLASS()
class OCEANPROJECT_API AFishSpawn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFishSpawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	float run;
	UPROPERTY(EditAnywhere, category = "Movement")
	float xValue;
	UPROPERTY(EditAnywhere, category = "Movement")
	float yValue;
	UPROPERTY(EditAnywhere, category = "Movement")
	float zValue;
};
