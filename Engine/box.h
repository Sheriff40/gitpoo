#pragma once
#include "Graphics.h"
#include "Face.h"
#include "Colors.h"
#include "Vec2.h"

class box
{
private:
	Vec2 pos;
	float dimension = 20.0f;
	bool empty = true;
	Color c = { 127,0,0 };
public:
	box(Vec2& pos_in);
	void composebox(Graphics &gfx)
	{
		gfx.DrawRectDim(int(pos.x),int(pos.y), int(dimension), int(dimension), c);
	}
	void changecolor();
	bool collision(Face& face);
	void changexy(Vec2& pos_in2);
};