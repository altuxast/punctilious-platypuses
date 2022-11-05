#include "SectionPlacement.h"
#include "PlacementNode.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"

SectionPlacement::SectionPlacement()
{
	PlacementGridX = 25;
	PlacementGridY = 25;
	SectionMinX = 1;
	SectionMinY = 1;
	UnitLength = 200.f;
	SplitChancePercent = 0.5f;
}

// This SectionPlacement has been replaced by a templated variant
//SectionPlacement::SectionPlacement(UStaticMeshComponent* TileMesh)
//{
//	UnitLength = 200.f;
//	SplitChancePercent = 0.5f;
//
//	PlacementGridX = (int)TileMesh->Bounds.GetBox().GetSize().X / UnitLength;
//	PlacementGridY = (int)TileMesh->Bounds.GetBox().GetSize().Y / UnitLength;
//	SectionMinX = 2;
//	SectionMinY = 2;
//}

SectionPlacement::~SectionPlacement()
{
	// ...
}

void SectionPlacement::Partition()
{

	// Initialise the Coordinates from the pre-split node stack
	FBoundCoords BoundCoordsA = { 0, 0, PlacementGridX, PlacementGridY };
	PlacementNodeStack.Push(TSharedPtr<PlacementNode>(new PlacementNode(BoundCoordsA)));

	// Loop through the stack
	while (PlacementNodeStack.Num() > 0)
	{
		// Observe node at top of stack
		TSharedPtr<PlacementNode> A = PlacementNodeStack.Pop();

		// Attempt to split the node
		bool bNodeWasSplit = SplitAttempt(A);
		if (!bNodeWasSplit)
		{
			// Place into partitioned stack
			PartitionedPlacement.Push(A);
		}
	}
}

int32 SectionPlacement::CoinToss()
{
	return FMath::RandRange(0, 1);
}

bool SectionPlacement::ShouldSplitNode(TSharedPtr<PlacementNode> InNode, ESplitOrientation Orientation)
{
	FBoundCoords BoundCoords = InNode->GetBoundCoords();

	if (Orientation == ESplitOrientation::ESO_Horizontal)
	{
		// Check if section has sufficient length
		int32 SectionLength = BoundCoords.LowerRightY - BoundCoords.UpperLeftY;
		
		// Split dependant upon section length relative to grid length
		float SplitChance = (float)SectionLength / (float)PlacementGridY;
		
		// Multiplier which further affects likelyhood of a split
		SplitChance *= SplitChancePercent;
		float RollDice = FMath::FRandRange(0.f, 1.f);

		// Returns false if dice roll is greater than split chance
		if (RollDice > SplitChance)
		{
			return false;
		}

		// Returns true if section length is greater than minimum section length
		if (SectionLength > SectionMinY)
		{
			return true;
		}
	}
	else if (Orientation == ESplitOrientation::ESO_Vertical)
	{
		int32 SectionWidth = BoundCoords.LowerRightX - BoundCoords.UpperLeftX;
		float SplitChance = (float)SectionWidth / (float)PlacementGridX;
		SplitChance *= SplitChancePercent;
		float RollDice = FMath::FRandRange(0.f, 1.f);

		if (RollDice > SplitChance)
		{
			return false;
		}

		if (SectionWidth > SectionMinX)
		{
			return true;
		}
	}

	// Returns false if no horizontal & vertical split
	return false;
}

bool SectionPlacement::SplitAttempt(TSharedPtr<PlacementNode> InNode)
{
	int32 HorizontalOrVertical = CoinToss();
	
	// Horizontal
	if (HorizontalOrVertical == 0)
	{
		// If should split, attempt horizontal split
		if (ShouldSplitNode(InNode, ESplitOrientation::ESO_Horizontal))
		{
			// Create two child nodes (B, C) for InNode
			TSharedPtr<PlacementNode> B(new PlacementNode());
			TSharedPtr<PlacementNode> C(new PlacementNode());

			SplitHorizontal(InNode, B, C);

			// Return true if split attempt was successful
			return true;

		}

		// If attempt horizontal split fails, attemp vertical split
		else if (ShouldSplitNode(InNode, ESplitOrientation::ESO_Vertical))
		{
			TSharedPtr<PlacementNode> B(new PlacementNode());
			TSharedPtr<PlacementNode> C(new PlacementNode());

			SplitVertical(InNode, B, C);

			return true;
		}
	}

	// Vertical
	else if (HorizontalOrVertical == 1)
	{
		if (ShouldSplitNode(InNode, ESplitOrientation::ESO_Vertical))
		{
			TSharedPtr<PlacementNode> B(new PlacementNode());
			TSharedPtr<PlacementNode> C(new PlacementNode());

			SplitVertical(InNode, B, C);

			return true;

		}
		else if (ShouldSplitNode(InNode, ESplitOrientation::ESO_Horizontal))
		{
			TSharedPtr<PlacementNode> B(new PlacementNode());
			TSharedPtr<PlacementNode> C(new PlacementNode());

			SplitHorizontal(InNode, B, C);

			return true;
		}
	}

	return false;
}

