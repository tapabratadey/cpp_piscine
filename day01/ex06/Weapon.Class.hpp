/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 23:28:23 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 23:28:24 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_CLASS_H_
#define WEAPON_CLASS_H_
#include <iostream>
class Weapon
{
        std::string    str;
    public:
        Weapon(std::string);
        ~Weapon();
        void  setType(std::string);
        const std::string &getType();
};

#endif //WEAPON_CLASS_H_