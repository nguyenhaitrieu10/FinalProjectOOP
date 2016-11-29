#include "stdafx.h"
#include "GraphicsImg.h"


void GraphicsImg::drawLine(int x1, int y1, int x2, int y2, RGBColor stroke, float strokeWidth, float strokeOpacity)
{
	const unsigned char color[] = {stroke.m_red, stroke.m_green, stroke.m_blue};
	m_graphics.draw_line(x1, y1, x2, y2, color, strokeOpacity);
}

void GraphicsImg::drawRectangle(int x, int y, float width, float height, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity)
{
	const unsigned char color[] = { stroke.m_red, stroke.m_green, stroke.m_blue };
	m_graphics.draw_rectangle(x, y, x + height, y + width, color, strokeOpacity);
}

void GraphicsImg::drawCircle(int cx, int cy, float r, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity)
{
	const unsigned char color[] = { stroke.m_red, stroke.m_green, stroke.m_blue };
	m_graphics.draw_circle(cx, cy, r, color, strokeOpacity);
}

void GraphicsImg::drawEllipse(int x, int y, float rx, float ry, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity)
{
	const unsigned char color[] = { stroke.m_red, stroke.m_green, stroke.m_blue };
	m_graphics.draw_ellipse(x, y, rx, ry, 0, color, strokeOpacity);
}

void GraphicsImg::drawPolygon(std::vector<SPoint> list, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity)
{
	const unsigned char color[] = { stroke.m_red, stroke.m_green, stroke.m_blue };
	int *points = new int[2 * list.size()];
	for (int i = 0; i < list.size(); i++)
	{
		points[i] = list.at(i).x;
		points[i] = list.at(i).y;
	}
	CImg<int> _graph(points, 400);

	m_graphics.draw_polygon(_graph, color, strokeOpacity);
	delete []points;
}
void GraphicsImg::drawPolyline(std::vector<SPoint> list, RGBColor fill, RGBColor stroke, float strokeWidth, float fillOpacity, float strokeOpacity)
{

}