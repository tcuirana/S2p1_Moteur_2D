#include "AMovable.h"
#include <cmath>

AMovable::AMovable(Vector2 direction, float speed): _direction(direction), _speed(speed) {}

void AMovable::SetDirection(Vector2 new_direction)
{
	float distanceX = (_direction.GetX() - new_direction.GetX()) * (_direction.GetX() - new_direction.GetX());
	float distanceY = (_direction.GetY() - new_direction.GetY()) * (_direction.GetY() - new_direction.GetY());
	float distance = sqrt(distanceX + distanceY);

	new_direction.SetX(new_direction.GetX() / distance);
	new_direction.SetY(new_direction.GetY() / distance);

	_direction = new_direction ;
}

void AMovable::SetSpeed(float new_speed)
{
	_speed = new_speed;
}