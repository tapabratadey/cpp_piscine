/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:07:24 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 21:07:25 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_CLASS_H
#define ZOMBIE_CLASS_H
#include <iostream>
#include <stdlib.h>

class Zombie
{
        std::string type;
        std::string name;
    public:
        Zombie();
        Zombie(std::string, std::string);
        ~Zombie();
        void announce();
};

#endif //ZOMBIE_CLASS_H
