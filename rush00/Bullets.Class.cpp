/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullets.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 05:22:37 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 05:22:38 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bullets.Class.hpp"

Bullets::Bullets() { }

Bullets::~Bullets() 
{
    std::cout << "Bullets ended" << std::endl;
}

Bullets::Bullets(int row, int col)
{
    if (row <= 10 && col <= 10)
    {
        std::cout << "Bullets Created" << std::endl;
        this->row = row;
        this->col = col;
    }
    else
        std::cout << "Row and Column has to be more than 20" << std::endl;
}

Bullets::Bullets(Bullets const &copy) { *this = copy; }

Bullets &Bullets::operator=(const Bullets &rhs)
{
    this->row = rhs.row;
    this->col = rhs.col;
    return (*this);
}

void  Bullets::placeBullets(int ***gameMap)
{
    (*gameMap)[this->row][this->col] = 1;   
    std::cout << std::endl;  
    std::cout << "Placing Bullets: " << this->row << ", " <<  this->col << std::endl;
    std::cout << std::endl;  
}

void Bullets::moveBullets(int ***gameMap, Player *player)
{
    // (*gameMap)[player->getRow()][player->getCol()] = 0;
    int updtRow = player->getRow() - 1;
    int updtCol = player->getCol();
    for (int i = 0; i < this->row; i++)
    {
        (*gameMap)[updtRow][updtCol] = 1;
        updtRow--;
        std::cout << std::endl;  
        std::cout << "Placing Bullets: " << this->row << ", " <<  this->col << std::endl;
        std::cout << std::endl; 
    }
    
}