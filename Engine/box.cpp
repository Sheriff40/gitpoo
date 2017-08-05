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
	const float right_face = face.getx() + face.width();
	const float bottom_face = face.gety() + face.height();
	const float right_box = x + dimension;
	const float left_box = x;
	const float bottom_box = y + dimension;
	const float top_box = y;
	return (face.getx() <= right_box &&
		right_face >= left_box &&
		face.gety() <= bottom_box &&
		bottom_face >= top_box);
}
		
box::box(float x_0, float y_0)
{
	x = x_0;
	y = y_0;
}

void box::changexy(float x_0, float y_0)
{
	x = x_0;
	y = y_0;
}


