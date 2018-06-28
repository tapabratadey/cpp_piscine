/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 20:07:02 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 20:07:04 by tadey            ###   ########.fr       */
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
        Zombie(std::string, std::string);
        ~Zombie();
        std::string announce();
};

#endif //ZOMBIE_CLASS_H
