#include "Face.h"
#include "Graphics.h"

void Face::Clamp()
{
	if (x < 0)
	{
		x = 0;
	}

	else if (x >= (float(Graphics::ScreenWidth - 1) - width1))
	{
		x = (float(Graphics::ScreenWidth - 1) - width1);
	}

	else if (y < 0)
	{
		y = 0;
	}

	else if (y >= float(Graphics::ScreenHeight - 1) - height1)
	{
		y = float(Graphics::ScreenHeight - 1) - height1;
	}
}

void Face::DrawFace(Graphics &gfx)
{
	gfx.PutPixel(7 + int (x), 0 + int (y), 0, 0, 0);
	gfx.PutPixel(8 + int (x), 0 + int (y), 0, 0, 0);
	gfx.PutPixel(9 + int (x), 0 + int (y), 0, 0, 0);
	gfx.PutPixel(10 + int (x), 0 + int (y), 0, 0, 0);
	gfx.PutPixel(11 + int (x), 0 + int (y), 0, 0, 0);
	gfx.PutPixel(12 + int (x), 0 + int (y), 0, 0, 0);
	gfx.PutPixel(5 + int (x), 1 + int (y), 0, 0, 0);
	gfx.PutPixel(6 + int (x), 1 + int (y), 0, 0, 0);
	gfx.PutPixel(7 + int (x), 1 + int (y), 254, 221, 88);
	gfx.PutPixel(8 + int (x), 1 + int (y), 254, 221, 88);
	gfx.PutPixel(9 + int (x), 1 + int (y), 254, 221, 88);
	gfx.PutPixel(10 + int (x), 1 + int (y), 254, 221, 88);
	gfx.PutPixel(11 + int (x), 1 + int (y), 254, 221, 88);
	gfx.PutPixel(12 + int (x), 1 + int (y), 254, 221, 88);
	gfx.PutPixel(13 + int (x), 1 + int (y), 0, 0, 0);
	gfx.PutPixel(14 + int (x), 1 + int (y), 0, 0, 0);
	gfx.PutPixel(3 + int (x), 2 + int (y), 0, 0, 0);
	gfx.PutPixel(4 + int (x), 2 + int (y), 0, 0, 0);
	gfx.PutPixel(5 + int (x), 2 + int (y), 254, 221, 88);
	gfx.PutPixel(6 + int (x), 2 + int (y), 254, 221, 88);
	gfx.PutPixel(7 + int (x), 2 + int (y), 254, 221, 88);
	gfx.PutPixel(8 + int (x), 2 + int (y), 254, 221, 88);
	gfx.PutPixel(9 + int (x), 2 + int (y), 254, 221, 88);
	gfx.PutPixel(10 + int (x), 2 + int (y), 254, 221, 88);
	gfx.PutPixel(11 + int (x), 2 + int (y), 254, 221, 88);
	gfx.PutPixel(12 + int (x), 2 + int (y), 254, 221, 88);
	gfx.PutPixel(13 + int (x), 2 + int (y), 254, 221, 88);
	gfx.PutPixel(14 + int (x), 2 + int (y), 254, 221, 88);
	gfx.PutPixel(15 + int (x), 2 + int (y), 0, 0, 0);
	gfx.PutPixel(16 + int (x), 2 + int (y), 0, 0, 0);
	gfx.PutPixel(2 + int (x), 3 + int (y), 0, 0, 0);
	gfx.PutPixel(3 + int (x), 3 + int (y), 254, 221, 88);
	gfx.PutPixel(4 + int (x), 3 + int (y), 254, 221, 88);
	gfx.PutPixel(5 + int (x), 3 + int (y), 254, 221, 88);
	gfx.PutPixel(6 + int (x), 3 + int (y), 254, 221, 88);
	gfx.PutPixel(7 + int (x), 3 + int (y), 254, 221, 88);
	gfx.PutPixel(8 + int (x), 3 + int (y), 254, 221, 88);
	gfx.PutPixel(9 + int (x), 3 + int (y), 254, 221, 88);
	gfx.PutPixel(10 + int (x), 3 + int (y), 254, 221, 88);
	gfx.PutPixel(11 + int (x), 3 + int (y), 254, 221, 88);
	gfx.PutPixel(12 + int (x), 3 + int (y), 254, 221, 88);
	gfx.PutPixel(13 + int (x), 3 + int (y), 254, 221, 88);
	gfx.PutPixel(14 + int (x), 3 + int (y), 254, 221, 88);
	gfx.PutPixel(15 + int (x), 3 + int (y), 254, 221, 88);
	gfx.PutPixel(16 + int (x), 3 + int (y), 254, 221, 88);
	gfx.PutPixel(17 + int (x), 3 + int (y), 0, 0, 0);
	gfx.PutPixel(2 + int (x), 4 + int (y), 0, 0, 0);
	gfx.PutPixel(3 + int (x), 4 + int (y), 254, 221, 88);
	gfx.PutPixel(4 + int (x), 4 + int (y), 254, 221, 88);
	gfx.PutPixel(5 + int (x), 4 + int (y), 254, 221, 88);
	gfx.PutPixel(6 + int (x), 4 + int (y), 254, 221, 88);
	gfx.PutPixel(7 + int (x), 4 + int (y), 254, 221, 88);
	gfx.PutPixel(8 + int (x), 4 + int (y), 254, 221, 88);
	gfx.PutPixel(9 + int (x), 4 + int (y), 254, 221, 88);
	gfx.PutPixel(10 + int (x), 4 + int (y), 254, 221, 88);
	gfx.PutPixel(11 + int (x), 4 + int (y), 254, 221, 88);
	gfx.PutPixel(12 + int (x), 4 + int (y), 254, 221, 88);
	gfx.PutPixel(13 + int (x), 4 + int (y), 254, 221, 88);
	gfx.PutPixel(14 + int (x), 4 + int (y), 254, 221, 88);
	gfx.PutPixel(15 + int (x), 4 + int (y), 254, 221, 88);
	gfx.PutPixel(16 + int (x), 4 + int (y), 254, 221, 88);
	gfx.PutPixel(17 + int (x), 4 + int (y), 0, 0, 0);
	gfx.PutPixel(1 + int (x), 5 + int (y), 0, 0, 0);
	gfx.PutPixel(2 + int (x), 5 + int (y), 254, 221, 88);
	gfx.PutPixel(3 + int (x), 5 + int (y), 0, 0, 0);
	gfx.PutPixel(4 + int (x), 5 + int (y), 0, 0, 0);
	gfx.PutPixel(5 + int (x), 5 + int (y), 254, 221, 88);
	gfx.PutPixel(6 + int (x), 5 + int (y), 254, 221, 88);
	gfx.PutPixel(7 + int (x), 5 + int (y), 254, 221, 88);
	gfx.PutPixel(8 + int (x), 5 + int (y), 254, 221, 88);
	gfx.PutPixel(9 + int (x), 5 + int (y), 254, 221, 88);
	gfx.PutPixel(10 + int (x), 5 + int (y), 254, 221, 88);
	gfx.PutPixel(11 + int (x), 5 + int (y), 0, 0, 0);
	gfx.PutPixel(12 + int (x), 5 + int (y), 0, 0, 0);
	gfx.PutPixel(13 + int (x), 5 + int (y), 0, 0, 0);
	gfx.PutPixel(14 + int (x), 5 + int (y), 0, 0, 0);
	gfx.PutPixel(15 + int (x), 5 + int (y), 254, 221, 88);
	gfx.PutPixel(16 + int (x), 5 + int (y), 254, 221, 88);
	gfx.PutPixel(17 + int (x), 5 + int (y), 254, 221, 88);
	gfx.PutPixel(18 + int (x), 5 + int (y), 0, 0, 0);
	gfx.PutPixel(1 + int (x), 6 + int (y), 0, 0, 0);
	gfx.PutPixel(2 + int (x), 6 + int (y), 0, 0, 0);
	gfx.PutPixel(3 + int (x), 6 + int (y), 255, 255, 255);
	gfx.PutPixel(4 + int (x), 6 + int (y), 0, 0, 0);
	gfx.PutPixel(5 + int (x), 6 + int (y), 0, 0, 0);
	gfx.PutPixel(6 + int (x), 6 + int (y), 254, 221, 88);
	gfx.PutPixel(7 + int (x), 6 + int (y), 254, 221, 88);
	gfx.PutPixel(8 + int (x), 6 + int (y), 254, 221, 88);
	gfx.PutPixel(9 + int (x), 6 + int (y), 254, 221, 88);
	gfx.PutPixel(10 + int (x), 6 + int (y), 0, 0, 0);
	gfx.PutPixel(11 + int (x), 6 + int (y), 255, 255, 255);
	gfx.PutPixel(12 + int (x), 6 + int (y), 255, 255, 255);
	gfx.PutPixel(13 + int (x), 6 + int (y), 0, 0, 0);
	gfx.PutPixel(14 + int (x), 6 + int (y), 0, 0, 0);
	gfx.PutPixel(15 + int (x), 6 + int (y), 0, 0, 0);
	gfx.PutPixel(16 + int (x), 6 + int (y), 254, 221, 88);
	gfx.PutPixel(17 + int (x), 6 + int (y), 254, 221, 88);
	gfx.PutPixel(18 + int (x), 6 + int (y), 0, 0, 0);
	gfx.PutPixel(0 + int (x), 7 + int (y), 0, 0, 0);
	gfx.PutPixel(1 + int (x), 7 + int (y), 0, 0, 0);
	gfx.PutPixel(2 + int (x), 7 + int (y), 255, 255, 255);
	gfx.PutPixel(3 + int (x), 7 + int (y), 255, 255, 255);
	gfx.PutPixel(4 + int (x), 7 + int (y), 0, 0, 0);
	gfx.PutPixel(5 + int (x), 7 + int (y), 0, 0, 0);
	gfx.PutPixel(6 + int (x), 7 + int (y), 254, 221, 88);
	gfx.PutPixel(7 + int (x), 7 + int (y), 254, 221, 88);
	gfx.PutPixel(8 + int (x), 7 + int (y), 254, 221, 88);
	gfx.PutPixel(9 + int (x), 7 + int (y), 254, 221, 88);
	gfx.PutPixel(10 + int (x), 7 + int (y), 0, 0, 0);
	gfx.PutPixel(11 + int (x), 7 + int (y), 255, 255, 255);
	gfx.PutPixel(12 + int (x), 7 + int (y), 255, 255, 255);
	gfx.PutPixel(13 + int (x), 7 + int (y), 0, 0, 0);
	gfx.PutPixel(14 + int (x), 7 + int (y), 0, 0, 0);
	gfx.PutPixel(15 + int (x), 7 + int (y), 0, 0, 0);
	gfx.PutPixel(16 + int (x), 7 + int (y), 254, 221, 88);
	gfx.PutPixel(17 + int (x), 7 + int (y), 254, 221, 88);
	gfx.PutPixel(18 + int (x), 7 + int (y), 254, 221, 88);
	gfx.PutPixel(19 + int (x), 7 + int (y), 0, 0, 0);
	gfx.PutPixel(0 + int (x), 8 + int (y), 0, 0, 0);
	gfx.PutPixel(1 + int (x), 8 + int (y), 0, 0, 0);
	gfx.PutPixel(2 + int (x), 8 + int (y), 255, 255, 255);
	gfx.PutPixel(3 + int (x), 8 + int (y), 255, 255, 255);
	gfx.PutPixel(4 + int (x), 8 + int (y), 255, 255, 255);
	gfx.PutPixel(5 + int (x), 8 + int (y), 0, 0, 0);
	gfx.PutPixel(6 + int (x), 8 + int (y), 254, 221, 88);
	gfx.PutPixel(7 + int (x), 8 + int (y), 254, 221, 88);
	gfx.PutPixel(8 + int (x), 8 + int (y), 254, 221, 88);
	gfx.PutPixel(9 + int (x), 8 + int (y), 254, 221, 88);
	gfx.PutPixel(10 + int (x), 8 + int (y), 0, 0, 0);
	gfx.PutPixel(11 + int (x), 8 + int (y), 255, 255, 255);
	gfx.PutPixel(12 + int (x), 8 + int (y), 255, 255, 255);
	gfx.PutPixel(13 + int (x), 8 + int (y), 255, 255, 255);
	gfx.PutPixel(14 + int (x), 8 + int (y), 255, 255, 255);
	gfx.PutPixel(15 + int (x), 8 + int (y), 0, 0, 0);
	gfx.PutPixel(16 + int (x), 8 + int (y), 254, 221, 88);
	gfx.PutPixel(17 + int (x), 8 + int (y), 254, 221, 88);
	gfx.PutPixel(18 + int (x), 8 + int (y), 254, 221, 88);
	gfx.PutPixel(19 + int (x), 8 + int (y), 0, 0, 0);
	gfx.PutPixel(0 + int (x), 9 + int (y), 0, 0, 0);
	gfx.PutPixel(1 + int (x), 9 + int (y), 254, 221, 88);
	gfx.PutPixel(2 + int (x), 9 + int (y), 0, 0, 0);
	gfx.PutPixel(3 + int (x), 9 + int (y), 0, 0, 0);
	gfx.PutPixel(4 + int (x), 9 + int (y), 0, 0, 0);
	gfx.PutPixel(5 + int (x), 9 + int (y), 0, 0, 0);
	gfx.PutPixel(6 + int (x), 9 + int (y), 254, 221, 88);
	gfx.PutPixel(7 + int (x), 9 + int (y), 254, 221, 88);
	gfx.PutPixel(8 + int (x), 9 + int (y), 254, 221, 88);
	gfx.PutPixel(9 + int (x), 9 + int (y), 254, 221, 88);
	gfx.PutPixel(10 + int (x), 9 + int (y), 254, 221, 88);
	gfx.PutPixel(11 + int (x), 9 + int (y), 0, 0, 0);
	gfx.PutPixel(12 + int (x), 9 + int (y), 0, 0, 0);
	gfx.PutPixel(13 + int (x), 9 + int (y), 0, 0, 0);
	gfx.PutPixel(14 + int (x), 9 + int (y), 0, 0, 0);
	gfx.PutPixel(15 + int (x), 9 + int (y), 254, 221, 88);
	gfx.PutPixel(16 + int (x), 9 + int (y), 254, 221, 88);
	gfx.PutPixel(17 + int (x), 9 + int (y), 254, 221, 88);
	gfx.PutPixel(18 + int (x), 9 + int (y), 254, 221, 88);
	gfx.PutPixel(19 + int (x), 9 + int (y), 0, 0, 0);
	gfx.PutPixel(0 + int (x), 10 + int (y), 0, 0, 0);
	gfx.PutPixel(1 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(2 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(3 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(4 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(5 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(6 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(7 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(8 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(9 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(10 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(11 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(12 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(13 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(14 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(15 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(16 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(17 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(18 + int (x), 10 + int (y), 254, 221, 88);
	gfx.PutPixel(19 + int (x), 10 + int (y), 0, 0, 0);
	gfx.PutPixel(0 + int (x), 11 + int (y), 0, 0, 0);
	gfx.PutPixel(1 + int (x), 11 + int (y), 254, 221, 88);
	gfx.PutPixel(2 + int (x), 11 + int (y), 254, 221, 88);
	gfx.PutPixel(3 + int (x), 11 + int (y), 254, 221, 88);
	gfx.PutPixel(4 + int (x), 11 + int (y), 254, 221, 88);
	gfx.PutPixel(5 + int (x), 11 + int (y), 254, 221, 88);
	gfx.PutPixel(6 + int (x), 11 + int (y), 254, 221, 88);
	gfx.PutPixel(7 + int (x), 11 + int (y), 20, 14, 18);
	gfx.PutPixel(8 + int (x), 11 + int (y), 18, 11, 14);
	gfx.PutPixel(9 + int (x), 11 + int (y), 18, 12, 14);
	gfx.PutPixel(10 + int (x), 11 + int (y), 18, 12, 14);
	gfx.PutPixel(11 + int (x), 11 + int (y), 21, 13, 16);
	gfx.PutPixel(12 + int (x), 11 + int (y), 24, 11, 15);
	gfx.PutPixel(13 + int (x), 11 + int (y), 0, 0, 0);
	gfx.PutPixel(14 + int (x), 11 + int (y), 254, 221, 88);
	gfx.PutPixel(15 + int (x), 11 + int (y), 254, 221, 88);
	gfx.PutPixel(16 + int (x), 11 + int (y), 254, 221, 88);
	gfx.PutPixel(17 + int (x), 11 + int (y), 254, 221, 88);
	gfx.PutPixel(18 + int (x), 11 + int (y), 254, 221, 88);
	gfx.PutPixel(19 + int (x), 11 + int (y), 0, 0, 0);
	gfx.PutPixel(0 + int (x), 12 + int (y), 0, 0, 0);
	gfx.PutPixel(1 + int (x), 12 + int (y), 254, 221, 88);
	gfx.PutPixel(2 + int (x), 12 + int (y), 254, 221, 88);
	gfx.PutPixel(3 + int (x), 12 + int (y), 254, 221, 88);
	gfx.PutPixel(4 + int (x), 12 + int (y), 254, 221, 88);
	gfx.PutPixel(5 + int (x), 12 + int (y), 254, 221, 88);
	gfx.PutPixel(6 + int (x), 12 + int (y), 23, 9, 23);
	gfx.PutPixel(7 + int (x), 12 + int (y), 135, 26, 68);
	gfx.PutPixel(8 + int (x), 12 + int (y), 135, 26, 68);
	gfx.PutPixel(9 + int (x), 12 + int (y), 135, 26, 68);
	gfx.PutPixel(10 + int (x), 12 + int (y), 135, 26, 68);
	gfx.PutPixel(11 + int (x), 12 + int (y), 135, 26, 68);
	gfx.PutPixel(12 + int (x), 12 + int (y), 135, 26, 68);
	gfx.PutPixel(13 + int (x), 12 + int (y), 135, 26, 68);
	gfx.PutPixel(14 + int (x), 12 + int (y), 0, 0, 0);
	gfx.PutPixel(15 + int (x), 12 + int (y), 254, 221, 88);
	gfx.PutPixel(16 + int (x), 12 + int (y), 254, 221, 88);
	gfx.PutPixel(17 + int (x), 12 + int (y), 254, 221, 88);
	gfx.PutPixel(18 + int (x), 12 + int (y), 254, 221, 88);
	gfx.PutPixel(19 + int (x), 12 + int (y), 0, 0, 0);
	gfx.PutPixel(1 + int (x), 13 + int (y), 0, 0, 0);
	gfx.PutPixel(2 + int (x), 13 + int (y), 254, 221, 88);
	gfx.PutPixel(3 + int (x), 13 + int (y), 254, 221, 88);
	gfx.PutPixel(4 + int (x), 13 + int (y), 254, 221, 88);
	gfx.PutPixel(5 + int (x), 13 + int (y), 0, 0, 0);
	gfx.PutPixel(6 + int (x), 13 + int (y), 135, 26, 68);
	gfx.PutPixel(7 + int (x), 13 + int (y), 135, 26, 68);
	gfx.PutPixel(8 + int (x), 13 + int (y), 135, 26, 68);
	gfx.PutPixel(9 + int (x), 13 + int (y), 135, 26, 68);
	gfx.PutPixel(10 + int (x), 13 + int (y), 135, 26, 68);
	gfx.PutPixel(11 + int (x), 13 + int (y), 135, 26, 68);
	gfx.PutPixel(12 + int (x), 13 + int (y), 135, 26, 68);
	gfx.PutPixel(13 + int (x), 13 + int (y), 135, 26, 68);
	gfx.PutPixel(14 + int (x), 13 + int (y), 135, 26, 68);
	gfx.PutPixel(15 + int (x), 13 + int (y), 0, 0, 0);
	gfx.PutPixel(16 + int (x), 13 + int (y), 254, 221, 88);
	gfx.PutPixel(17 + int (x), 13 + int (y), 254, 221, 88);
	gfx.PutPixel(18 + int (x), 13 + int (y), 0, 0, 0);
	gfx.PutPixel(1 + int (x), 14 + int (y), 0, 0, 0);
	gfx.PutPixel(2 + int (x), 14 + int (y), 254, 221, 88);
	gfx.PutPixel(3 + int (x), 14 + int (y), 254, 221, 88);
	gfx.PutPixel(4 + int (x), 14 + int (y), 0, 0, 0);
	gfx.PutPixel(5 + int (x), 14 + int (y), 135, 26, 68);
	gfx.PutPixel(6 + int (x), 14 + int (y), 135, 26, 68);
	gfx.PutPixel(7 + int (x), 14 + int (y), 135, 26, 68);
	gfx.PutPixel(8 + int (x), 14 + int (y), 135, 26, 68);
	gfx.PutPixel(9 + int (x), 14 + int (y), 251, 192, 224);
	gfx.PutPixel(10 + int (x), 14 + int (y), 251, 192, 224);
	gfx.PutPixel(11 + int (x), 14 + int (y), 251, 192, 224);
	gfx.PutPixel(12 + int (x), 14 + int (y), 251, 192, 224);
	gfx.PutPixel(13 + int (x), 14 + int (y), 135, 26, 68);
	gfx.PutPixel(14 + int (x), 14 + int (y), 135, 26, 68);
	gfx.PutPixel(15 + int (x), 14 + int (y), 0, 0, 0);
	gfx.PutPixel(16 + int (x), 14 + int (y), 254, 221, 88);
	gfx.PutPixel(17 + int (x), 14 + int (y), 254, 221, 88);
	gfx.PutPixel(18 + int (x), 14 + int (y), 0, 0, 0);
	gfx.PutPixel(2 + int (x), 15 + int (y), 0, 0, 0);
	gfx.PutPixel(3 + int (x), 15 + int (y), 254, 221, 88);
	gfx.PutPixel(4 + int (x), 15 + int (y), 0, 0, 0);
	gfx.PutPixel(5 + int (x), 15 + int (y), 135, 26, 68);
	gfx.PutPixel(6 + int (x), 15 + int (y), 135, 26, 68);
	gfx.PutPixel(7 + int (x), 15 + int (y), 135, 26, 68);
	gfx.PutPixel(8 + int (x), 15 + int (y), 251, 192, 224);
	gfx.PutPixel(9 + int (x), 15 + int (y), 251, 192, 224);
	gfx.PutPixel(10 + int (x), 15 + int (y), 251, 192, 224);
	gfx.PutPixel(11 + int (x), 15 + int (y), 251, 192, 224);
	gfx.PutPixel(12 + int (x), 15 + int (y), 251, 192, 224);
	gfx.PutPixel(13 + int (x), 15 + int (y), 251, 192, 224);
	gfx.PutPixel(14 + int (x), 15 + int (y), 135, 26, 68);
	gfx.PutPixel(15 + int (x), 15 + int (y), 0, 0, 0);
	gfx.PutPixel(16 + int (x), 15 + int (y), 254, 221, 88);
	gfx.PutPixel(17 + int (x), 15 + int (y), 0, 0, 0);
	gfx.PutPixel(2 + int (x), 16 + int (y), 0, 0, 0);
	gfx.PutPixel(3 + int (x), 16 + int (y), 254, 221, 88);
	gfx.PutPixel(4 + int (x), 16 + int (y), 0, 0, 0);
	gfx.PutPixel(5 + int (x), 16 + int (y), 135, 26, 68);
	gfx.PutPixel(6 + int (x), 16 + int (y), 135, 26, 68);
	gfx.PutPixel(7 + int (x), 16 + int (y), 135, 26, 68);
	gfx.PutPixel(8 + int (x), 16 + int (y), 251, 192, 224);
	gfx.PutPixel(9 + int (x), 16 + int (y), 251, 192, 224);
	gfx.PutPixel(10 + int (x), 16 + int (y), 251, 192, 224);
	gfx.PutPixel(11 + int (x), 16 + int (y), 251, 192, 224);
	gfx.PutPixel(12 + int (x), 16 + int (y), 251, 192, 224);
	gfx.PutPixel(13 + int (x), 16 + int (y), 251, 192, 224);
	gfx.PutPixel(14 + int (x), 16 + int (y), 135, 26, 68);
	gfx.PutPixel(15 + int (x), 16 + int (y), 0, 0, 0);
	gfx.PutPixel(16 + int (x), 16 + int (y), 254, 221, 88);
	gfx.PutPixel(17 + int (x), 16 + int (y), 0, 0, 0);
	gfx.PutPixel(3 + int (x), 17 + int (y), 0, 0, 0);
	gfx.PutPixel(4 + int (x), 17 + int (y), 0, 0, 0);
	gfx.PutPixel(5 + int (x), 17 + int (y), 0, 0, 0);
	gfx.PutPixel(6 + int (x), 17 + int (y), 0, 0, 0);
	gfx.PutPixel(7 + int (x), 17 + int (y), 0, 0, 0);
	gfx.PutPixel(8 + int (x), 17 + int (y), 0, 0, 0);
	gfx.PutPixel(9 + int (x), 17 + int (y), 0, 0, 0);
	gfx.PutPixel(10 + int (x), 17 + int (y), 0, 0, 0);
	gfx.PutPixel(11 + int (x), 17 + int (y), 0, 0, 0);
	gfx.PutPixel(12 + int (x), 17 + int (y), 0, 0, 0);
	gfx.PutPixel(13 + int (x), 17 + int (y), 0, 0, 0);
	gfx.PutPixel(14 + int (x), 17 + int (y), 0, 0, 0);
	gfx.PutPixel(15 + int (x), 17 + int (y), 0, 0, 0);
	gfx.PutPixel(16 + int (x), 17 + int (y), 0, 0, 0);
	gfx.PutPixel(5 + int (x), 18 + int (y), 0, 0, 0);
	gfx.PutPixel(6 + int (x), 18 + int (y), 0, 0, 0);
	gfx.PutPixel(7 + int (x), 18 + int (y), 254, 221, 88);
	gfx.PutPixel(8 + int (x), 18 + int (y), 254, 221, 88);
	gfx.PutPixel(9 + int (x), 18 + int (y), 254, 221, 88);
	gfx.PutPixel(10 + int (x), 18 + int (y), 254, 221, 88);
	gfx.PutPixel(11 + int (x), 18 + int (y), 254, 221, 88);
	gfx.PutPixel(12 + int (x), 18 + int (y), 254, 221, 88);
	gfx.PutPixel(13 + int (x), 18 + int (y), 0, 0, 0);
	gfx.PutPixel(14 + int (x), 18 + int (y), 0, 0, 0);
	gfx.PutPixel(7 + int (x), 19 + int (y), 0, 0, 0);
	gfx.PutPixel(8 + int (x), 19 + int (y), 0, 0, 0);
	gfx.PutPixel(9 + int (x), 19 + int (y), 0, 0, 0);
	gfx.PutPixel(10 + int (x), 19 + int (y), 0, 0, 0);
	gfx.PutPixel(11 + int (x), 19 + int (y), 0, 0, 0);
	gfx.PutPixel(12 + int (x), 19 + int (y), 0, 0, 0);

}

void Face::update(Keyboard& kbd)
{
	if (kbd.KeyIsPressed(VK_RIGHT))
	{
		x += speed;
	}
	if (kbd.KeyIsPressed(VK_LEFT))
	{
		x -= speed;

	}
	if (kbd.KeyIsPressed(VK_UP))
	{
		y -= speed;
	}
	if (kbd.KeyIsPressed(VK_DOWN))
	{
		y += speed;
	}
	
}



float Face::getx()
{
	return x;
}

float Face::gety()
{
	return y;
}

float Face::width()
{
	return width1;
}

float Face::height()
{
	return height1;
}
