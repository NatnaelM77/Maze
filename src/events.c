#include "../inc/main.h"

SDL_Event event;
bool isRunning = true;
int speedX = 1, speedY = 1;

void input()
{
	while (SDL_PollEvent(&event))
	{
		if (event.type == SDL_QUIT)
			isRunning = false;

		if (event.type == SDL_KEYDOWN)
		{
			switch (SDL_KEYDOWN)
			{
				case SDLK_UP:
					printf("KEY UP\n");
					speedY += -1;
					break;
				case SDLK_DOWN:
					speedY += 1;
					break;
				case SDLK_LEFT:
					speedX += -1;
					break;
				case SDLK_RIGHT:
					speedX += 1;
					break;
			}
		}
	}
}
