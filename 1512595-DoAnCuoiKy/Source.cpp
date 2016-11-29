#include "stdafx.h"
#include "SLine.h"
#include "GraphicsImg.h"
#include "SRectangle.h"

void drawLineCImg()
{
	SPoint p1 = { 0,0 };
	SPoint p2 = { 200, 100 };
	RGBColor cl = { 0,0,255 };
	RGBColor cl2 = { 255,0,0 };
	std::vector<Transform*> vectorNull;
	SLine l(p1, p2, cl, 10, 255, vectorNull);
	GraphicsImg *grap = new GraphicsImg();
	l.draw(grap);
	
	//SRectangle rec(p2, 200, 100, cl, 10, 255, vectorNull, cl2, 255);
	//rec.draw(grap);

	CImgDisplay display(grap->getCImg(), "CImg Demo", 0);
	/*while (!display.is_closed())
		display.wait();*/
}