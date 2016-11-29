#pragma once
#include "RGBColor.h"
#include "SPoint.h"
#include <vector>
#include "resource.h"
#include <gdiplus.h>
#include "CImg.h"
using namespace cimg_library;
using namespace Gdiplus;
#pragma comment (lib, "Gdiplus.lib")

class IGraphics
{
public:
	virtual void drawLine(int x1, int y1, int x2, int y2, RGBColor stroke, float strokeWidth, float strokeOpacity) = 0;
	virtual void drawRectangle(int x, int y, float width, float height, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity) = 0;
	virtual void drawCircle(int cx, int cy, float r, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity) = 0;
	virtual void drawEllipse(int x, int y, float rx, float ry, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity) = 0;
	virtual void drawPolygon(std::vector<SPoint> list,RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity) = 0;
	virtual void drawPolyline(std::vector<SPoint> list, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity) = 0;
	virtual ~IGraphics() {};
};

