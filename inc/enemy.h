#ifndef ENEMY
#define ENEMY

#include <SDL2/SDL.h>

class Enemy {
public:
    Enemy(SDL_Renderer* renderer);
    SDL_Rect enemyRect;
    void generate();
    void render();
private:
    SDL_Renderer* renderer;
};

#endif