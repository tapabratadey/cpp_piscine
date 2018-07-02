/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 03:09:51 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 03:10:10 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Entity.Class.hpp"

Entity::Entity() { std::cout << "Entity Created" << std::endl; }

Entity::~Entity() 
{
    std::cout << "Entity ended" << std::endl;
}
#if 0
Entity::Entity(int row, int col)
{
    if (row <= 10 && col <= 10)
    {
        std::cout << std::endl;
        std::cout << "Entity Created" << std::endl;
        std::cout << std::endl;
        this->row = row;
        this->col = col;
    }
    else
        std::cout << "Row and Column has to be more than 20" << std::endl;
}
#endif 

Entity::Entity(Entity const &copy) { *this = copy; }

Entity &Entity::operator=(const Entity &rhs)
{
    this->row = rhs.row;
    this->col = rhs.col;
    return (*this);
}
