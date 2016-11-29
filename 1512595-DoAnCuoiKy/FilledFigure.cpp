#include "stdafx.h"
#include "FilledFigure.h"


FilledFigure::FilledFigure()
{
}

FilledFigure::FilledFigure(RGBColor color, float strokeWidth, float strokeOpacity, std::vector<Transform*> transform, RGBColor fillColor, float fillOpacity) : Figure(color, strokeWidth, strokeOpacity, transform)
{
	m_fill = fillColor;
	m_fillOpacity = fillOpacity;
}

FilledFigure::FilledFigure(const FilledFigure & f) : Figure (f)
{
	this->m_fill = f.m_fill;
	this->m_fillOpacity = f.m_fillOpacity;
}


FilledFigure::~FilledFigure()
{
}
