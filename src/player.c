#include "../inc/main.h"
#include "../inc/draw.h"
#include "../inc/player.h"

/* app */
APP app;

/* map */
int map[10][10];

/* player */
PLAYER player = {
	2, /* player x */
	2, /* player y */
	5, /* player size */
	0.5, /* player speed */
	0, /* player move speed */
	M_PI / 2, /* player angle */
	0, /* player move angle */
	M_PI / 1, /* player rotation */
	{255, 0, 0, 0} /* player color */
};

POINT dir;

SDL_Rect p = {2, 2, 8, 8};

SDL_Color dirCol = {0, 0, 0, 0};

int x, y;


/**
 * drawPlayer
 */

void drawPlayer() {
	updatePlayer();
	SDL_SetRenderDrawColor(app.renderer, 255, 0, 0, 0);
	x = player.x * SIZE;
	y = player.y * SIZE;
	drawCircle(app.renderer, x, y, player.size, player.size);
	dir.x1 = x + 2;
	dir.y1 = y;
	dir.x2 = x + cos(player.angle) * 15;
	dir.y2 = y + sin(player.angle) * 15;
	drawLine(dir);
}

/**
 * updatePlayer
 */

void updatePlayer() {
	double x, y, step;

	step = player.speed * player.moveSpeed;
	player.angle += player.moveAngle * player.angleRotation;

	y = player.y + sin(player.angle) * step;
	x = player.x + cos(player.angle) * step;

	if (!checkCollision(y, x)) {
		player.y = y;
		player.x = x;
	}
}

/**
 * checkCollision
 * @y:
 * @x:
 * 
 * Return: 
 */

bool checkCollision(int y, int x) {
	bool isWall = false;

	/* printf("y: %d, x: %d\n", y, x); */

	if (map[y][x] != 0)
		isWall = true;

	return (isWall);
}
