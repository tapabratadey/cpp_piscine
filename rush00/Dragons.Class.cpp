/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dragons.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 05:43:21 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 05:43:22 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dragons.Class.hpp"

Dragons::Dragons() { }

Dragons::~Dragons() 
{
    std::cout << "Dragons ended" << std::endl;
}

Dragons::Dragons(int row, int col)
{
    if (row <= 10 && col <= 10)
    {
        std::cout << "Dragons Created" << std::endl;
        this->row = row;
        this->col = col;
    }
    else
        std::cout << "Row and Column has to be more than 20" << std::endl;
}

Dragons::Dragons(Dragons const &copy) { *this = copy; }

Dragons &Dragons::operator=(const Dragons &rhs)
{
    this->row = rhs.row;
    this->col = rhs.col;
    return (*this);
}

void  Dragons::placeDragons(int ***gameMap)
{
    (*gameMap)[this->row][this->col] = 5;   
    std::cout << std::endl;  
    std::cout << "Placing Dragons: " << this->row << ", " <<  this->col << std::endl;
    std::cout << std::endl;  
}

void Dragons::moveDragons(int ***gameMap, std::string instr)
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