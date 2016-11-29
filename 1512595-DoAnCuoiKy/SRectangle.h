#pragma once
#include "FilledFigure.h"
class SRectangle : public FilledFigure
{
private:
	SPoint m_p;
	float m_width;
	float m_height;
public:
	SRectangle();
	SRectangle(SPoint p, float width, float height, RGBColor color, float strokeWidth, float strokeOpacity, std::vector<Transform*> transform, RGBColor fillColor, float fillOpacity);
	SRectangle(const SRectangle &rec);
	void draw(IGraphics *graph);
	virtual ~SRectangle();
};

