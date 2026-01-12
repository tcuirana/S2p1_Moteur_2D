#pragma once
#include "Vector2.h"

class AMovable
{
protected :
	Vector2 _direction;
	float _speed;

public :
	AMovable(Vector2 direction, float speed);

	virtual void SetDirection(Vector2 new_direction);
	virtual void SetSpeed(float new_speed);
	virtual void Move() = 0;
};

