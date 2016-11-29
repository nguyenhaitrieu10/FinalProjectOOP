#pragma once
#include "FilledFigure.h"
#include "GraphicsImg.h"
class SCircle : public FilledFigure
{
private:
	SPoint m_p;
	float m_r;
public:
	SCircle();
	void draw(IGraphics *);
	virtual ~SCircle();
};

