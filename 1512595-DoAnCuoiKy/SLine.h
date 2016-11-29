#pragma once
#include "Figure.h"
class SLine : public Figure
{
private:
	SPoint p1;
	SPoint p2;
public:
	SLine();
	void draw(IGraphics *graph);
	virtual ~SLine();
};

