#pragma once

#include <CoreMinimal.h>
#include <Components/ActorComponent.h>
#include "RI/Topic.h"
#include "ROSIntegrationGameInstance.h"
#include "std_msgs/String.h"

#include "LookAtScanComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ROSINTEGRATION_API ULookAtScanComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULookAtScanComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
/*
	std::function<void(TSharedPtr<FROSBaseMsg>)> SubscribeCallback = [this](TSharedPtr<FROSBaseMsg> msg) -> void
	{
		auto Concrete = StaticCastSharedPtr<ROSMessages::std_msgs::String>(msg);
		if (Concrete.IsValid())
		{
			UE_LOG(LogTemp, Log, TEXT("[ULookAtScanningComponent] Command was: %s"), (*(Concrete->_Data)));
			FString Command = *(Concrete->_Data);

			if (Command == TEXT("reset")) {
				UE_LOG(LogTemp, Log, TEXT("[ULookAtScanningComponent] Resetting procedure"));
			}
			else if (Command == TEXT("ping")) {
			}
		}
		return;
	};
*/
	UTopic *ExampleTopic;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
