#include <iostream>
#include "Entity.h"

int main()
{
	Entity e(Vector2(2, 3));	//mieux que d'utilisé un new car détruit à la fin du scope
	e.GetPosition().GetY();
	return 0;
}