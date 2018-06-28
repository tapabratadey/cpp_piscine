/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 20:06:54 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 20:06:56 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"
#include "ZombieEvent.Class.hpp"

Zombie::Zombie(std::string type, std::string name) : type(type), name(name) 
{ 
    // std::cout << "Zombie Constructor invoked" << std::endl;
}

Zombie::~Zombie() 
{
    std::cout << "<" + this->name + " (" + this->type + ")> dead" << std::endl;
}

std::string Zombie::announce() 
{
    std::string output = "<" + this->name + " (" + this->type + ")> Braiiiiiiinnnssss...";
    return output;
}
