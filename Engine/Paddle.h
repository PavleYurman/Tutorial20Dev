#pragma once
#include "Graphics.h"
#include "Keyboard.h"
#include "Ball.h"
#include "Wall.h"

class Paddle
{
public:
	Paddle(const Vec2& upperLeft, float width, float hight, Color c_in);
	void Draw(Graphics& gfx);
	void Move(const Keyboard& kbd, float dt, const Wall& wl);
	bool Colision( const Wall& wl );
public:
	Rect r;
	Rect rect_wh;
	Color c;
	float speed = 400.0f;
};