#include "../inc/main.h"
#include "../inc/structs.h"
#include "../inc/map.h"

/* app */
APP app;

/* map rect */
SDL_Rect map_rect;

/* map color */
SDL_Color map_color = {16, 16, 16, 0};

/* map */
int map[10][10] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
    {1, 0, 0, 1, 1, 1, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

/**
 * drawMap - draw 2d map
 */

void drawMap(void)
{
	int i, j;

	map_rect.w = SIZE;
	map_rect.h = SIZE;

	SDL_SetRenderDrawColor(app.renderer, map_color.r, map_color.g, map_color.b, map_color.a);

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (map[i][j] == 1)
			{
				map_rect.x = j * SIZE;
				map_rect.y = i * SIZE;
				SDL_RenderFillRect(app.renderer, &map_rect);
			}
		}
	}
}
