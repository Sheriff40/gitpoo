#pragma once
#include "Graphics.h"
#include "Keyboard.h"

class Face
{	
public:
	void Clamp();
	void DrawFace(Graphics &gfx);
	void update(Keyboard &kbd);
	float getx();
	float gety();
	static float width();
	static float height();
private:
	float x = 400.0f;
	float y = 300.0f;
	static constexpr float width1 = 20.0f;
	static constexpr float height1 = 20.0f;
	int speed = 2;
};