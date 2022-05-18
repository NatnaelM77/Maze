#include "../inc/main.h"
#include "../inc/map.h"
#include "../inc/draw.h"

double angle;
SDL_Event event;
bool isRunning = true;
SDL_Rect playerRect;

/**
 * input - sdl events
 */

void input(void)
{
	while (SDL_PollEvent(&event) != 0)
	{
		switch (event.type)
		{
			case SDL_QUIT:
				isRunning = false;
				break;
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym)
				{
					case SDLK_UP:
						playerRect.y -= 1;
						break;
					case SDLK_DOWN:
						playerRect.y += 1;
						break;
					case SDLK_LEFT:
						angle = 180;
						break;
					case SDLK_RIGHT:
						angle = 0;
						break;
				}
				break;
		}
	}
}
