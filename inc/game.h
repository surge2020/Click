#ifndef GAME
#define GAME

#include <SDL2/SDL.h>
#include "player.h"
#include "enemy.h"
#include "collision.h"

class Game {
public:
    Game();
    bool getRunning();
    void input();
    void logic();
    void update();
    void render();
    void clean();
private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool running;
    Player* player;
    Enemy* enemy;
    Collision* collision;
};

#endif