#include "enemy.h"

Enemy::Enemy(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    enemyRect.w = 40;
    enemyRect.h = 40;
    generate();
}

void Enemy::generate()
{
    int x = rand() % 460;
    int y = rand() % 460;
    enemyRect.x = x;
    enemyRect.y = y;
}

void Enemy::render()
{
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
    SDL_RenderFillRect(renderer, &enemyRect);
}