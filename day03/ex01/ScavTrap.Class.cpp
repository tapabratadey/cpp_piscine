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

                    /*CONSTRUCTORS*/

ScavTrap::ScavTrap(){ std::cout << name << " : created" << std::endl; }
ScavTrap::~ScavTrap(){ std::cout << name << ": killed off by tapa" << std::endl; }

ScavTrap::ScavTrap(std::string name)
{
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


void ScavTrap::takeDamage(unsigned int amount)
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

void    ScavTrap::beRepaired(unsigned int amount)
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

void    ScavTrap::vaultHunter_dot_exe(std::string const &target)
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

void    ScavTrap::challengeNewcomer(std::string const &target)
{
    srand(time(NULL));
    std::string str[] = {"poop", "fart", "eat blazing hot wings"};
    std::cout << name << ": hey you " <<  target << " i dare you to " << str[rand() % 3] << std::endl << std::endl;    
}

std::string ScavTrap::getName() { return name; }
unsigned int ScavTrap::getHitPoints(){ return healthPoints; }
unsigned int ScavTrap::getMaxHitPoints(){ return maxHitPoints; }
unsigned int ScavTrap::getEnergyPoints(){ return energyPoints; }
unsigned int ScavTrap::getMaxEnergyPoints(){ return maxEnergyPoints; }
unsigned int ScavTrap::getLevel(){ return level; }
unsigned int ScavTrap::getMeleeAttackDamage(){ return meleeAttackDamage; }
unsigned int ScavTrap::getRangedAttackDamage(){ return rangedAttackDamage; }
unsigned int ScavTrap::getArmorAttackDamage(){ return armorAttackDamage; }
unsigned int ScavTrap::getRandomAttackDamage(){ return randomAttackDamage; }