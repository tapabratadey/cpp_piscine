/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 23:27:59 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 23:28:00 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_CLASS_H_
#define HUMANB_CLASS_H_
#include <iostream>

class HumanB
{
        Weapon *weapon;
        std::string str;
    public:
        HumanB(std::string);
        ~HumanB();
        void attack();
        void setWeapon(Weapon &);
};

#endif //HUMANB_CLASS_H_