#pragma once
#include "Graphics.h"
#include "Vec2.h"

class score {
private:
	Vec2 pos = Vec2(10.0f, 10.0f);

	int width = 5;
	int height= 10;
public:
	void DrawScore(Graphics &gfx,int score1);
};