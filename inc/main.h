#ifndef MAIN_H
#define MAIN_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>

#define SCREEN_WIDTH 1100
#define SCREEN_HEIGHT 650

/**
 * 
 */

typedef struct App
{
	SDL_Window* window;
	SDL_Renderer* renderer;
} APP;

void input();

extern APP app;
extern TTF_Font *Font;
extern bool isRunning;
extern SDL_Event event;
extern int speedX, speedY;

#endif /* MAIN_H */
