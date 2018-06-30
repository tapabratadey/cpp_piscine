/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 19:52:03 by tadey             #+#    #+#             */
/*   Updated: 2018/06/29 19:52:04 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.Class.hpp"

                    /*CONSTRUCTORS*/

NinjaTrap::NinjaTrap(){ }
NinjaTrap::~NinjaTrap(){ std::cout << "NinjaTrap dead" << std::endl; }

NinjaTrap::NinjaTrap(std::string name)
{
    std::cout << "NinjaTrap created" << std::endl;
    this->name = name;
    this->healthPoints = 60;
    this->maxHitPoints = 60;
    this->energyPoints = 120;
    this->maxEnergyPoints = 120;
    this->level = 1;
    this->meleeAttackDamage = 60;
    this->rangedAttackDamage = 5;
    this->armorAttackDamage = 0;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy)
{
    *this = copy;
    std::cout << "Copy construtor called" << std::endl;
}
                    /*OPERATORS*/

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs)
{
	this->name = rhs.name;
	this->healthPoints = rhs.healthPoints;
	this->maxHitPoints = rhs.maxHitPoints;
	this->energyPoints = rhs.energyPoints;
	this->maxEnergyPoints = rhs.maxEnergyPoints;
	this->level = rhs.level;
    this->meleeAttackDamage = rhs.meleeAttackDamage;
    this->rangedAttackDamage = rhs.rangedAttackDamage;
    this->armorAttackDamage = rhs.armorAttackDamage;
    return (*this);
} 

                    /*MEMBER FUNCTIONS*/


void NinjaTrap::ninjaShoebox(FragTrap &fuckThis)
{
    std::cout << "fuckidy fuck this is ClapTrap: " << fuckThis.getName() << std::endl;
}
void NinjaTrap::ninjaShoebox(ClapTrap &fuckThis)
{
    std::cout << "fuckidy fuck this is FragTrap: " << fuckThis.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &fuckThis)
{
    std::cout << "fuckidy fuck this is ScavTrap: " << fuckThis.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &fuckThis)
{
    std::cout << "fuckidy fuck this is ClapTrap: " << fuckThis.getName() << std::endl << std::endl;
}
