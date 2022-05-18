#include "../inc/main.h"
#include "../inc/draw.h"

bool isRunning;

/**
 * main - Game Loop
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[] __attribute__((unused)))
{
	if (!init() != 0)
		exit(1);

	atexit(quit);

	while (isRunning)
	{
		input();
		drawScene();
		SDL_Delay(10);
	}

	return (0);
}
