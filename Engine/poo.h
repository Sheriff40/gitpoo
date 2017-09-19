#pragma once
#include "Graphics.h"
#include "Face.h"
#include "Vec2.h"
class poo {
public:
	void Update(float dt);
	void DrawPoop(Graphics& gfx);
	bool Collision(Face& face) ;
	void Update1(const Vec2& pos_1, const Vec2& vel_1);
	
private:
	Vec2 pos;
	Vec2 vel;
	static constexpr float width = 24.0f;
	static constexpr float height = 24.0f;
	
};