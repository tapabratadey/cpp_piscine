/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 01:09:34 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 01:09:37 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Player.Class.hpp"

Player::Player() { }
Player::~Player() { std::cout << "Player ended" << std::endl; }
Player::Player(Player const &copy) { *this = copy; }

// Player &Player::operator=(const Player &rhs)
// {
//     position = nullptr;
//     return (*this);
// }

Position *Player::getPosition(){ return position; }
void Player::movePlayer(int *x, std::string instr)
{
    if (instr == "right")
        *x += 1;
    else
        *x -= 1;
}

#if 0

Player::Player(int row, int col)
{
    if (row <= 10 && col <= 10)
    {
        std::cout << "Player Created" << std::endl;
        this->row = row;
        this->col = col;
    }
    else
        std::cout << "Row and Column has to be more than 20" << std::endl;
}

void  Player::placePlayer(int ***gameMap)
{
    (*gameMap)[this->row][this->col] = 2;   
    std::cout << std::endl;  
    std::cout << "Placing player: " << this->row << ", " <<  this->col << std::endl;
    std::cout << std::endl;  
}

void Player::movePlayer(Game &game, std::string instr)
{
    int **gameMap = game.getGameMap();
    if (instr == "left")
    {
        gameMap[this->row][this->col] = 0;
        this->col--;
        gameMap[this->row][this->col] = 2;
        std::cout << std::endl;  
        std::cout << "Placing player: " << this->row << ", " <<  this->col << std::endl;
        std::cout << std::endl;  
    }
    else
    {
        gameMap[this->row][this->col] = 0;
        this->col++;
        gameMap[this->row][this->col] = 2;
        std::cout << std::endl;  
        std::cout << "Placing player: " << this->row << ", " <<  this->col << std::endl;
        std::cout << std::endl;        
    }
}

int Player::getRow() {return row;}
int Player::getCol() {return col;}
#endif 