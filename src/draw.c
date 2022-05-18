#include "../inc/main.h"
#include "../inc/map.h"
#include "../inc/draw.h"
#include "../inc/structs.h"

APP app;
double angle = 0;
SDL_Rect playerRect = {4 * 15, 4 * 15, 15, 15};

/**
 * drawScene - draw texture on the screen
 */

void drawScene(void)
{
	clearScene();
	SDL_SetRenderDrawColor(app.renderer, 120, 120, 120, 0);
	drawMap();
	SDL_SetRenderDrawColor(app.renderer, 255, 0, 0, 0);
	SDL_RenderFillRect(app.renderer, &playerRect);
	SDL_RenderPresent(app.renderer);
	SDL_Delay(10);
}

/**
 * clearScene - clear screen
 */

void clearScene(void)
{
	SDL_SetRenderDrawColor(app.renderer, 255, 255, 255, 0);
	SDL_RenderClear(app.renderer);
}

/**
 * renderRays - draw rays
 */

void renderRays() {}
