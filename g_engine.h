#pragma once
#include <vector>
#include "mapObject.h"

#define SCREEN_HEIGHT 800
#define SCREEN_WIDTH 1000

using std::vector;

class g_engine
{
private:
	GameMap *map;
	Player *self;

	SDL_Surface *screen;

	SDL_Event e;

	bool running;


public:

	int init();

	int run();

	void display();

	void handleInput();

};