#include "../inc/init.h"
#include "../inc/draw.h"
#include "../inc/main.h"
#include "../inc/utils.h"

/**
 * main - Entry point
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[] __attribute__((unused)))
{
	if (!init())
		exit(1);

	atexit(quit);

	while (isRunning)
	{
		while (SDL_PollEvent(&event) != 0)
		{
			if (event.type == SDL_QUIT)
				isRunning = false;

			if (event.type == SDL_KEYDOWN)
			{
				switch (event.key.keysym.sym)
				{
					case SDLK_UP:
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
		updateScene();
		SDL_Delay(50);
	}

	return (0);
}
