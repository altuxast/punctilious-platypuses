// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "ProceduralWorld.generated.h"

UCLASS()
class ADVGAMESPROGRAMMING_API AProceduralWorld : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProceduralWorld();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual bool ShouldTickIfViewportsOnly() const override;

public:
	UPROPERTY(EditAnywhere)
	bool bDrawGrid;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = World, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* TileMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = World, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AActor> PillarClass;

	void SpawnItem(UClass* ItemToSpawn);

	UFUNCTION(BlueprintCallable)
	void CreateGrid();

	void PlacePointsOnGrid();

	FVector GetRandomPointOnTile(const FVector& UpperLeft, const FVector& LowerRight);

	float TileWidth;
	float GridHeight;
	float WorldBoundX;
	float WorldBoundY;
	float Radius;

	FVector TopLeft;
	FVector BottomRight;

	int32 GridSizeX;
	int32 GridSizeY;
};
