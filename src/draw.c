#include "../inc/map.h"
#include "../inc/draw.h"
#include "../inc/main.h"
#include "../inc/utils.h"

APP app;
char msg[100];
int speedX, speedY;

TTF_Font *Font;

SDL_Rect rect = {0, 0, 15, 15};
SDL_Rect player = {1, 1, 15, 15};
SDL_Color FontColor = {255, 255, 0, 0};

/**
 * updateScene - update the renderer context
 */

void updateScene()
{
	SDL_SetRenderDrawColor(app.renderer, 190, 190, 190, 0);
	SDL_RenderClear(app.renderer);
	SDL_SetRenderDrawColor(app.renderer, 255, 0, 0, 0);
	displayMap();
	SDL_RenderPresent(app.renderer);
}

/**
 * displayMap - display mini map
 */

void displayMap()
{
	int i, j;

	for (i = 0; i < 12; i++)
	{
		for (j = 0; j < 12; j++)
		{
			if (map[i][j] == 1)
			{
				rect.x = rect.w * j;
				rect.y = rect.h * i;
				SDL_RenderFillRect(app.renderer, &rect);
			}
		}
	}

	player.x = speedX * player.w;
	player.y = speedY * player.h;
	SDL_SetRenderDrawColor(app.renderer, 0, 255, 0, 0);
	checkCollision(player.x, player.y, 15);
	SDL_RenderFillRect(app.renderer, &player);
}

/**
 * checkCollision - simple collision detaction system
 */

void checkCollision(int x, int y, int size)
{
	
}
