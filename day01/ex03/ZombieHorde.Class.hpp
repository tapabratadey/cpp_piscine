/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.Class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:07:40 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 21:07:40 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HORDE_CLASS_H_
#define ZOMBIE_HORDE_CLASS_H_
#include <iostream>

class ZombieHorde
{
        int N;
        Zombie *zombieHorde;
    public:
        ZombieHorde(int);
        ~ZombieHorde();
        void announce();
};

#endif //ZOMBIE_HORDE_CLASS_H_