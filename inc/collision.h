#ifndef COLLISION
#define COLLISION

#include <SDL2/SDL.h>
#include "player.h"
#include "enemy.h"

class Collision {
public:
    Collision(Player* player, Enemy* enemy);
    void bulletEnemy();
private:
    Player* player;
    Enemy* enemy;
};

#endif