// Fill out your copyright notice in the Description page of Project Settings.

#include "ProceduralWorld.h"
#include "DrawDebugHelpers.h"
#include "SectionPlacement.h"

// Sets default values
AProceduralWorld::AProceduralWorld()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FloorComponent"));

	SetRootComponent(TileMesh);

	TileWidth = 200.f;
	GridHeight = 1.f;

	WorldBoundX = TileMesh->Bounds.GetBox().GetSize().X;
	WorldBoundY = TileMesh->Bounds.GetBox().GetSize().Y;

	WorldBoundX /= TileWidth = 200.f;
	WorldBoundY /= TileWidth = 200.f;

	TopLeft = FVector(0.f);
	BottomRight = FVector(1000.f, 1000.f, 0.f);

	GridSizeX = 5;
	GridSizeY = 5;

	Radius = 35.f;

	bDrawGrid = false;
}

// Called when the game starts or when spawned
void AProceduralWorld::BeginPlay()
{
	Super::BeginPlay();
	
	TSharedPtr<SectionPlacement> TheFloor(new SectionPlacement(TileMesh, TileWidth));
	TheFloor->Partition();
	TheFloor->DrawSectionNodes(GetWorld());

	PlacePointsOnGrid();
}

// Called every frame
void AProceduralWorld::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool AProceduralWorld::ShouldTickIfViewportsOnly() const
{
	return false;
}

void AProceduralWorld::CreateGrid()
{
	// Draw horizontal lines
	for (int32 i = 0; i < GridSizeX + 1; i++)
	{
		FVector Start = TopLeft + FVector(i * TileWidth, 0.f, GridHeight);
		FVector End = Start + FVector(0.f, WorldBoundY, GridHeight);
		DrawDebugLine(GetWorld(), Start, End, FColor::White, true);
	}

	// Draw vertical lines
	for (int32 i = 0; i < GridSizeY + 1; i++)
	{
		FVector Start = TopLeft + FVector(0.f, i * TileWidth, GridHeight);
		FVector End = Start + FVector(WorldBoundX, 0.f, GridHeight);
		DrawDebugLine(GetWorld(), Start, End, FColor::White, true);
	}
}

FVector AProceduralWorld::GetRandomPointOnTile(const FVector& UpperLeft, const FVector& LowerRight)
{
	float RandomX = FMath::FRandRange(UpperLeft.X, LowerRight.X);
	float RandomY = FMath::FRandRange(UpperLeft.Y, LowerRight.Y);
	
	return FVector(RandomX, RandomY, 0.f);
}

void AProceduralWorld::PlacePointsOnGrid()
{
	for (int32 i = 0; i < GridSizeX; i++)
	{
		for (int32 j = 0; j < GridSizeY; j++)
		{
			// Upper X & Y = i * tile width + spawned item turn radius
			FVector UpperLeft(i * TileWidth + Radius, j * TileWidth + Radius, GridHeight);
			// Lower X & Y = i * tile width + spawned item turn radius
			FVector LowerRight(i * TileWidth + TileWidth - Radius, j * TileWidth + TileWidth - Radius, GridHeight);
			FVector RandomPointOnTile = GetRandomPointOnTile(UpperLeft, LowerRight);

			float RandomYaw = FMath::FRandRange(0.f, 360.f);
			GetWorld()->SpawnActor<AActor>(PillarClass, RandomPointOnTile, FRotator(0.f, RandomYaw, 0.f));
		}
	}
}
