#ifndef PLAYER_H
#define PLAYER_H

#include "map.h"
#include "structs.h"

/**
 * 
 */

typedef struct player {
	int x;
	int y;
	int size;
	double speed;
	int moveSpeed;
	double angle;
	int moveAngle;
	double angleRotation;
	SDL_Color color;

} PLAYER;

extern PLAYER player;

/* draw player */
void drawPlayer();

/* update player */
void updatePlayer();

/* check collision */
bool checkCollision(int y, int x);

#endif /* PLAYER_H */
