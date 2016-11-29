#include "stdafx.h"
#include "SLine.h"


SLine::SLine()
{

}

SLine::SLine(SPoint sp1, SPoint sp2, RGBColor color, float strokeWidth, float strokeOpacity, std::vector<Transform*> transform) : Figure(color,strokeWidth,strokeOpacity,transform)
{
	m_p1 = sp1;
	m_p2 = sp2;
}

SLine::SLine(const SLine &line) : Figure(line)
{
	this->m_p1 = line.m_p1;
	this->m_p2 = line.m_p2;
}

void SLine::draw(IGraphics *graph)
{
	graph->drawLine(m_p1.x, m_p1.y, m_p2.x, m_p2.y, m_stroke,m_strokeWidth,m_strokeOpacity);
}

SLine::~SLine()
{
	m_transform.clear();
}
