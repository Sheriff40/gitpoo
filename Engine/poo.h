#pragma once
#include "Graphics.h"
#include "Face.h"
class poo {
public:
	void Update();
	void DrawPoop(Graphics& gfx);
	bool Collision(Face& face) ;
	void Update1(int x_1, int y_1, int vx_1, int vy_1);
	
private:
	int x;
	int y;
	int vx;
	int vy;
	static constexpr int width = 24;
	static constexpr int height = 24;
	
};