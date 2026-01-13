#pragma once

class Alive
{
protected :
	float _hpmax;
	float _hp;

public :
	Alive(float hpmax, float hp);

	virtual float GetHpmax();
	virtual float GetHp();
	virtual void TakeDamage(float damage);
};

