#pragma once

#include "resource.h"
#include <gdiplus.h>
#include "CImg.h"
using namespace cimg_library;
using namespace Gdiplus;
#pragma comment (lib, "Gdiplus.lib")

void MyPaint(HDC hdc)
{
	Graphics graphics(hdc);
	Pen pen(Color(255, 0, 0, 255));
	graphics.DrawLine(&pen, 0, 0, 200, 100);
}
void Draw_Line()
{
	CImg<int> canvas(400, 300, 1, 255);
	canvas.fill(255);
	const unsigned char color[] = { 0,0,255 };
	canvas.draw_line(0, 0, 200, 100, color);
	CImgDisplay display(canvas, "CImg Demo", 0);

	while (!display.is_closed())
		display.wait();
}

