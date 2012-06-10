#pragma once
#include "SDL.h"
#include "SDL_ttf.h"
#include "SDL_image.h"
#include "sprite.h"
#include <list>

using std::list;

class GameMap
{
private:
	list<sprite> sprites;
	vector<SDL_Surface*> images;
	int backgroundTile;

	//context?

public:
	GameMap();

	int init();

	void loadMap(int num);

	void display(SDL_Surface *screen);
};