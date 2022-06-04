#ifndef DRAW_H
#define DRAW_H

/**
 * 
 */

typedef struct point {
	int x1;
	int y1;
	int x2;
	int y2;
	SDL_Color color;
} POINT;

/* draw scene */
void drawScene(void);

/* clear scene */
void clearScene(void);

/* draw line */
void drawLine(POINT p);

/* load assets */
void loadAssets(void);

/* draw circle */
void drawCircle(SDL_Renderer* r, int x0, int y0, int radiusX, int radiusY);

/* load image */
SDL_Texture *loadImage(const char* path, SDL_Renderer* renderer);

/* render texture */
void renderTexture(SDL_Texture *texture, SDL_Renderer *renderer, SDL_Rect *srcRect, SDL_Rect destRect);

#endif /* DRAW_H */
