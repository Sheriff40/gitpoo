#pragma once
#include "Graphics.h"
#include "Face.h"
#include "Colors.h"

class box
{
private:
	float x;
	float y;
	float dimension = 20.0f;
	bool empty = true;
	Color c = { 127,0,0 };
public:
	void composebox(Graphics &gfx)
	{
		gfx.DrawRectDim(int(x), int(y), int(dimension), int(dimension), c);
	}
	void changecolor();
	bool collision(Face& face);
	box(float x_0, float y_0);
	void changexy(float x_0, float y_0);
};