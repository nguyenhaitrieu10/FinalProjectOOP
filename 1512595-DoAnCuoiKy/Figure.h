#pragma once
#include "RGBColor.h"
#include "SPoint.h"
#include "Transform.h"
#include <vector>
#include "1512595-DoAnCuoiKy.h"
#include "IGraphics.h"
class Figure
{
protected:
	RGBColor m_stroke;
	float m_strokeWidth;
	float m_strokeOpaciy;
	std::vector<Transform*> m_transform;
public:
	Figure();
	virtual void draw(IGraphics *graph) = NULL;
	virtual ~Figure();
};

