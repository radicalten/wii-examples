#include <stdio.h>
#include <stdlib.h>
#include <gccore.h>
#include <wiiuse/wpad.h>

#include <SDL2/SDL.h>
#include <SDL3/SDL_main.h>

static void *xfb = NULL;
static GXRModeObj *rmode = NULL;

//---------------------------------------------------------------------------------
int main( int argc, char* argv[] ){
//---------------------------------------------------------------------------------       
	const int WIDTH = 640;
        const int HEIGHT = 480;
        SDL_Window* window = NULL;
        SDL_Renderer* renderer = NULL;

        SDL_Init(SDL_INIT_VIDEO);
        window = SDL_CreateWindow("Hello SDL", WIDTH, HEIGHT, 0);
        renderer = SDL_CreateRenderer(window, NULL, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 0;
    }
