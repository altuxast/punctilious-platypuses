#include "PlacementNode.h"

// Initialise static variable placement count
int32 PlacementNode::PlacementNodeCount = 0;

PlacementNode::PlacementNode()
{
	// Increments for each placement node created
	++PlacementNodeCount;
}

PlacementNode::PlacementNode(const FBoundCoords& Coords)
{
	BoundCoords.UpperLeftX = Coords.UpperLeftX;
	BoundCoords.UpperLeftY = Coords.UpperLeftY;
	BoundCoords.LowerRightX = Coords.LowerRightX;
	BoundCoords.LowerRightY = Coords.LowerRightY;

	++PlacementNodeCount;
}

PlacementNode::~PlacementNode()
{
	// Decrements for each placement node destroyed
	--PlacementNodeCount;
}
