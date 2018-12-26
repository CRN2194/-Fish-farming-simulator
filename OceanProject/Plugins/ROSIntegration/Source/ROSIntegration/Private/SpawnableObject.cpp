#include "SpawnableObject.h"
#include "RI/Topic.h"
#include "ROSIntegrationGameInstance.h"
#include "std_msgs/String.h"

ASpawnableObject::ASpawnableObject(const FObjectInitializer& ObjectInitializer)
: ColorToAssign(FLinearColor(1, 0, 0, 1))
{
	auto box = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, FName("SpawnableBox"));
	box->bHiddenInGame = false;
	box->Mobility = EComponentMobility::Movable;
	RootComponent = box;

	MeshToAssign = TEXT("/Engine/BasicShapes/Cube");
	MaterialToAssign = TEXT("/Engine/BasicShapes/BasicShapeMaterial");
}

// Sets default values
ASpawnableObject::ASpawnableObject()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASpawnableObject::BeginPlay()
{
	Super::BeginPlay();
	AActor *OwningActor = GetOwner();
	if (!OwningActor) {
		UE_LOG(LogROS, Warning, TEXT("[ULookAtScanComponent] Actor is nullptr in BeginPlay()"));
		return;
	}

	ExampleTopic = NewObject<UTopic>(UTopic::StaticClass());

	UROSIntegrationGameInstance* ROSInstance = Cast<UROSIntegrationGameInstance>(OwningActor->GetGameInstance());
	ExampleTopic->Init(ROSInstance->ROSIntegrationCore, TEXT("/this_topic"), TEXT("std_msgs/String"));

	std::function<void(TSharedPtr<FROSBaseMsg>)> SubscribeCallback = [](TSharedPtr<FROSBaseMsg> msg) -> void
	{
		auto Concrete = StaticCastSharedPtr<ROSMessages::std_msgs::String>(msg);
		if (Concrete.IsValid())
		{
			UE_LOG(LogTemp, Log, TEXT("Incoming string was: %s"), (*(Concrete->_Data)));
		}
		return;
	};
	ExampleTopic->Subscribe(SubscribeCallback);
	SetStaticMesh();
	SetMaterial();
}

// Called every frame
void ASpawnableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASpawnableObject::SetMaterial()
{
	TArray<UStaticMeshComponent*> Comps;
	GetComponents(Comps);
	if (Comps.Num() > 0)
	{
		UStaticMeshComponent* FoundComp = Comps[0];
		UMaterial* pMaterial = (UMaterial*)StaticLoadObject(UMaterial::StaticClass(), nullptr, *MaterialToAssign);
		TheMatInst = UMaterialInstanceDynamic::Create(pMaterial, this);
		TheMatInst->SetVectorParameterValue("Color", ColorToAssign);
		FoundComp->SetMaterial(0, TheMatInst);
	} else {
		std::cout << "No StaticMesh Components in Spawnable. Can't set Material" << std::endl;
	}
}

void ASpawnableObject::SetStaticMesh()
{
	UStaticMesh* pCube = (UStaticMesh*)StaticLoadObject(UStaticMesh::StaticClass(), nullptr, *MeshToAssign);
	TArray<UStaticMeshComponent*> Comps;
	GetComponents(Comps);
	if (Comps.Num() > 0)
	{
		UStaticMeshComponent* FoundComp = Comps[0];
		FoundComp->SetStaticMesh(pCube);
		FoundComp->SetSimulatePhysics(ActivatePhysics);
	} else {
		std::cout << "No StaticMesh Components in Spawnable. Can't set Mesh" << std::endl;
	}
}
