/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTran.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 21:11:23 by tadey             #+#    #+#             */
/*   Updated: 2018/06/29 21:11:25 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.Class.hpp"

                    /*CONSTRUCTORS*/

SuperTrap::SuperTrap(){ }
SuperTrap::~SuperTrap(){ std::cout << "SuperTrap dead" << std::endl; }

SuperTrap::SuperTrap(std::string name)
{
    std::cout << "SuperTrap created" << std::endl;
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

SuperTrap::SuperTrap(const SuperTrap &copy)
{
    *this = copy;
    std::cout << "Copy construtor called" << std::endl;
}
                    /*OPERATORS*/

SuperTrap &SuperTrap::operator=(SuperTrap const &rhs)
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