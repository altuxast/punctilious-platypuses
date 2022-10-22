#pragma once

struct FBoundCoords
{
	int32 UpperLeftX;
	int32 UpperLeftY;
	int32 LowerRightX;
	int32 LowerRightY;
};

class PlacementNode
{
public:
	PlacementNode();
	PlacementNode(const FBoundCoords& Coords);
	~PlacementNode();

	FORCEINLINE FBoundCoords GetBoundCoords() const { return BoundCoords; }
	FORCEINLINE void SetBoundCoords(FBoundCoords _BoundCoords) { BoundCoords = _BoundCoords; }

	FORCEINLINE static int32 GetNodeCount() { return PlacementNodeCount; }

private:
	FBoundCoords BoundCoords;

	static int32 PlacementNodeCount;
};