#pragma once
#include "RGBColor.h"
#include "SPoint.h"
#include <vector>
class IGraphics
{
public:
	virtual void drawLine(int x1, int y1, int x2, int y2, RGBColor stroke, float strokeWidth, float strokeOpacity) = NULL;
	virtual void drawRectangle(int x, int y, float width, float height, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity) = NULL;
	virtual void drawCircle(int cx, int cy, float r, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity) = NULL;
	virtual void drawEllipse(int x, int y, float rx, float ry, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity) = NULL;
	virtual void drawPolygon(std::vector<SPoint> list,RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity) = NULL;
	virtual void drawPolyline(std::vector<SPoint> list, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity) = NULL;
	virtual ~IGraphics() {};
};

