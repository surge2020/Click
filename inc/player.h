#ifndef PLAYER
#define PLAYER

#include <SDL2/SDL.h>

class Player {
public:
    Player(SDL_Renderer* renderer);
    SDL_Rect playerRect;
    void setCoordinates(int x, int y);
    void setShoot(bool b);
    bool getShoot();
    void update();
    void render();
private:
    SDL_Renderer* renderer;  
    int xCoordinate;
    int yCoordinate;
    bool shoot;
    

};

#endif