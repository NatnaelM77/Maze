#ifndef STRUCTS_H
#define STRUCTS_H

/* window width */
#define SCREEN_WIDTH 1000

/* window height */
#define SCREEN_HEIGHT 650

/* struct app */
typedef struct App
{
	SDL_Window *window;
	SDL_Renderer *renderer;
} APP;

/* app */
extern APP app;

#endif /* STRUCTS_H */
