#include "../inc/main.h"
#include "../inc/utils.h"

/**
 * LogError - log error
 * @type: error type
 */

void LogError(const char* type)
{
	printf("%s ERROR: %s\n", type, SDL_GetError());
}

/* 
TTF_Font *OpenFont(const char *path, int size)
{
	TTF_Font *Font = TTF_OpenFont(path, size);
	if (!Font)
		LogError("TTF_OpenFont");
	return (Font);
}

void CloseFont(TTF_Font *Font)
{
	TTF_CloseFont(Font);
	TTF_Quit();
}

void DisplayText(TTF_Font *Font, const char *message, SDL_Color FontColor, int x, int y)
{
	SDL_Surface *FontSurface = TTF_RenderText_Solid(Font, message, FontColor);
	if (!FontSurface)
		LogError("TTF_RenderText_Solid");
	SDL_Texture *FontTexture = SDL_CreateTextureFromSurface(app.renderer, FontSurface);
	if (!FontTexture)
		LogError("TTF_RenderText_Solid");
	RenderTexture(FontTexture, x, y);
}

void RenderTexture(SDL_Texture *Texture, int x, int y)
{
	SDL_Rect *DestRect;
	DestRect->x = x;
	DestRect->y = y;
	SDL_QueryTexture(Texture, NULL, NULL, &DestRect->w, &DestRect->w);
	SDL_RenderCopy(app.renderer, Texture, NULL, DestRect);
} */
