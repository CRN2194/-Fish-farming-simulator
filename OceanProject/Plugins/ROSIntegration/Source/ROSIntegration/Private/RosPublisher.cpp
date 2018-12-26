#include "RosPublisher.h"


// Sets default values for this component's properties
URosPublisher::URosPublisher()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void URosPublisher::BeginPlay()
{
	Super::BeginPlay();

	AActor *OwningActor = GetOwner();
	if (!OwningActor) {
		UE_LOG(LogROS, Warning, TEXT("[RosPublisherComponent] Actor is nullptr in BeginPlay()"));
		return;
	}

	ExampleTopic = NewObject<UTopic>(UTopic::StaticClass());
	UROSIntegrationGameInstance* ROSInstance = Cast<UROSIntegrationGameInstance>(OwningActor->GetGameInstance());
	ExampleTopic->Init(ROSInstance->ROSIntegrationCore, TEXT("/coordenadas"), TEXT("std_msgs/String"));


	// (Optional) Advertise the topic
	ExampleTopic->Advertise();		
}


// Called every frame
void URosPublisher::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AActor *OwningActor = GetOwner();
	if (!OwningActor) {
		UE_LOG(LogROS, Warning, TEXT("[ULookAtScanningComponent] Actor is nullptr"));
		return;
	}
	if(estaPresionadoelboton)
	{
		FVector ThisActorLocation = OwningActor->GetActorLocation();
		FString X = FString::SanitizeFloat(ThisActorLocation.X);
		FString Y = FString::SanitizeFloat(ThisActorLocation.Y);
		FString Z = FString::SanitizeFloat(ThisActorLocation.Z);
		//Publica las coordenadas del dron cada delta Tick
		TSharedPtr<ROSMessages::std_msgs::String> StringMessage(new ROSMessages::std_msgs::String(("Coord. Dron: (" + X + ")(" + Y + ")(" + Z + ")")));
		ExampleTopic->Publish(StringMessage);
	}
	
}

