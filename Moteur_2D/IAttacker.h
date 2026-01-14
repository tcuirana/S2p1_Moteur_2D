#pragma once

class Alive;

class IAttacker
{
public: 
	virtual float Attack(Alive* _target) = 0;
};

