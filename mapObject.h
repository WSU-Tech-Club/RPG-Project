#pragma once
#include "sprite.h"
#include <list>

class GameMap
{
private:
	list<sprite> sprites;
	int backgroundTile;
};