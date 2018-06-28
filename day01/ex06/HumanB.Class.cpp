/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 23:27:44 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 23:27:44 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.Class.hpp"
#include "HumanB.Class.hpp"
#include "Weapon.Class.hpp"

HumanB::HumanB(std::string name): name(name)
{

}

HumanB::~HumanB(void)
{

}

void HumanB::setWeapon(Weapon &w)
{
    this->weapon = &w;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
