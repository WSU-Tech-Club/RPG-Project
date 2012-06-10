#include "g_engine.h"


int g_engine::init()
{
	this->self = new Player();
	this->map = new GameMap();

	if(SDL_Init( SDL_INIT_EVERYTHING ) == -1)
	{
		cout << "SDL Failed to initialize...\n";
		return -1;
	}

	if( TTF_Init() == -1 )
	{
		return -1;   
	}

	//Sets window caption
	SDL_WM_SetCaption( "Eight Minions", NULL );
	//create screen, params are width in pixels, height in pixels, bpp, and flags
	screen = SDL_SetVideoMode(SCREEN_WIDTH,SCREEN_HEIGHT,32,SDL_DOUBLEBUF | SDL_HWSURFACE); //end flag was just SDL_SWSURFACE


	//INITIATE SDL
}

int g_engine::run()
{
	init();

	running = true;
	while(running)
	{
		//handle input
		//display images

		//regulate FPS

		//FOR TEST
		running = false;
		//END TEST
	}
	return 0;
}

void g_engine::handleInput()
{
	while( SDL_PollEvent( &event ) )
	{
		if(event.type == SDL_QUIT)
		{
			running = 0;
		}


	}
}

void g_engine::display()
{
	map->display(screen);
	self->display(screen);

}
