#pragma once
#include "FilledFigure.h"
#include "IGraphics.h"
class SPolygon : public FilledFigure
{
private:
	std::vector<SPoint> m_points;
public:
	SPolygon();
	void draw(IGraphics*);
	virtual ~SPolygon();
};

