/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 18:30:25 by tadey             #+#    #+#             */
/*   Updated: 2018/06/29 18:30:26 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.Class.hpp"

                    /*CONSTRUCTORS*/

ClapTrap::ClapTrap(){  std::cout << "ClapTrap created" << std::endl; }
ClapTrap::~ClapTrap(){ std::cout << "ClapTrap dead" << std::endl; }

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap created" << std::endl;
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

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
    std::cout << "Copy construtor called" << std::endl;
}
                    /*OPERATORS*/

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
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

void    ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << name << " attacks " <<  target << " with range, causing "
    << rangedAttackDamage << " points of damage !" << std::endl << std::endl;
}

void    ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << name << " attacks " <<  target << " with melee, causing "
    << meleeAttackDamage << " points of damage !" << std::endl << std::endl;    
}


void ClapTrap::takeDamage(unsigned int amount)
{
    healthPoints = ((healthPoints) - (amount + armorAttackDamage));
    if (healthPoints <= 0)
    {
        std::cout << name << " before dieing: kthxbie" << std::endl << std::endl;
        flag = 1;
        return ;
    }
    std::cout << name << " after getting attacked: that hurt fucku" << std::endl << std::endl;
    std::cout << std::internal << "...AAAAND " << name << "'s DAMAGE STATUS ISSS: " << std::endl;
    std::cout << name << "'s damage: " << amount + armorAttackDamage << std::endl;
    std::cout << name << "'s HP left: " << healthPoints << std::endl << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (flag == 0)
    {
        if ((healthPoints + amount) > 100)
        {
            std::cout << name << " asked for HP more than 100!! REJECTED" << std::endl << std::endl;
            return ;
        }
        else
        {
            std::cout << "okay okay lets heal.." << std::endl;
            energyPoints -= amount;
            healthPoints += amount;
            std::cout << std::internal << "okaay.. " << "HEALING STATUS: " << std::endl;
            std::cout << name << "'s boosted HP: " << healthPoints << std::endl << std::endl;
            std::cout << name << " Energy left: " << energyPoints << std::endl << std::endl;   
        }
    }
    else
        std::cout << name << " asked to be repaired" << std::endl << "RESPONSE: NOOO YOU ARE DEAD" << std::endl;
}

std::string ClapTrap::getName() { return name; }
unsigned int ClapTrap::getHitPoints(){ return healthPoints; }
unsigned int ClapTrap::getMaxHitPoints(){ return maxHitPoints; }
unsigned int ClapTrap::getEnergyPoints(){ return energyPoints; }
unsigned int ClapTrap::getMaxEnergyPoints(){ return maxEnergyPoints; }
unsigned int ClapTrap::getLevel(){ return level; }
unsigned int ClapTrap::getMeleeAttackDamage(){ return meleeAttackDamage; }
unsigned int ClapTrap::getRangedAttackDamage(){ return rangedAttackDamage; }
unsigned int ClapTrap::getArmorAttackDamage(){ return armorAttackDamage; }
unsigned int ClapTrap::getRandomAttackDamage(){ return randomAttackDamage; }