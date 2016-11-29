#include "stdafx.h"
#include "SRectangle.h"


SRectangle::SRectangle()
{
}

SRectangle::SRectangle(SPoint p, float width, float height, RGBColor color, float strokeWidth, float strokeOpacity, std::vector<Transform*> transform, RGBColor fillColor, float fillOpacity) : FilledFigure( color,  strokeWidth,  strokeOpacity, transform,  fillColor,  fillOpacity)
{
	m_p = p;
	m_width = width;
	m_height = height;
}

SRectangle::SRectangle(const SRectangle & rec) : FilledFigure(rec)
{
	this->m_p = rec.m_p;
	this->m_height = rec.m_height;
	this->m_width = rec.m_width;
}

void SRectangle::draw(IGraphics * graph)
{
	graph->drawRectangle(m_p.x, m_p.y, m_width, m_height, m_fill, m_stroke, m_strokeWidth, m_fillOpacity, m_strokeOpacity);
}

SRectangle::~SRectangle()
{
}
