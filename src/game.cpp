#include "game.h"
#include <iostream>

Game::Game()
{
    window =SDL_CreateWindow(
        "Cursor",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        500, 500, 0);
    renderer = SDL_CreateRenderer(window, -1, 0);
    running = true;
    SDL_ShowCursor(SDL_DISABLE);
    player = new Player(renderer);
    enemy = new Enemy(renderer);
    collision = new Collision(player, enemy);
}

bool Game::getRunning()
{
    return running;
}

void Game::input()
{
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_QUIT:
            running = false;
            break;
        case SDL_MOUSEMOTION:
            player->setCoordinates(
                event.motion.x,
                event.motion.y);
            break;
        case SDL_MOUSEBUTTONDOWN:
            player->setShoot(true);
            break;
        case SDL_MOUSEBUTTONUP:
            player->setShoot(false);
            break;
        default:
            break;
        }
    }
}

void Game::logic()
{
    collision->bulletEnemy();
}

void Game::update()
{
    player->update();
}

void Game::render()
{
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    enemy->render();
    player->render();
    SDL_RenderPresent(renderer);
}

void Game::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
}