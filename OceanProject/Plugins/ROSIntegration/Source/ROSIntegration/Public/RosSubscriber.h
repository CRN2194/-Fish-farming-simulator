// 2016 - Community based open project

#pragma once

#include <CoreMinimal.h>
#include <Components/ActorComponent.h>
#include "RI/Topic.h"
#include "ROSIntegrationGameInstance.h"
#include "std_msgs/String.h"
#include "Engine/GameEngine.h"

#include "RosSubscriber.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ROSINTEGRATION_API URosSubscriber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URosSubscriber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// The ROS Topic where you can send your commands to
	UPROPERTY(EditAnywhere, Category = "Offset configuration")
		FString CommandTopic = TEXT("/comandos");
	   
	std::function<void(TSharedPtr<FROSBaseMsg>)> SubscribeCallback = [this](TSharedPtr<FROSBaseMsg> msg) -> void
	{
		auto Concrete = StaticCastSharedPtr<ROSMessages::std_msgs::String>(msg);
		if (Concrete.IsValid())
		{
			UE_LOG(LogTemp, Log, TEXT("[RosSubscriberComponent] El comando fue: %s"), (*(Concrete->_Data)));
			FString Command = *(Concrete->_Data);

			if (Command == TEXT("mensaje")) {
				UE_LOG(LogTemp, Log, TEXT("[RosSubscriberComponent] Mensaje entrante"));
				if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Mensaje Recibido"));
			}
		}
		return;
	};

	UTopic *ExampleTopic;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
