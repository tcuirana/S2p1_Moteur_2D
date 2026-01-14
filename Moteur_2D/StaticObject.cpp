#include <iostream>
#include "StaticObject.h"

StaticObject::StaticObject(Entity entity)
{
	std::cout << "Static Object just created at x = " << entity.GetPosition().GetX() << " and y = " << entity.GetPosition().GetY() << std::endl;
}
