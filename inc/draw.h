#ifndef DRAW_H
#define DRAW_H

/* draw scene */
void drawScene(void);

/* clear scene */
void clearScene(void);

/* load assets */
void loadAssets(void);

/* load image */
SDL_Texture *loadImage(const char* path, SDL_Renderer* renderer);

/* render texture */
void renderTexture(SDL_Texture *texture, SDL_Renderer *renderer, SDL_Rect *srcRect, SDL_Rect destRect);

#endif /* DRAW_H */
