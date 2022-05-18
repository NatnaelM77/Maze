#include "../inc/main.h"
#include "../inc/draw.h"
#include "../inc/utils.h"
#include "../inc/structs.h"

APP app;

/**
 * loadImage - load image
 * @path: path to the file
 * @renderer: renderer
 *
 * Return: SDL_Texture
 */

SDL_Texture *loadImage(const char *path, SDL_Renderer *renderer)
{
	SDL_Texture *imageTexture = IMG_LoadTexture(renderer, path);
	if (imageTexture == NULL)
	{
		logError("IMG_LoadTexture");
		return (NULL);
	}

	return (imageTexture);
}

/**
 * renderTexture - render texture
 * @texture: path to the file
 * @renderer: renderer
 * @srcRect: src rect
 * @destRect: dest rect
 */

void renderTexture(SDL_Texture *texture, SDL_Renderer *renderer, SDL_Rect *srcRect, SDL_Rect destRect)
{
	SDL_Rect dest;

	if (destRect.w == 0 || destRect.h == 0)
	{
		dest.x = destRect.x;
		dest.y = destRect.y;
		SDL_QueryTexture(texture, NULL, NULL, &dest.w, &dest.h);
		SDL_RenderCopy(renderer, texture, srcRect, &dest);
	}
	else
	{
		SDL_RenderCopy(renderer, texture, srcRect, &destRect);
	}
}
