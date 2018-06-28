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
    #if 0
        -srand(x) function sets the seed of the random number
            generator algorithm used by the function rand().
        -A seed value of 1 is the default setting yielding the
            same sequence of values as if srand(x) were not used.
        -Any other value for the seed produces a different sequence
            srand(time(NULL));
    #endif
    srand(time(NULL));
    zombieEvent.setZombieType("type1");
    Zombie *zombie = zombieEvent.randomChump();
    delete zombie;
    zombieEvent.setZombieType("type2");
    zombie = zombieEvent.randomChump();
    delete zombie;
    return (0);
}
