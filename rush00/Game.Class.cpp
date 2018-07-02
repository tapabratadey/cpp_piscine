/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 01:08:11 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 01:08:13 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Game.Class.hpp"

Game::Game() { }

Game::~Game() 
{
    std::cout << "Game ended" << std::endl;
    std::cout << std::endl;
}

Game::Game() { }
Game::Game(Game const &copy) { *this = copy; }

Game &Game::operator=(const Game &rhs)
{
    this->player = nullptr;
}

Player *Game::getPlayer(){ return player; }
void *Game::getEnemies() { return enemies; }
void *Game::getBullets() {return bullets; }



#if 0
Game::Game(int row, int col)
{
    if (row <= 10 && col <= 10)
    {
        std::cout << std::endl;
        std::cout << "Game Created" << std::endl;
        this->score = 0;
        this->row = row;
        this->col = col;
        this->lives = 5;
    }
    else
        std::cout << "Row and Column has to be more than 20" << std::endl;
}
#endif

#if 0
Game &Game::operator=(const Game &rhs)
{
    this->score = rhs.score;
    this->row = rhs.row;
    this->col = rhs.col;
    this->lives = rhs.lives;
    return (*this);
}
void Game::initGameMap()
{
    gameMap = new int* [row];
    for(int i = 0; i < row; i++)
        gameMap[i] = new int[col];
    
    for(int j = 0; j < row; j++)
    {
        for(int k = 0; k < col; k++)
        {
            gameMap[j][k] = 0;
            // std::cout << gameMap[j][k] << " ";
        }
        // std::cout << std::endl;
    }
}

void Game::gameStatus()
{
    if (lives <= 0)
        std::cout << "Player dead" << std::endl;
}
#endif


#if 0
// Entity *Game::getEntity() const { return entity; }
// Player *Game::getPlayer() const { return player; }
void Game::placeEntity(Entity &entity)
{  
    entity.placeEntity(&gameMap);
    for(int j = 0; j < row; j++)
    {
        for(int k = 0; k < col; k++)
        {
            // gameMap[j][k] = 1;
            std::cout << gameMap[j][k] << " ";
        }
        std::cout << std::endl;
    }
}
#endif
//place

// void Game::place(Player &player) { player.placePlayer(&gameMap); }
// void Game::place(Enemy &enemy){ enemy.placeEnemy(&gameMap); }
// void Game::placeVampire(Vampire &vampire){ vampire.placeVampire(&gameMap); }
// void Game::placeDragons(Dragons &dragons){ dragons.placeDragons(&gameMap); }
// void Game::placeTheElder(TheElder &theElder){ theElder.placeTheElder(&gameMap); }
// void Game::placeBullets(Bullets &bullets) { bullets.placeBullets(&gameMap); }

#if 0
void Game::print()
{
    for(int j = 0; j < row; j++)
    {
        for(int k = 0; k < col; k++)
            std::cout << gameMap[j][k] << " ";
        std::cout << std::endl;
    }
}
int**     Game::getGameMap() { return gameMap; }
#endif