#include "../inc/utils.h"

/**
 * logError - log error to the console
 * @type: error type
 */

void logError(const char* type)
{
	printf("%s Error: %s\n", type, SDL_GetError());
}

/**
 * radToDeg - convert radian to degree
 * @rad: radian value
 * 
 * Return: return degree
 */

int radToDeg(double rad)
{
	return (rad * 180) / M_PI;
}
