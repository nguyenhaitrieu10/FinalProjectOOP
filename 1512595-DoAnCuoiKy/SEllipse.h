#pragma once
#include "FilledFigure.h"
#include "IGraphics.h"
class SEllipse : public FilledFigure
{
private:
	SPoint m_p;
	float m_rx;
	float m_ry;
public:
	SEllipse();
	void draw(IGraphics*);
	virtual ~SEllipse();
};

