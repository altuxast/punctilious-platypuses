// Fill out your copyright notice in the Description page of Project Settings.


#include "ProcedurallyGeneratedMap.h"
#include "DrawDebugHelpers.h"
#include "SectionPlacement.h"
#include "KismetProceduralMeshLibrary.h"
#include "EngineUtils.h"
#include "AIManager.h"

// Sets default values
AProcedurallyGeneratedMap::AProcedurallyGeneratedMap()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Mesh Component"));

	PerlinScale = 1000.0f;
	PerlinRoughness = 0.1f;
	bRegenerateMap = false;

	NumberOfNodes = 10;

}

// Called when the game starts or when spawned
void AProcedurallyGeneratedMap::BeginPlay()
{
	Super::BeginPlay();

	ClearPillars();
	GenerateRandomPositions();

}

// Called every frame
void AProcedurallyGeneratedMap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bRegenerateMap)
	{
		ClearMap();
		ClearPillars();		
	
		GenerateMap();
		GenerateRandomPositions();
		
		bRegenerateMap = false;

	}
	//UE_LOG(LogTemp, Warning, TEXT("No. of actors: %i"), GetWorld()->GetActorCount());
}

bool AProcedurallyGeneratedMap::ShouldTickIfViewportsOnly() const
{
	return true;
}

void AProcedurallyGeneratedMap::GenerateMap()
{
	float PerlinOffset = FMath::RandRange(-10000.0f, 10000.0f);
	for (int32 Y = 0; Y < Height; Y++)
	{
		for (int32 X = 0; X < Width; X++)
		{
			float Z = FMath::PerlinNoise2D(FVector2D(X * PerlinRoughness + PerlinOffset, Y * PerlinRoughness + PerlinOffset)) * PerlinScale;
			Vertices.Add(FVector(X * GridSize, Y * GridSize, Z));
			UVCoords.Add(FVector2D(X, Y));

			if (X != Width - 1 && Y != Height - 1)
			{
				Triangles.Add(Y * Width + X);
				Triangles.Add((Y + 1) * Width + X);
				Triangles.Add(Y * Width + X + 1);
				Triangles.Add(Y * Width + X + 1);
				Triangles.Add((Y + 1) * Width + X);
				Triangles.Add((Y + 1) * Width + X + 1);
			}
		}
	}

	UKismetProceduralMeshLibrary::CalculateTangentsForMesh(Vertices, Triangles, UVCoords, Normals, Tangents);

	MeshComponent->CreateMeshSection(0, Vertices, Triangles, Normals, UVCoords, TArray<FColor>(), Tangents, true);

	//UE_LOG(LogTemp, Warning, TEXT("Vertices Count: %i | UVCoords Count: %i | Triangles Count: %i"), Vertices.Num(), UVCoords.Num(), Triangles.Num());

	if (AIManager)
	{
		AIManager->GenerateNodes(Vertices, Width, Height);
	}

	//for (int32 i = 0; i < Vertices.Num(); i++)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Index: %i | Vertex: %s"), i, *Vertices[i].ToString())
	//}

	FindBounds();
	UE_LOG(LogTemp, Warning, TEXT("Bound X: %f | Bound Y: %f"), BoundX, BoundY);
}

void AProcedurallyGeneratedMap::ClearMap()
{
	Triangles.Empty();
	Vertices.Empty();
	UVCoords.Empty();
	MeshComponent->ClearAllMeshSections();
}

//void AProcedurallyGeneratedMap::PlaceNodesOnMap()
//{
//	// Do something
//}

//FVector AProcedurallyGeneratedMap::GetRandomVertexOnMap()
//{
//	return Vertices[FMath::FRandRange(0, Vertices.Num() - 1)];
//}
//
//TArray<int32> AProcedurallyGeneratedMap::GenerateRandomIntegers(int32 MaxNumberOfNodes) const
//{
//	TArray<int32> RandomIntegers;
//	int32 RandomInteger;
//	int32 Index = 0;
//	bool MatchFound = false;
//
//	if (RandomIntegers.Num() > 0)
//	{
//		RandomIntegers.Add(RandomInteger);
//	}
//	else
//	{
//		if (RandomIntegers.Num() < MaxNumberOfNodes)
//		{
//			for (int32 i = 0; i < MaxNumberOfNodes; i++)
//			{
//				RandomInteger = FMath::RandRange(0, Vertices.Num() - 1);
//				while (!MatchFound)
//				{
//					if (RandomIntegers[Index] == RandomInteger)
//					{
//						MatchFound = true;
//					}
//					else
//					{
//						RandomIntegers.Add(RandomInteger);
//						Index < RandomIntegers.Num() ? Index++ : Index = 0;
//					}
//				}
//			}
//		}
//	}
//
//	return RandomIntegers;
//}

