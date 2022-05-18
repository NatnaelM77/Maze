#ifndef MAP_H
#define MAP_H

/* size */
#define SIZE 15

/* player angle */
extern double angle;

/* player */
extern SDL_Rect playerRect;

/* mini map */
void drawMap(void);

/* check collision */
void checkCollision(void);

#endif /* MAP_H */
