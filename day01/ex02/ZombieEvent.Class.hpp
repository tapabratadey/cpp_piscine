/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.Class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 20:07:18 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 20:07:19 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_CLASS_H
#define ZOMBIE_EVENT_CLASS_H
#include <iostream>
#include <stdlib.h>

class ZombieEvent
{
        std::string type;
    public:
        ZombieEvent();
        ~ZombieEvent();
        void        setZombieType(std::string);
        Zombie      *newZombie(std::string name);
        Zombie      *randomChump();
};

#endif //ZOMBIE_EVENT_CLASS_H
