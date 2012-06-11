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
	list<sprite*> sprites;
	vector<SDL_Surface*> images;
	int backgroundTile;

	//context?
	string mapInfo;
	int mapID;

public:
	GameMap();

	int init();

	void loadMap(int num);

	void display(SDL_Surface *screen);

	void blitSprite(sprite *s);
};