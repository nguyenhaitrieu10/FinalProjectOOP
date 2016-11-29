//#pragma once
#include "RGBColor.h"
#include "SPoint.h"
#include "Transform.h"
#include <vector>
#include "IGraphics.h"

class Figure
{
protected:
	RGBColor m_stroke;
	float m_strokeWidth;
	float m_strokeOpacity;
	std::vector<Transform*> m_transform;
public:
	Figure();
	Figure(RGBColor color, float strokeWidth, float strokeOpacity, std::vector<Transform*> transform);
	Figure(const Figure &);
	virtual void draw(IGraphics *graph) = NULL;
	virtual ~Figure();
};

