#pragma once
#include "Figure.h"
class SLine : public Figure
{
private:
	SPoint m_p1;
	SPoint m_p2;
public:
	SLine();
	SLine(SPoint sp1, SPoint sp2, RGBColor color, float strokeWidth, float strokeOpacity, std::vector<Transform*> transform);
	SLine(const SLine &line);
	void draw(IGraphics *graph);
	virtual ~SLine();
};

