// 2016 - Community based open project

#include "RosSubscriber.h"


// Sets default values for this component's properties
URosSubscriber::URosSubscriber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URosSubscriber::BeginPlay()
{
	Super::BeginPlay();

	AActor *OwningActor = GetOwner();
	if (!OwningActor) {
		UE_LOG(LogROS, Warning, TEXT("[ULookAtScanComponent] Actor is nullptr in BeginPlay()"));
		return;
	}

	ExampleTopic = NewObject<UTopic>(UTopic::StaticClass());

	UROSIntegrationGameInstance* ROSInstance = Cast<UROSIntegrationGameInstance>(OwningActor->GetGameInstance());
	ExampleTopic->Init(ROSInstance->ROSIntegrationCore, CommandTopic, TEXT("std_msgs/String"));
	ExampleTopic->Subscribe(SubscribeCallback);
	
}


// Called every frame
void URosSubscriber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

