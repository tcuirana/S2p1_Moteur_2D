#pragma once
#include "Vector2.h"

class Entity
{
protected :
	Vector2 _position;

public :
	Entity(Vector2 pos);

	virtual Vector2 GetPosition();
	virtual void SetPosition(Vector2 new_position);
};

