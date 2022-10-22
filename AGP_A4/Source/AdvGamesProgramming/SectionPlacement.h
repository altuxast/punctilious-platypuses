#pragma once

#include "PlacementNode.h"

enum class ESplitOrientation
{
	ESO_Horizontal,
	ESO_Vertical
};

class SectionPlacement
{
public:
	SectionPlacement();
	SectionPlacement(UStaticMeshComponent* TileMesh);
	~SectionPlacement();

	// Partitions a grid section
	void Partition();
	int32 CoinToss();

	// Determines whether to split node
	bool ShouldSplitNode(TSharedPtr<PlacementNode> InNode, ESplitOrientation Orientation);
	
	// Attempts to split the node
	bool SplitAttempt(TSharedPtr<PlacementNode> InNode);
	
	// Split horizontally & vertically
	void SplitHorizontal(TSharedPtr<PlacementNode> InA, TSharedPtr<PlacementNode> InB, TSharedPtr<PlacementNode> InC);
	void SplitVertical(TSharedPtr<PlacementNode> InA, TSharedPtr<PlacementNode> InB, TSharedPtr<PlacementNode> InC);

	// Draw splits
	void DrawSectionNodes(class UWorld* World);
	void DrawSectionNode(UWorld* World, FBoundCoords BoundCoords);

	// Smart pointer TSharedPtr to automatically control memory allocation & destruction
	FORCEINLINE TArray <TSharedPtr<PlacementNode>> GetPartitionedSection() const { return PartitionedPlacement; }

private:
	
	// Pre-split node stack
	TArray<TSharedPtr<class PlacementNode>> PlacementNodeStack;
	
	// Post-split node stack
	TArray<TSharedPtr<PlacementNode>> PartitionedPlacement;

	int32 PlacementGridX;
	int32 PlacementGridY;
	int32 SectionMinX;
	int32 SectionMinY;

	float UnitLength;
	float SplitChancePercent;

};