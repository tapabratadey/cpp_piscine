/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vampire.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 05:42:50 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 05:42:52 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Vampire.Class.hpp"

Vampire::Vampire() { }

Vampire::~Vampire() 
{
    std::cout << "Vampire ended" << std::endl;
}

Vampire::Vampire(int row, int col)
{
    if (row <= 10 && col <= 10)
    {
        std::cout << "Vampire Created" << std::endl;
        this->row = row;
        this->col = col;
    }
    else
        std::cout << "Row and Column has to be more than 20" << std::endl;
}

Vampire::Vampire(Vampire const &copy) { *this = copy; }

Vampire &Vampire::operator=(const Vampire &rhs)
{
    this->row = rhs.row;
    this->col = rhs.col;
    return (*this);
}

void  Vampire::placeVampire(int ***gameMap)
{
    (*gameMap)[this->row][this->col] = 4;   
    std::cout << std::endl;  
    std::cout << "Placing Vampire: " << this->row << ", " <<  this->col << std::endl;
    std::cout << std::endl;  
}

void Vampire::moveVampire(int ***gameMap, std::string instr)
{
    if (instr == "left")
    {
        (*gameMap)[this->row][this->col] = 0;
        this->col--;
        (*gameMap)[this->row][this->col] = 5;
        std::cout << std::endl;  
        std::cout << "Placing player: " << this->row << ", " <<  this->col << std::endl;
        std::cout << std::endl;  
    }
    else
    {
        (*gameMap)[this->row][this->col] = 0;
        this->col++;
        (*gameMap)[this->row][this->col] = 5;
        std::cout << std::endl;  
        std::cout << "Placing player: " << this->row << ", " <<  this->col << std::endl;
        std::cout << std::endl;        
    }
}