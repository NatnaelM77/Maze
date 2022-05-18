#include "../inc/main.h"
#include "../inc/utils.h"
#include "../inc/structs.h"

APP app;

/**
 * init - initiate sdl window and renderer
 * Return: true if sdl window is create otherwise false
 */

bool init(void)
{
	bool isInit = true;
	int windowFlags = 0;
	int rendererFlags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		logError("SDL_INIT_VIDEO");
		isInit = false;
	}

	app.window = SDL_CreateWindow("Maze Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, windowFlags);

	if (app.window == NULL)
	{
		logError("SDL_CreateWindow");
		isInit = false;
	}

	app.renderer = SDL_CreateRenderer(app.window, -1, rendererFlags);

	if (app.renderer == NULL)
	{
		logError("SDL_CreateRenderer");
		isInit = false;
	}

	return (isInit);
}

/**
 * quit - quit sdl window and renderer
 */

void quit()
{
	SDL_DestroyRenderer(app.renderer);
	SDL_DestroyWindow(app.window);
}
