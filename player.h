#pragma once
#include "SDL.h"
#include "sprite.h"
#include "inventory.h"


class Player
{
private:
	sprite *s;
	Inventory *inv;

public:
	Player();
	void display( SDL_Surface * screen );
};