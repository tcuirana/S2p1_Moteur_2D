#pragma once

class Vector2
{
protected :
	float pos_x;
	float pos_y;

public:
	Vector2(float x, float y);

	float GetX();
	float GetY();

	void SetX(float new_x);
	void SetY(float new_y);
};

