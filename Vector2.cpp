#include "Vector2.h"

Vector2::Vector2(float x, float y) : pos_x(x), pos_y(y) {}

float Vector2::GetX()
{
	return pos_x;
}

float Vector2::GetY()
{
	return pos_y;
}

void Vector2::SetX(float new_x)
{
	pos_x = new_x;
}

void Vector2::SetY(float new_y)
{
	pos_y = new_y;
}
