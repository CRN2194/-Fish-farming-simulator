#pragma once

#include <CoreMinimal.h>
#include <Components/ActorComponent.h>
#include "RI/Topic.h"
#include "ROSIntegrationGameInstance.h"
#include "std_msgs/String.h"

#include "RosPublisher.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ROSINTEGRATION_API URosPublisher : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URosPublisher();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	UTopic *ExampleTopic;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	// If true, the owning Actor will be only translated after a "ping" has been sent to Topic set by CommandTopic
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Offset configuration")
		bool estaPresionadoelboton = false;
		
	
};
