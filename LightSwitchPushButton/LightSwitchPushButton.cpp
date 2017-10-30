// Harrison McGuire
// UE4 Version 4.18
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io/

#include "LightSwitchPushButton.h"
#include "Components/PointLightComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
ALightSwitchPushButton::ALightSwitchPushButton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	LightIntensity = 3000.0f;

	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Point Light"));
	PointLight->Intensity = LightIntensity;
	PointLight->bVisible = true;
	RootComponent = PointLight;

	LightSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Light Sphere Component"));
	LightSphere->InitSphereRadius(250.0f);
	LightSphere->SetCollisionProfileName(TEXT("Trigger"));
	LightSphere->SetupAttachment(RootComponent);

	// LightSphere->OnComponentBeginOverlap.AddDynamic(this, &ALightSwitchPushButton::OnOverlapBegin);
	// LightSphere->OnComponentEndOverlap.AddDynamic(this, &ALightSwitchPushButton::OnOverlapEnd); 

}

// Called when the game starts or when spawned
void ALightSwitchPushButton::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ALightSwitchPushButton::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// void ALightSwitchPushButton::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
// {
//     if (OtherActor && (OtherActor != this) && OtherComp)
//     {
//         ToggleLight();
//     }
// }

// void ALightSwitchPushButton::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
// {
//     if (OtherActor && (OtherActor != this) && OtherComp)
//     {
//         ToggleLight();
//     }
// }

void ALightSwitchPushButton::ToggleLight()
{
    PointLight->ToggleVisibility();
}