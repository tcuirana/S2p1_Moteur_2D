#pragma once

template <typename T>
class Node
{
	T first;

public :
	Node<T>* next;

	T GetData()
	{
		return first;
	}
	void GoForward()
	{

	}
	void GoBackward()
	{

	}
};

