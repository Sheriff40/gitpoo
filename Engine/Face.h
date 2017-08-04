#pragma once
#include "Graphics.h"
#include "Keyboard.h"

class Face
{	
public:
	void Clamp();
	void DrawFace(Graphics &gfx);
	void update(Keyboard &kbd);
	int getx();
	int gety();
	static int width();
	static int height();
private:
	int x = 400;
	int y = 300;
	static constexpr int width1 = 20;
	static constexpr int height1 = 20;
	int speed = 2;
};