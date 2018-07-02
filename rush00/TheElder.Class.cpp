/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TheElder.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 05:43:56 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 05:43:57 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "TheElder.Class.hpp"

TheElder::TheElder() { }

TheElder::~TheElder() 
{
    std::cout << std::endl;
    std::cout << "TheElder ended" << std::endl;
}

TheElder::TheElder(int row, int col)
{
    if (row <= 10 && col <= 10)
    {
        std::cout << "TheElder Created" << std::endl;
        std::cout << std::endl;
        this->row = row;
        this->col = col;
    }
    else
        std::cout << "Row and Column has to be more than 20" << std::endl;
}

TheElder::TheElder(TheElder const &copy) { *this = copy; }

TheElder &TheElder::operator=(const TheElder &rhs)
{
    this->row = rhs.row;
    this->col = rhs.col;
    return (*this);
}

void  TheElder::placeTheElder(int ***gameMap)
{
    (*gameMap)[this->row][this->col] = 6;
    std::cout << std::endl;  
    std::cout << "Placing TheElder: " << this->row << ", " <<  this->col << std::endl;
    std::cout << std::endl;
}

void TheElder::moveTheElder(int ***gameMap, std::string instr)
{
    if (instr == "left")
    {
        (*gameMap)[this->row][this->col] = 0;
        this->col--;
        (*gameMap)[this->row][this->col] = 6;
        std::cout << std::endl;  
        std::cout << "Placing player: " << this->row << ", " <<  this->col << std::endl;
        std::cout << std::endl;  
    }
    else
    {
        (*gameMap)[this->row][this->col] = 0;
        this->col++;
        (*gameMap)[this->row][this->col] = 6;
        std::cout << std::endl;  
        std::cout << "Placing player: " << this->row << ", " <<  this->col << std::endl;
        std::cout << std::endl;        
    }
}