#pragma once
#include "IGraphics.h"
class GraphicsGDIplus : public IGraphics
{
public:
	GraphicsGDIplus();
	void drawLine(int x1, int y1, int x2, int y2, RGBColor stroke, float strokeWidth, float strokeOpacity);
	void drawRectangle(int x, int y, float width, float height, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity);
	void drawCircle(int cx, int cy, float r, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity);
	void drawEllipse(int x, int y, float rx, float ry, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity);
	void drawPolygon(std::vector<SPoint> list, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity);
	void drawPolyline(std::vector<SPoint> list, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity);
	CImg<int>& getCImg();
	virtual ~GraphicsGDIplus();
};

