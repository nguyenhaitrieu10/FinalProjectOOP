#pragma once
#include "FilledFigure.h"
#include "IGraphics.h"
class SPolylines
{
private:
	std::vector<SPoint> m_points;
public:
	SPolylines();
	void draw(IGraphics*);
	virtual ~SPolylines();
};

