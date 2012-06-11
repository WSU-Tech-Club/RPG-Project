#pragma once
#include "sprite.h"

class Actor
{
private:
	int direction;

	//position:
	int x;
	int y;

public:
	Actor(); //Default Constructor

	display(SDL_Surface *screen);



};