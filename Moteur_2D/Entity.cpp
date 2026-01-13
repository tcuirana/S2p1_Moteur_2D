#include "Entity.h"

Entity::Entity(Vector2 pos): _position(pos) {}

Vector2 Entity::GetPosition()
{
	return _position;
}

void Entity::SetPosition(Vector2 new_position)
{
	_position = new_position;
}