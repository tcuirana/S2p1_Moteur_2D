#include "AMovable.h"

AMovable::AMovable(Vector2 direction, float speed): _direction(direction), _speed(speed) {}

void AMovable::SetDirection(Vector2 new_direction)
{
	_direction = new_direction;

	_direction = ;
}

void AMovable::SetSpeed(float new_speed)
{
	_speed = new_speed;
}