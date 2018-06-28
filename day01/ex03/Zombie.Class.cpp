/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:07:18 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 21:07:19 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"
#include "ZombieHorde.Class.hpp"

Zombie::Zombie() 
{ 
    std::cout << "Zombie() Constructor invoked" << std::endl;
}

Zombie::Zombie(std::string type, std::string name) : type(type), name(name) 
{ 
    // std::cout << "Zombie(type, name) Constructor invoked" << std::endl;
}

Zombie::~Zombie() 
{
    // std::cout << "Zombie Destructor invoked" << std::endl;
    std::cout << "<" + this->name + " (" + this->type + ")> Dead" << std::endl;
}

void Zombie::announce() 
{
    std::cout << "<" + this->name + " (" + this->type + ")> Braiiiiiiinnnssss..." << std::endl;
}