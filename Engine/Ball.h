#pragma once
#include "SpriteCodex.h"
#include "Vec2.h"
#include "Graphics.h"
#include "Rectangle.h"
#include "SpriteCodex.h"
#include "Wall.h"

class Ball
{
public:
	Ball() = default;
	Ball( const Vec2& pos, const Vec2& vel );
	Ball( Color c );
	void Draw( Graphics& gfx );
	void DrawRectSw( Graphics& gfx, Color c );
	void Ball::Update( float dt );
	bool isCollided( Wall& wl );	
	void ChangeX();
	void ChangeY();
	void Rebound( Wall& wl );
public:
	Vec2 pos;
	Vec2 vel;
	Rect r;
	bool chng_inX = false;
	bool chng_inY = false;	
	float radius = 7.0f;
};