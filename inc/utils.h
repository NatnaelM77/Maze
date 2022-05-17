#ifndef UTIL_H
#define UTIL_H

void LogError(const char* type);
TTF_Font *OpenFont(const char* path, int size);
void CloseFont(TTF_Font *Font);
void RenderTexture(SDL_Texture *Texture, int x, int y);
void DisplayText(TTF_Font *Font, const char *message, SDL_Color FontColor, int x, int y);

#endif /* UTIL_H */
