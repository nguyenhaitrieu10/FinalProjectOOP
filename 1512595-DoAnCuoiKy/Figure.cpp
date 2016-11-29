#include "stdafx.h"
#include "Figure.h"


Figure::Figure()
{
}

Figure::Figure(RGBColor color, float strokeWidth, float strokeOpacity, std::vector<Transform*> transform)
{
	m_stroke = color;
	m_strokeWidth = strokeWidth;
	m_strokeOpacity = strokeOpacity;
	m_transform = transform;
}

Figure::Figure(const Figure &Fig)
{
	this->m_stroke = Fig.m_stroke;
	this->m_strokeWidth = Fig.m_strokeWidth;
	this->m_strokeOpacity = Fig.m_strokeOpacity;
	this->m_transform = Fig.m_transform;
}

Figure::~Figure()
{
}
