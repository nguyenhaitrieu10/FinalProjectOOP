#include "stdafx.h"
#include "SLine.h"


SLine::SLine()
{

}

void SLine::draw(IGraphics *graph)
{
	graph->drawLine(p1.x, p1.y, p2.x, p2.y, m_stroke,m_strokeWidth,m_strokeOpaciy);
}

SLine::~SLine()
{
}
