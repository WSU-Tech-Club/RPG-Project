#pragma once

#include "item.h"

class Consumable : public Item
{
private:
	int uses;
	int type; //maybe use enum for type?
public:
	Consumable();

//My thoughts are that the consumable will have a 'Use' method that can be overloaded for different types of items.
//for example, an item that would heal you would accept a pointer to a player object
	
};