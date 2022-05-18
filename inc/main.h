#ifndef MAIN_H
#define MAIN_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

/* init sdl */
bool init(void);

/* events handler */
void input(void);

/* quit window */
void quit(void);

/* running state */
extern bool isRunning;

/* event */
extern SDL_Event event;

#endif /* MAIN_H */
