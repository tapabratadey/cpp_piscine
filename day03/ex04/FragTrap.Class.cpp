/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 08:48:36 by tadey             #+#    #+#             */
/*   Updated: 2018/06/29 08:48:38 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.Class.hpp"
#include "ClapTrap.Class.hpp"

                    /*CONSTRUCTORS*/

FragTrap::FragTrap(){ }
FragTrap::~FragTrap(){ std::cout << "FragTrap dead" << std::endl; }

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap created" << std::endl;
    this->name = name;
    this->healthPoints = 100;
    this->maxHitPoints = 100;
    this->energyPoints = 100;
    this->maxEnergyPoints = 100;
    this->level = 1;
    this->meleeAttackDamage = 30;
    this->rangedAttackDamage = 20;
    this->armorAttackDamage = 5;
    this->randomAttackDamage = 50;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    *this = copy;
    std::cout << "Copy construtor called" << std::endl;
}
                    /*OPERATORS*/

FragTrap &FragTrap::operator=(FragTrap const &rhs)
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

void    FragTrap::vaultHunter_dot_exe(std::string const &target)
{
    if (energyPoints < 25)
    {
        std::cout << name << " wanted a special attack!! REJECTED" << std::endl << std::endl;
        return ;
    }
    else
    {
        srand(time(NULL));
        std::string str[] = {"Jelly Bean Jinx", "Slug vomitting Charm", "Tickling Charm"};
        std::cout << name << " attacks " <<  target << " with " << str[rand() % 3] << " causing "
        << randomAttackDamage << " points of damage !" << std::endl << std::endl;  
    }
}

unsigned int FragTrap::getRandomAttackDamage(){ return randomAttackDamage; }