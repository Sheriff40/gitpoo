#include "box.h"
#include "Graphics.h"

void box::changecolor()
{

	if (empty)
	{
		if (c.GetR() >= 225)
		{
			empty = false;
		}
		else
		{
			c = Color(c.GetR()+2, c.GetG()+4, c.GetB()+4);
		}
	}
	else
	{
		if (c.GetR() <= 127)
		{
			empty = true;
		}
	
		else
		{
			c = Color(c.GetR() - 2, c.GetG() - 4, c.GetB() - 4);
		}
	}

} 

bool box::collision(Face & face)
{
	const int right_face = face.getx() + face.width();
	const int bottom_face = face.gety() + face.height();
	const int right_box = x + dimension;
	const int left_box = x;
	const int bottom_box = y + dimension;
	const int top_box = y;
	return (face.getx() <= right_box &&
		right_face >= left_box &&
		face.gety() <= bottom_box &&
		bottom_face >= top_box);
}
		
box::box(int x_0, int y_0)
{
	x = x_0;
	y = y_0;
}

void box::changexy(int x_0, int y_0)
{
	x = x_0;
	y = y_0;
}


