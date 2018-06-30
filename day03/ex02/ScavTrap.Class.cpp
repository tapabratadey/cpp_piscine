/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 17:42:47 by tadey             #+#    #+#             */
/*   Updated: 2018/06/29 17:42:56 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.Class.hpp"
#include "ClapTrap.Class.hpp"

                    /*CONSTRUCTORS*/

ScavTrap::ScavTrap(){  }
ScavTrap::~ScavTrap(){ std::cout << "ScavTrap dead" << std::endl; }

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap created" << std::endl;
    this->name = name;
    this->healthPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->maxEnergyPoints = 50;
    this->level = 1;
    this->meleeAttackDamage = 20;
    this->rangedAttackDamage = 15;
    this->armorAttackDamage = 3;
    this->randomAttackDamage = 50;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    *this = copy;
    std::cout << "Copy construtor called" << std::endl;
}
                    /*OPERATORS*/

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
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
#if 0
void    ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << name << " attacks " <<  target << " with range, causing "
    << rangedAttackDamage << " points of damage !" << std::endl << std::endl;
}

void    ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << name << " attacks " <<  target << " with melee, causing "
    << meleeAttackDamage << " points of damage !" << std::endl << std::endl;    
}
#endif
void    ScavTrap::challengeNewcomer(std::string const &target)
{
    srand(time(NULL));
    std::string str[] = {"poop", "fart", "eat blazing hot wings"};
    std::cout << name << ": hey you " <<  target << " i dare you to " << str[rand() % 3] << std::endl << std::endl;    
}
