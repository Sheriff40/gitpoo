#pragma once
#include "Graphics.h"
#include "Face.h"
#include "Colors.h"

class box
{
private:
	int x;
	int y;
	int dimension = 20;
	bool empty = true;
	Color c = { 127,0,0 };
public:
	void composebox(Graphics &gfx)
	{
		gfx.DrawRectDim(x, y, dimension, dimension, c);
	}
	void changecolor();
	bool collision(Face& face);
	box(int x_0, int y_0);
	void changexy(int x_0, int y_0);
};