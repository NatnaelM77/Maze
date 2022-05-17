#include "../inc/init.h"

/**
 * init - init sdl window & renderer
 * 
 * Return: return true if window is created otherwise false
 */

APP app;

bool init()
{
	bool isInit = true;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		LogError("SDL_INIT_VIDEO");
		isInit = false;
	}

	app.window = SDL_CreateWindow("Maze", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
	if (app.window == NULL)
	{
		LogError("SDL_CreateWindow");
		isInit = false;
	}

	app.renderer = SDL_CreateRenderer(app.window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (app.renderer == NULL)
	{
		LogError("SDL_CreateRenderer");
		isInit = false;
	}

	return (isInit);
}

/**
 * quit - quit window 
 */

void quit()
{
	SDL_DestroyRenderer(app.renderer);
	SDL_DestroyWindow(app.window);
}