void SectionPlacement::SplitHorizontal(TSharedPtr<PlacementNode> InA, TSharedPtr<PlacementNode> InB, TSharedPtr<PlacementNode> InC)
{
	// Calculate a viable (i.e., away from the floor/cell edge) random point along the Y axis to split
	int32 SplitPointY = FMath::RandRange(InA->GetBoundCoords().UpperLeftY + SectionMinY, InA->GetBoundCoords().LowerRightY - SectionMinY);

	// Bound coordinate B child node
	FBoundCoords BoundCoordsB;
	BoundCoordsB.UpperLeftX = InA->GetBoundCoords().UpperLeftX;
	BoundCoordsB.UpperLeftY = InA->GetBoundCoords().UpperLeftY;
	
	// Random split point START
	BoundCoordsB.LowerRightY = SplitPointY;
	BoundCoordsB.LowerRightX = InA->GetBoundCoords().LowerRightX;

	// Set bound B's coordinates
	InB->SetBoundCoords(BoundCoordsB);
	
	// Push to stack to be potentially split later
	PlacementNodeStack.Push(InB);

	// Bound coordinate C child node
	FBoundCoords BoundCoordsC;
	BoundCoordsC.UpperLeftX = InA->GetBoundCoords().UpperLeftX;
	
	// Random split point END
	BoundCoordsC.UpperLeftY = SplitPointY;
	BoundCoordsC.LowerRightX = InA->GetBoundCoords().LowerRightX;
	BoundCoordsC.LowerRightY = InA->GetBoundCoords().LowerRightY;

	// Set bound C's coordinates 
	InC->SetBoundCoords(BoundCoordsC);
	PlacementNodeStack.Push(InC);

}

void SectionPlacement::SplitVertical(TSharedPtr<PlacementNode> InA, TSharedPtr<PlacementNode> InB, TSharedPtr<PlacementNode> InC)
{
	int32 SplitPointX = FMath::RandRange(InA->GetBoundCoords().UpperLeftX + SectionMinX, InA->GetBoundCoords().LowerRightX - SectionMinX);

	FBoundCoords BoundCoordsB;
	BoundCoordsB.UpperLeftX = InA->GetBoundCoords().UpperLeftX;
	BoundCoordsB.UpperLeftY = InA->GetBoundCoords().UpperLeftY;
	BoundCoordsB.LowerRightX = SplitPointX;
	BoundCoordsB.LowerRightY = InA->GetBoundCoords().LowerRightY;

	InB->SetBoundCoords(BoundCoordsB);
	PlacementNodeStack.Push(InB);

	FBoundCoords BoundCoordsC;
	BoundCoordsC.UpperLeftX = SplitPointX;
	BoundCoordsC.UpperLeftY = InA->GetBoundCoords().UpperLeftY;
	BoundCoordsC.LowerRightX = InA->GetBoundCoords().LowerRightX;
	BoundCoordsC.LowerRightY = InA->GetBoundCoords().LowerRightY;

	InC->SetBoundCoords(BoundCoordsC);
	PlacementNodeStack.Push(InC);
}

void SectionPlacement::DrawSectionNodes(UWorld* World)
{
	// Loop through the partitions and call the draw node function
	for (int32 i = 0; i < PartitionedPlacement.Num(); i++)
	{
		FBoundCoords Coords = PartitionedPlacement[i]->GetBoundCoords();
		DrawSectionNode(World, Coords);
	}
}

void SectionPlacement::DrawSectionNode(UWorld* World, FBoundCoords BoundCoords)
{
	// Set coords for a single cell
	const FVector UpperLeft(BoundCoords.UpperLeftX * UnitLength, BoundCoords.UpperLeftY * UnitLength, 1.f);
	const FVector UpperRight(BoundCoords.LowerRightX * UnitLength, BoundCoords.UpperLeftY * UnitLength, 1.f);
	const FVector LowerLeft(BoundCoords.UpperLeftX * UnitLength, BoundCoords.LowerRightY * UnitLength, 1.f);
	const FVector LowerRight(BoundCoords.LowerRightX * UnitLength, BoundCoords.LowerRightY * UnitLength, 1.f);

	// Draw that cell according to coords
	//
	// FUpperLeft(UpperLeftX, UpperLeftY), FUpperRight(LowerRightX, UpperLeftY), FLowerLeft(UpperLeftX, LowerRightY), 
	// FLowerRight(LowerRightX, LowerRightY),
	DrawDebugLine(World, UpperLeft, UpperRight, FColor::White, true, -1, 0, 5.f);
	DrawDebugLine(World, UpperLeft, LowerLeft, FColor::White, true, -1, 0, 5.f);
	DrawDebugLine(World, LowerLeft, LowerRight, FColor::White, true, -1, 0, 5.f);
	DrawDebugLine(World, UpperRight, LowerRight, FColor::White, true, -1, 0, 5.f);

}
