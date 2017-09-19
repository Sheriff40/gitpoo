
#include "poo.h"
#include "Graphics.h"

void poo::Update(float dt)
{
	pos.x += vel.x * dt;
	pos.y += vel.y * dt;

	{
		if (pos.x < 0)
		{
			pos.x = 0;
			vel.x = -vel.x;
		}

		else if (pos.x >= (float(Graphics::ScreenWidth - 1) - width))
		{
			pos.x = (float(Graphics::ScreenWidth - 1) - width);
			vel.x = -vel.x;
		}
	}

	{
		if (pos.y < 0)
		{
			pos.y = 0;
			vel.y = -vel.y;
		}

		else if (pos.y >= (float(Graphics::ScreenHeight - 1) - height))
		{
			pos.y = (float(Graphics::ScreenHeight - 1) - height);
			vel.y = -vel.y;
		}
	}

}

void poo::DrawPoop(Graphics& gfx)
{
	const int x = int(pos.x);
	const int y = int(pos.y);
	gfx.PutPixel(14 + int (x), 0 + int (y), 138, 77, 0);
	gfx.PutPixel(7 + int (x), 1 + int (y), 138, 77, 0);
	gfx.PutPixel(13 + int (x), 1 + int (y), 138, 77, 0);
	gfx.PutPixel(20 + int (x), 1 + int (y), 138, 77, 0);
	gfx.PutPixel(6 + int (x), 2 + int (y), 138, 77, 0);
	gfx.PutPixel(13 + int (x), 2 + int (y), 138, 77, 0);
	gfx.PutPixel(20 + int (x), 2 + int (y), 138, 77, 0);
	gfx.PutPixel(6 + int (x), 3 + int (y), 138, 77, 0);
	gfx.PutPixel(6 + int (x), 4 + int (y), 138, 77, 0);
	gfx.PutPixel(14 + int (x), 4 + int (y), 138, 77, 0);
	gfx.PutPixel(21 + int (x), 4 + int (y), 138, 77, 0);
	gfx.PutPixel(7 + int (x), 5 + int (y), 138, 77, 0);
	gfx.PutPixel(13 + int (x), 5 + int (y), 138, 77, 0);
	gfx.PutPixel(21 + int (x), 5 + int (y), 138, 77, 0);
	gfx.PutPixel(7 + int (x), 6 + int (y), 138, 77, 0);
	gfx.PutPixel(20 + int (x), 6 + int (y), 138, 77, 0);
	gfx.PutPixel(6 + int (x), 7 + int (y), 138, 77, 0);
	gfx.PutPixel(14 + int (x), 7 + int (y), 51, 28, 0);
	gfx.PutPixel(15 + int (x), 7 + int (y), 51, 28, 0);
	gfx.PutPixel(20 + int (x), 7 + int (y), 138, 77, 0);
	gfx.PutPixel(12 + int (x), 8 + int (y), 51, 28, 0);
	gfx.PutPixel(13 + int (x), 8 + int (y), 51, 28, 0);
	gfx.PutPixel(14 + int (x), 8 + int (y), 51, 28, 0);
	gfx.PutPixel(7 + int (x), 9 + int (y), 138, 77, 0);
	gfx.PutPixel(11 + int (x), 9 + int (y), 51, 28, 0);
	gfx.PutPixel(12 + int (x), 9 + int (y), 102, 57, 0);
	gfx.PutPixel(13 + int (x), 9 + int (y), 138, 77, 0);
	gfx.PutPixel(14 + int (x), 9 + int (y), 138, 77, 0);
	gfx.PutPixel(15 + int (x), 9 + int (y), 51, 28, 0);
	gfx.PutPixel(21 + int (x), 9 + int (y), 138, 77, 0);
	gfx.PutPixel(10 + int (x), 10 + int (y), 51, 28, 0);
	gfx.PutPixel(11 + int (x), 10 + int (y), 51, 28, 0);
	gfx.PutPixel(12 + int (x), 10 + int (y), 102, 57, 0);
	gfx.PutPixel(13 + int (x), 10 + int (y), 138, 77, 0);
	gfx.PutPixel(14 + int (x), 10 + int (y), 138, 77, 0);
	gfx.PutPixel(15 + int (x), 10 + int (y), 51, 28, 0);
	gfx.PutPixel(20 + int (x), 10 + int (y), 138, 77, 0);
	gfx.PutPixel(9 + int (x), 11 + int (y), 51, 28, 0);
	gfx.PutPixel(10 + int (x), 11 + int (y), 138, 77, 0);
	gfx.PutPixel(11 + int (x), 11 + int (y), 138, 77, 0);
	gfx.PutPixel(12 + int (x), 11 + int (y), 51, 28, 0);
	gfx.PutPixel(13 + int (x), 11 + int (y), 51, 28, 0);
	gfx.PutPixel(14 + int (x), 11 + int (y), 51, 28, 0);
	gfx.PutPixel(15 + int (x), 11 + int (y), 51, 28, 0);
	gfx.PutPixel(16 + int (x), 11 + int (y), 51, 28, 0);
	gfx.PutPixel(9 + int (x), 12 + int (y), 51, 28, 0);
	gfx.PutPixel(10 + int (x), 12 + int (y), 138, 77, 0);
	gfx.PutPixel(11 + int (x), 12 + int (y), 138, 77, 0);
	gfx.PutPixel(12 + int (x), 12 + int (y), 111, 62, 0);
	gfx.PutPixel(13 + int (x), 12 + int (y), 102, 57, 0);
	gfx.PutPixel(14 + int (x), 12 + int (y), 102, 57, 0);
	gfx.PutPixel(15 + int (x), 12 + int (y), 102, 57, 0);
	gfx.PutPixel(16 + int (x), 12 + int (y), 51, 28, 0);
	gfx.PutPixel(9 + int (x), 13 + int (y), 51, 28, 0);
	gfx.PutPixel(10 + int (x), 13 + int (y), 109, 61, 0);
	gfx.PutPixel(11 + int (x), 13 + int (y), 138, 77, 0);
	gfx.PutPixel(12 + int (x), 13 + int (y), 138, 77, 0);
	gfx.PutPixel(13 + int (x), 13 + int (y), 138, 77, 0);
	gfx.PutPixel(14 + int (x), 13 + int (y), 138, 77, 0);
	gfx.PutPixel(15 + int (x), 13 + int (y), 138, 77, 0);
	gfx.PutPixel(16 + int (x), 13 + int (y), 51, 28, 0);
	gfx.PutPixel(5 + int (x), 14 + int (y), 51, 28, 0);
	gfx.PutPixel(7 + int (x), 14 + int (y), 51, 28, 0);
	gfx.PutPixel(8 + int (x), 14 + int (y), 51, 28, 0);
	gfx.PutPixel(9 + int (x), 14 + int (y), 51, 28, 0);
	gfx.PutPixel(10 + int (x), 14 + int (y), 51, 28, 0);
	gfx.PutPixel(11 + int (x), 14 + int (y), 138, 77, 0);
	gfx.PutPixel(12 + int (x), 14 + int (y), 138, 77, 0);
	gfx.PutPixel(13 + int (x), 14 + int (y), 138, 77, 0);
	gfx.PutPixel(14 + int (x), 14 + int (y), 138, 77, 0);
	gfx.PutPixel(15 + int (x), 14 + int (y), 138, 77, 0);
	gfx.PutPixel(16 + int (x), 14 + int (y), 51, 28, 0);
	gfx.PutPixel(4 + int (x), 15 + int (y), 51, 28, 0);
	gfx.PutPixel(5 + int (x), 15 + int (y), 138, 77, 0);
	gfx.PutPixel(6 + int (x), 15 + int (y), 51, 28, 0);
	gfx.PutPixel(7 + int (x), 15 + int (y), 116, 65, 0);
	gfx.PutPixel(8 + int (x), 15 + int (y), 138, 77, 0);
	gfx.PutPixel(9 + int (x), 15 + int (y), 138, 77, 0);
	gfx.PutPixel(10 + int (x), 15 + int (y), 138, 77, 0);
	gfx.PutPixel(11 + int (x), 15 + int (y), 51, 28, 0);
	gfx.PutPixel(12 + int (x), 15 + int (y), 51, 28, 0);
	gfx.PutPixel(13 + int (x), 15 + int (y), 51, 28, 0);
	gfx.PutPixel(14 + int (x), 15 + int (y), 51, 28, 0);
	gfx.PutPixel(15 + int (x), 15 + int (y), 51, 28, 0);
	gfx.PutPixel(16 + int (x), 15 + int (y), 51, 28, 0);
	gfx.PutPixel(17 + int (x), 15 + int (y), 51, 28, 0);
	gfx.PutPixel(18 + int (x), 15 + int (y), 51, 28, 0);
	gfx.PutPixel(1 + int (x), 16 + int (y), 51, 28, 0);
	gfx.PutPixel(2 + int (x), 16 + int (y), 51, 28, 0);
	gfx.PutPixel(3 + int (x), 16 + int (y), 51, 28, 0);
	gfx.PutPixel(4 + int (x), 16 + int (y), 51, 28, 0);
	gfx.PutPixel(5 + int (x), 16 + int (y), 138, 77, 0);
	gfx.PutPixel(6 + int (x), 16 + int (y), 51, 28, 0);
	gfx.PutPixel(7 + int (x), 16 + int (y), 116, 65, 0);
	gfx.PutPixel(8 + int (x), 16 + int (y), 138, 77, 0);
	gfx.PutPixel(9 + int (x), 16 + int (y), 138, 77, 0);
	gfx.PutPixel(10 + int (x), 16 + int (y), 138, 77, 0);
	gfx.PutPixel(11 + int (x), 16 + int (y), 138, 77, 0);
	gfx.PutPixel(12 + int (x), 16 + int (y), 138, 77, 0);
	gfx.PutPixel(13 + int (x), 16 + int (y), 109, 61, 0);
	gfx.PutPixel(14 + int (x), 16 + int (y), 51, 28, 0);
	gfx.PutPixel(15 + int (x), 16 + int (y), 138, 77, 0);
	gfx.PutPixel(16 + int (x), 16 + int (y), 138, 77, 0);
	gfx.PutPixel(17 + int (x), 16 + int (y), 138, 77, 0);
	gfx.PutPixel(18 + int (x), 16 + int (y), 123, 69, 0);
	gfx.PutPixel(19 + int (x), 16 + int (y), 51, 28, 0);
	gfx.PutPixel(0 + int (x), 17 + int (y), 51, 28, 0);
	gfx.PutPixel(1 + int (x), 17 + int (y), 87, 49, 0);
	gfx.PutPixel(2 + int (x), 17 + int (y), 87, 49, 0);
	gfx.PutPixel(3 + int (x), 17 + int (y), 87, 49, 0);
	gfx.PutPixel(4 + int (x), 17 + int (y), 87, 49, 0);
	gfx.PutPixel(5 + int (x), 17 + int (y), 51, 28, 0);
	gfx.PutPixel(6 + int (x), 17 + int (y), 51, 28, 0);
	gfx.PutPixel(7 + int (x), 17 + int (y), 43, 24, 0);
	gfx.PutPixel(8 + int (x), 17 + int (y), 51, 28, 0);
	gfx.PutPixel(9 + int (x), 17 + int (y), 51, 28, 0);
	gfx.PutPixel(10 + int (x), 17 + int (y), 51, 28, 0);
	gfx.PutPixel(11 + int (x), 17 + int (y), 51, 28, 0);
	gfx.PutPixel(12 + int (x), 17 + int (y), 51, 28, 0);
	gfx.PutPixel(13 + int (x), 17 + int (y), 40, 22, 0);
	gfx.PutPixel(14 + int (x), 17 + int (y), 51, 28, 0);
	gfx.PutPixel(15 + int (x), 17 + int (y), 138, 77, 0);
	gfx.PutPixel(16 + int (x), 17 + int (y), 138, 77, 0);
	gfx.PutPixel(17 + int (x), 17 + int (y), 138, 77, 0);
	gfx.PutPixel(18 + int (x), 17 + int (y), 123, 69, 0);
	gfx.PutPixel(19 + int (x), 17 + int (y), 51, 28, 0);
	gfx.PutPixel(0 + int (x), 18 + int (y), 51, 28, 0);
	gfx.PutPixel(1 + int (x), 18 + int (y), 138, 77, 0);
	gfx.PutPixel(2 + int (x), 18 + int (y), 138, 77, 0);
	gfx.PutPixel(3 + int (x), 18 + int (y), 138, 77, 0);
	gfx.PutPixel(4 + int (x), 18 + int (y), 138, 77, 0);
	gfx.PutPixel(5 + int (x), 18 + int (y), 51, 28, 0);
	gfx.PutPixel(6 + int (x), 18 + int (y), 51, 28, 0);
	gfx.PutPixel(7 + int (x), 18 + int (y), 51, 28, 0);
	gfx.PutPixel(8 + int (x), 18 + int (y), 51, 28, 0);
	gfx.PutPixel(9 + int (x), 18 + int (y), 51, 28, 0);
	gfx.PutPixel(10 + int (x), 18 + int (y), 51, 28, 0);
	gfx.PutPixel(11 + int (x), 18 + int (y), 51, 28, 0);
	gfx.PutPixel(12 + int (x), 18 + int (y), 51, 28, 0);
	gfx.PutPixel(13 + int (x), 18 + int (y), 51, 28, 0);
	gfx.PutPixel(14 + int (x), 18 + int (y), 51, 28, 0);
	gfx.PutPixel(15 + int (x), 18 + int (y), 138, 77, 0);
	gfx.PutPixel(16 + int (x), 18 + int (y), 138, 77, 0);
	gfx.PutPixel(17 + int (x), 18 + int (y), 138, 77, 0);
	gfx.PutPixel(18 + int (x), 18 + int (y), 123, 69, 0);
	gfx.PutPixel(19 + int (x), 18 + int (y), 51, 28, 0);
	gfx.PutPixel(20 + int (x), 18 + int (y), 51, 28, 0);
	gfx.PutPixel(21 + int (x), 18 + int (y), 51, 28, 0);
	gfx.PutPixel(22 + int (x), 18 + int (y), 51, 28, 0);
	gfx.PutPixel(0 + int (x), 19 + int (y), 51, 28, 0);
	gfx.PutPixel(1 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(2 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(3 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(4 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(5 + int (x), 19 + int (y), 51, 28, 0);
	gfx.PutPixel(6 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(7 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(8 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(9 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(10 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(11 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(12 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(13 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(14 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(15 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(16 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(17 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(18 + int (x), 19 + int (y), 123, 69, 0);
	gfx.PutPixel(19 + int (x), 19 + int (y), 51, 28, 0);
	gfx.PutPixel(20 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(21 + int (x), 19 + int (y), 138, 77, 0);
	gfx.PutPixel(22 + int (x), 19 + int (y), 65, 36, 0);
	gfx.PutPixel(23 + int (x), 19 + int (y), 51, 28, 0);
	gfx.PutPixel(1 + int (x), 20 + int (y), 51, 28, 0);
	gfx.PutPixel(2 + int (x), 20 + int (y), 51, 28, 0);
	gfx.PutPixel(3 + int (x), 20 + int (y), 51, 28, 0);
	gfx.PutPixel(4 + int (x), 20 + int (y), 51, 28, 0);
	gfx.PutPixel(5 + int (x), 20 + int (y), 51, 28, 0);
	gfx.PutPixel(6 + int (x), 20 + int (y), 138, 77, 0);
	gfx.PutPixel(7 + int (x), 20 + int (y), 138, 77, 0);
	gfx.PutPixel(8 + int (x), 20 + int (y), 138, 77, 0);
	gfx.PutPixel(9 + int (x), 20 + int (y), 138, 77, 0);
	gfx.PutPixel(10 + int (x), 20 + int (y), 138, 77, 0);
	gfx.PutPixel(11 + int (x), 20 + int (y), 138, 77, 0);
	gfx.PutPixel(12 + int (x), 20 + int (y), 138, 77, 0);
	gfx.PutPixel(13 + int (x), 20 + int (y), 138, 77, 0);
	gfx.PutPixel(14 + int (x), 20 + int (y), 138, 77, 0);
	gfx.PutPixel(15 + int (x), 20 + int (y), 138, 77, 0);
	gfx.PutPixel(16 + int (x), 20 + int (y), 138, 77, 0);
	gfx.PutPixel(17 + int (x), 20 + int (y), 138, 77, 0);
	gfx.PutPixel(18 + int (x), 20 + int (y), 123, 69, 0);
	gfx.PutPixel(19 + int (x), 20 + int (y), 51, 28, 0);
	gfx.PutPixel(20 + int (x), 20 + int (y), 138, 77, 0);
	gfx.PutPixel(21 + int (x), 20 + int (y), 138, 77, 0);
	gfx.PutPixel(22 + int (x), 20 + int (y), 65, 36, 0);
	gfx.PutPixel(23 + int (x), 20 + int (y), 51, 28, 0);
	gfx.PutPixel(0 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(1 + int (x), 21 + int (y), 138, 77, 0);
	gfx.PutPixel(2 + int (x), 21 + int (y), 138, 77, 0);
	gfx.PutPixel(3 + int (x), 21 + int (y), 138, 77, 0);
	gfx.PutPixel(4 + int (x), 21 + int (y), 138, 77, 0);
	gfx.PutPixel(5 + int (x), 21 + int (y), 138, 77, 0);
	gfx.PutPixel(6 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(7 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(8 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(9 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(10 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(11 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(12 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(13 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(14 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(15 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(16 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(17 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(18 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(20 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(21 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(22 + int (x), 21 + int (y), 51, 28, 0);
	gfx.PutPixel(0 + int (x), 22 + int (y), 51, 28, 0);
	gfx.PutPixel(1 + int (x), 22 + int (y), 65, 36, 0);
	gfx.PutPixel(2 + int (x), 22 + int (y), 65, 36, 0);
	gfx.PutPixel(3 + int (x), 22 + int (y), 65, 36, 0);
	gfx.PutPixel(4 + int (x), 22 + int (y), 65, 36, 0);
	gfx.PutPixel(5 + int (x), 22 + int (y), 65, 36, 0);
	gfx.PutPixel(6 + int (x), 22 + int (y), 51, 28, 0);
	gfx.PutPixel(1 + int (x), 23 + int (y), 51, 28, 0);
	gfx.PutPixel(2 + int (x), 23 + int (y), 51, 28, 0);
	gfx.PutPixel(3 + int (x), 23 + int (y), 51, 28, 0);
	gfx.PutPixel(4 + int (x), 23 + int (y), 51, 28, 0);
	gfx.PutPixel(5 + int (x), 23 + int (y), 51, 28, 0);
	gfx.PutPixel(6 + int (x), 23 + int (y), 51, 28, 0);
}

bool poo::Collision (Face& face)  
{
	const float right_face = face.getx() + face.width();
	const float bottom_face = face.gety() + face.height();
	const float right_poop = pos.x + width;
	const float bottom_poop = pos.y + height;

	return (face.getx() <= right_poop &&
		right_face >= pos.x &&
		face.gety() <= bottom_poop &&
		bottom_face >= pos.y);
}



void poo::Update1(const Vec2& pos_1, const Vec2& vel_1)
{
	pos = pos_1;
	vel = vel_1;
}


	
	//bool poo::over()
	//{
	//	bool alleaten = true;
	//	alleaten = alleaten && PoopIsEat();
	//	return alleaten;
	//}

	






