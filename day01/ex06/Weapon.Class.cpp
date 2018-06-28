/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 23:28:14 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 23:28:15 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.Class.hpp"
#include "HumanB.Class.hpp"
#include "Weapon.Class.hpp"

Weapon::Weapon(std::string str): str(str)
{
    std::cout << "Weapon constructor invoked" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon destructor invoked" << std::endl;
}

void Weapon::setType(std::string str)
{
    this->str = str;
}

const std::string &Weapon::getType()
{
    return (this->str);
}
