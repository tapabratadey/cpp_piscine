/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.Class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:07:32 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 21:07:33 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.Class.hpp"
#include "ZombieHorde.Class.hpp"

ZombieHorde::ZombieHorde(int N) : N(N)
{
    int i = 0;
    std::string type[] = {"type1", "type2"};
    std::string name[] = {"zombie1", "zombie2"};
    this->zombieHorde = new Zombie[N];
    while (i < N)
    {
        this->zombieHorde[i] = Zombie(type[rand() % 2], name[rand() % 2]);
        i++;
    }
    std::cout << "ZombieHorde Constructor invoked." << std::endl;
}

ZombieHorde::~ZombieHorde()
{
    delete []zombieHorde;
    std::cout << "ZombieHorde destructor invoked." << std::endl;
}

void ZombieHorde::announce() 
{
    int i = 0;
    while (i < N)
    {
        zombieHorde[i].announce();
        i++;
    }
}