//int32 AProcedurallyGeneratedMap::CoinToss()
//{
//	return FMath::RandRange(0, 1);
//}

void AProcedurallyGeneratedMap::GenerateRandomPositions()
{
	if (NumberOfNodes > 0)
	{
		for (int32 i = 0; i < Vertices.Num() - 1; i++)
		{
			// 900 vertices total * 6 = 5400. 5400 + GridSize(200) * 2 = 5800. Position(X and/or Y) of last vertex = 5800.
			//if ((Vertices[i].X >= GridSize && Vertices[i].X < (Vertices.Num() * 6.f + (GridSize * 2))) && 
			//	(Vertices[i].Y >= GridSize && Vertices[i].Y < (Vertices.Num() * 6.f + (GridSize * 2))))
			if ((Vertices[i].X >= GridSize && Vertices[i].X < (BoundX - GridSize)) &&
				(Vertices[i].Y >= GridSize && Vertices[i].Y < (BoundY - GridSize)))
			{
				// If random number is less than i, spawn pillar at current vertex position
				if (i == FMath::Max(i, int32(FMath::FRandRange(0, Vertices.Num() - 1) * 1.f)))
				{
					FVector RandomPosition = FVector(Vertices[i].X + FMath::FRandRange(0, 1) * (GridSize / 2 - 25.f),
						Vertices[i].Y + FMath::FRandRange(0, 1) * (GridSize / 2 - 25.f), Vertices[i].Z - 15.f);

					// Check which partition random position lies in
					RandomPositions.Add(RandomPosition);

					GetWorld()->SpawnActor<AActor>(PillarClass, RandomPosition, FRotator(0.f, 0.f, 0.f));

					//GetWorld()->SpawnActor<AActor>(PillarClass, FVector(Vertices[i].X + FMath::FRandRange(0, 1) * (GridSize / 2 - 25.f),
					//	Vertices[i].Y + FMath::FRandRange(0, 1) * (GridSize / 2 - 25.f), Vertices[i].Z - 15.f), FRotator(0.f, 0.f, 0.f));
				}
			}

		}
		/*TArray<int32> RandomIntegers;
		for (int32 i = 0; i < NumberOfNodes; ++i)
		{
			RandomIntegers.Add(FMath::RandRange(0, Vertices.Num() - 1));
		}
		for (int32 i = 0; i < RandomIntegers.Num(); ++i)
		{
			RandomPositions.Add(Vertices[RandomIntegers[i]]);
			Pillars.Add(GetWorld()->SpawnActor<AActor>(PillarClass, RandomPositions[i], FRotator(0.f, 0.f, 0.f)));		
		}*/
		//for (int32 i = Pillars.Num() - 1; i >= 0; --i)
		//{
		//	Pillars[i]->Destroy();
		//	Pillars.Pop();
		//}
		//for (int32 i = RandomPositions.Num() - 1; i >= 0; --i)
		//{
		//	RandomPositions.Pop();
		//}
	}
}

void AProcedurallyGeneratedMap::ClearPillars()
{
	//for (int32 i = Pillars.Num() - 1; i >= 0; --i)
	//{
	//	//Pillars[i]->Destroy();
	//	Pillars.Pop();
	//}
	for (int32 i = RandomPositions.Num() - 1; i >= 0; --i)
	{
		RandomPositions.Pop();
	}
}

void AProcedurallyGeneratedMap::FindBounds()
{
	for (int32 i = 0; i < Vertices.Num(); i++)
	{
		BoundX = FMath::Max(Vertices[i].X, BoundX);
		BoundY = FMath::Max(Vertices[i].Y, BoundY);
	}
}
