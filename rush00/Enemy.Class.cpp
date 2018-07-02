/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 01:07:55 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 01:07:59 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Enemy.Class.hpp"

Enemy::Enemy() { }

Enemy::~Enemy() 
{
    std::cout << "Enemy ended" << std::endl;
}

Enemy::Enemy(int row, int col)
{
    if (row <= 10 && col <= 10)
    {
        std::cout << "Enemy Created" << std::endl;
        this->row = row;
        this->col = col;
    }
    else
        std::cout << "Row and Column has to be more than 20" << std::endl;
}

Enemy::Enemy(Enemy const &copy) { *this = copy; }

Enemy &Enemy::operator=(const Enemy &rhs)
{
    this->row = rhs.row;
    this->col = rhs.col;
    return (*this);
}

void  Enemy::placeEnemy(int ***gameMap)
{
    (*gameMap)[this->row][this->col] = 3;   
    std::cout << std::endl;  
    std::cout << "Placing Enemy: " << this->row << ", " <<  this->col << std::endl;
    std::cout << std::endl;  
}

void Enemy::moveEnemy(Game &game)
{
    int **gameMap = game.getGameMap();
    gameMap[this->row][this->col] = 0;
    this->row++;
    gameMap[this->row][this->col] = 3;
    std::cout << std::endl;  
    std::cout << "Placing player: " << this->row << ", " <<  this->col << std::endl;
    std::cout << std::endl;  
}