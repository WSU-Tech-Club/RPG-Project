#pragma once
#include "item.h"
#include <list>

using std::list;

class Inventory
{
private:
	list<Item> items;

public:
	Inventory();

	bool Contains(Item i);

	void Add(Item i);

	void remove(Item i, int num=1);
};