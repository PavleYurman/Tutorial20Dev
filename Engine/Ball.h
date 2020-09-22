#pragma once
#include "SpriteCodex.h"
#include "Vec2.h"
#include "Graphics.h"
#include "Rectangle.h"
#include "SpriteCodex.h"

class Ball
{
public:
	Ball(Color c);
	void Draw(Graphics& gfx);
	void DrawBorder(Graphics& gfx, Color c);
public:
	Vec2 pos;
	Vec2 vel = Vec2(60.0f, 60.0f);
	Rect r;
	float radius = 7.0f;
};