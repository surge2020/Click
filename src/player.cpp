#include "player.h"

Player::Player(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    playerRect.w = 20;
    playerRect.h = 20;
    shoot = false;
}

void Player::setCoordinates(int x, int y)
{
    xCoordinate = x;
    yCoordinate = y;
}

void Player::setShoot(bool b)
{
    shoot = b;
}

bool Player::getShoot()
{
    return shoot;
}

void Player::update()
{
    playerRect.x = xCoordinate;
    playerRect.y = yCoordinate;
}

void Player::render()
{
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &playerRect);
}