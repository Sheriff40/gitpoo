#pragma once
#include "Graphics.h"
#include "Face.h"
class poo {
public:
	void Update();
	void DrawPoop(Graphics& gfx);
	bool Collision(Face& face) ;
	void Update1(float x_1, float y_1, float vx_1, float vy_1);
	
private:
	float x;
	float y;
	float vx;
	float vy;
	static constexpr float width = 24.0f;
	static constexpr float height = 24.0f;
	
};