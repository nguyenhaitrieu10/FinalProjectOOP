#pragma once
#include "Figure.h"
class FilledFigure : public Figure
{
protected:
	RGBColor m_fill;
	float m_fillOpacity;
public:
	FilledFigure();
	FilledFigure(RGBColor color, float strokeWidth, float strokeOpacity, std::vector<Transform*> transform, RGBColor fillColor, float fillOpacity);
	FilledFigure(const FilledFigure &);
	virtual void draw(IGraphics *graph) = NULL;
	virtual ~FilledFigure();
};

