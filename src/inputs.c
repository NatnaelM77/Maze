#include "../inc/main.h"
#include "../inc/map.h"
#include "../inc/draw.h"
#include "../inc/player.h"

PLAYER player;
SDL_Event event;
bool isRunning = true;

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
						player.moveSpeed = -1;
						break;
					case SDLK_DOWN:
						player.moveSpeed = 1;
						break;
					case SDLK_LEFT:
						player.moveAngle = -1;
						break;
					case SDLK_RIGHT:
						player.moveAngle = 1;
						break;
				}
				break;

			case SDL_KEYUP:
				switch (event.key.keysym.sym)
				{
					case SDLK_UP:
						player.moveSpeed = 0;
						break;
					case SDLK_DOWN:
						player.moveSpeed = 0;
						break;
					case SDLK_LEFT:
						player.moveAngle = 0;
						break;
					case SDLK_RIGHT:
						player.moveAngle = 0;
						break;
				}
				break;
		}
	}
}
