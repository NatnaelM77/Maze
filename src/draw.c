#include "../inc/main.h"
#include "../inc/map.h"
#include "../inc/draw.h"
#include "../inc/structs.h"
#include "../inc/player.h"

/* app */
APP app;

/**
 * drawScene - draw texture on the screen
 */

void drawScene(void)
{
	clearScene();
	SDL_SetRenderDrawColor(app.renderer, 120, 120, 120, 0);
	drawMap();
	drawPlayer();
	SDL_RenderPresent(app.renderer);
	SDL_Delay(10);
}

/**
 * clearScene - clear screen
 */

void clearScene(void)
{
	SDL_SetRenderDrawColor(app.renderer, 255, 255, 255, 0);
	SDL_RenderClear(app.renderer);
}

/**
 * renderRays - draw rays
 */

void renderRays() {}

/**
 * drawLine - 
 * @p:
 *
 */

void drawLine(POINT p) {
	SDL_SetRenderDrawColor(app.renderer, p.color.r, p.color.g,
	p.color.b, p.color.a);
	SDL_RenderDrawLine(app.renderer, p.x1, p.y1, p.x2, p.y2);
}


/**
 * drawCircle
 */

void drawCircle(SDL_Renderer* r, int x0, int y0, int radiusX, int radiusY)
{
    float pi  = 3.14159265358979323846264338327950288419716939937510;
    float pih = pi / 2.0;

    /* draw  28 lines with   4x4  circle with precision of 150 0ms */
    /* draw 132 lines with  25x14 circle with precision of 150 0ms */
    /* draw 152 lines with 100x50 circle with precision of 150 3ms */

    /* precision value; value of 1 will draw a diamond, 27 makes pretty smooth circles. */
    const int prec = 27;
    float theta = 0; /* angle that will be increased each loo */

    /* starting point */

    int x  = (float)radiusX * cos(theta);
    int y  = (float)radiusY * sin(theta);
    int x1 = x;
    int y1 = y;

    /* repeat until theta >= 90 */
    float step = pih/(float)prec;
    for(theta=step;  theta <= pih;  theta+=step)
    {
        /* get new point location */
        x1 = (float)radiusX * cosf(theta) + 0.5;
        y1 = (float)radiusY * sinf(theta) + 0.5;

        /* draw line from previous point to new point, ONLY if point incremented */
        if( (x != x1) || (y != y1) )
        {
            SDL_RenderDrawLine(r, x0 + x, y0 - y,    x0 + x1, y0 - y1 ); /* quadrant TR */
            SDL_RenderDrawLine(r, x0 - x, y0 - y,    x0 - x1, y0 - y1 ); /* quadrant TL */
            SDL_RenderDrawLine(r, x0 - x, y0 + y,    x0 - x1, y0 + y1 ); /* quadrant BL */
            SDL_RenderDrawLine(r, x0 + x, y0 + y,    x0 + x1, y0 + y1 ); /* quadrant BR */
        }

        /* save previous points */
        x = x1;
        y = y1;
    }
    
    /* arc did not finish because of rounding, so finish the arc */
    if(x!=0)
    {
        x=0;
        SDL_RenderDrawLine(r, x0 + x, y0 - y,    x0 + x1, y0 - y1 ); /* quadrant TR */
        SDL_RenderDrawLine(r, x0 - x, y0 - y,    x0 - x1, y0 - y1 ); /* quadrant TL */
        SDL_RenderDrawLine(r, x0 - x, y0 + y,    x0 - x1, y0 + y1 ); /* quadrant BL */
        SDL_RenderDrawLine(r, x0 + x, y0 + y,    x0 + x1, y0 + y1 ); /* quadrant BR */
    }
}
