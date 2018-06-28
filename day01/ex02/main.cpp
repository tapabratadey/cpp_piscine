/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 20:07:31 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 20:07:31 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>


#include "Zombie.Class.hpp"
#include "ZombieEvent.Class.hpp"

int main()
{
    ZombieEvent zombieEvent;


    srand(time(NULL));
    zombieEvent.setZombieType("type1");
    Zombie *zombie = zombieEvent.randomChump();
    delete zombie;
    zombieEvent.setZombieType("type2");
    zombie = zombieEvent.randomChump();
    delete zombie;
    return (0);
}
