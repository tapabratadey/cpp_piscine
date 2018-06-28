/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.Class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 20:07:09 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 20:07:10 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"
#include "ZombieEvent.Class.hpp"

ZombieEvent::ZombieEvent()
{
    // std::cout << "ZombieEvent Constructor invoked" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
    // std::cout << "ZombieEvent Destructor invoked" << std::endl;
}

void ZombieEvent::setZombieType(std::string type) 
{ 
    this->type = type; 
}

Zombie *ZombieEvent::newZombie(std::string name)
{ 
    return (new Zombie(type, name)); 
}

Zombie *ZombieEvent::randomChump()
{
    Zombie *zombie;
    std::string zombieNames[] = {"Zombie1", "Zombie2"};
    zombie = newZombie(zombieNames[rand() % 2]);
    std::cout << zombie->announce() << std::endl;
    return zombie;
}
