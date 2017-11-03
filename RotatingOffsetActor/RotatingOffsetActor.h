// Harrison McGuire UE4 Version 4.18 https://github.com/Harrison1/unrealcpp https://severallevels.io/

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatingOffsetActor.generated.h"

UCLASS()
class UNREALCPP_API ARotatingOffsetActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotatingOffsetActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// declare our float variables 	
	UPROPERTY(EditAnywhere, Category = Movement)
	float PitchValue;

	UPROPERTY(EditAnywhere, Category = Movement)
	float YawValue;

	UPROPERTY(EditAnywhere, Category = Movement)
	float RollValue;

	UPROPERTY(EditAnywhere, Category = Movement)
	float XValue;

	UPROPERTY(EditAnywhere, Category = Movement)
	float YValue;

	UPROPERTY(EditAnywhere, Category = Movement)
	float ZValue;
	
};
