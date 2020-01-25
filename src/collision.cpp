#include "collision.h"

Collision::Collision(Player* player, Enemy* enemy)
{
    this->player = player;
    this->enemy = enemy;
}

void Collision::bulletEnemy()
{
    if (player->getShoot() && 
        SDL_HasIntersection(
            &player->playerRect,
            &enemy->enemyRect)) {
        enemy->generate();
    }
}