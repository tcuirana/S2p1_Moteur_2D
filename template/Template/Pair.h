#pragma once

template <typename T, typename U>
class Pair
{
protected:
	T first;
	U second;

	int b;

public :
	void GetT() 
	{
		return first;
	}
	void GetU() 
	{
		return second;
	}
};

