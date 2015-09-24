#include "chess.h"
int MainLoop()
int main()
{
  SDL_Window *mainWindow;
  SDL_Surface *mainSurface;
  SDL_Renderer *mainRenderer;
  if(SDL_Init(SDL_INIT_EVERYTHING) != 0)
      {
	printf("SDL_Init failed%s\n", SDL_GetError());
	return;
      }
    if((mainWindow = SDL_CreateWindow("WarpChess", 0, 0, 512, 512, 0)) == NULL)
    {
      printf("SDL_CreateWindow failed %s\n", SDL_GetError());
      return;
    }
  mainSurface = SDL_GetWindowSurface(mainWindow);
  if((mainRenderer = SDL_CreateRenderer(mainWindow, -1, SDL_RENDERER_ACCELERATED)) == NULL)
    {
      printf("SDL_CreateRenderer failed %s\n", SDL_GetError());
      return;
    }
  
}


