#include "Alive.h"

Alive::Alive(float hpmax, float hp): _hpmax(hpmax), _hp(hp){}

float Alive::GetHpmax()
{
	return _hpmax;
}

float Alive::GetHp()
{
	return _hp;
}

void Alive::TakeDamage(float damage)
{
	_hp -= damage;
}