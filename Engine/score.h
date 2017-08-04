#pragma once
#include "Graphics.h"

class score {
private:
	int x = 10;
	int y = 10;
	int width = 5;
	int height= 10;
public:
	void DrawScore(Graphics &gfx,int score1);
};