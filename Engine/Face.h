#pragma once
#include "Graphics.h"
#include "Keyboard.h"
#include "Vec2.h"

class Face
{	
public:
	void Clamp();
	void DrawFace(Graphics &gfx);
	void update(Keyboard &kbd,float dt);
	float getx();
	float gety();
	static float width();
	static float height();
private:
	Vec2 pos = Vec2(300.0f,400.0f);
	static constexpr float width1 = 20.0f;
	static constexpr float height1 = 20.0f;
	float speed = 2.0f * 60.0f;
};