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
	const float right_box = pos.x + dimension;
	const float left_box = pos.x;
	const float bottom_box = pos.y + dimension;
	const float top_box = pos.y;
	return (face.getx() <= right_box &&
		right_face >= left_box &&
		face.gety() <= bottom_box &&
		bottom_face >= top_box);
}
		
box::box(Vec2& pos_in)
{
	pos = pos_in;
}

void box::changexy(Vec2& pos_in2)
{
	pos = pos_in2;
}


