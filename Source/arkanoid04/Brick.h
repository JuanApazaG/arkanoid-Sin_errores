// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Brick.generated.h"

class UBoxComponent;
UCLASS()
class ARKANOID04_API ABrick : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABrick();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(EditAnywhere)
		class USceneComponent* Scene;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UStaticMeshComponent* SM_Brick; //Ladrillo

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		class UBoxComponent* Collision;  //Caja Colision

	float SpeedModifierOnBounce = 1.01f;


	UFUNCTION() //Entra en la caja
		//		virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndexType, bool bFromSweep, const FHitResult& SweepResult);

	void DestroyBrick();

//	void CreateCapsule(FVector Location);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
