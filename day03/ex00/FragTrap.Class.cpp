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

                    /*CONSTRUCTORS*/

FragTrap::FragTrap(){ std::cout << name << " : created" << std::endl; }
FragTrap::~FragTrap(){ std::cout << name << ": killed off by tapa" << std::endl; }

FragTrap::FragTrap(std::string name)
{
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

void    FragTrap::rangedAttack(std::string const &target)
{
    std::cout << name << " attacks " <<  target << " with range, causing "
    << rangedAttackDamage << " points of damage !" << std::endl << std::endl;
}

void    FragTrap::meleeAttack(std::string const &target)
{
    std::cout << name << " attacks " <<  target << " with melee, causing "
    << meleeAttackDamage << " points of damage !" << std::endl << std::endl;    
}


void FragTrap::takeDamage(unsigned int amount)
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

void    FragTrap::beRepaired(unsigned int amount)
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

std::string FragTrap::getName() { return name; }
unsigned int FragTrap::getHitPoints(){ return healthPoints; }
unsigned int FragTrap::getMaxHitPoints(){ return maxHitPoints; }
unsigned int FragTrap::getEnergyPoints(){ return energyPoints; }
unsigned int FragTrap::getMaxEnergyPoints(){ return maxEnergyPoints; }
unsigned int FragTrap::getLevel(){ return level; }
unsigned int FragTrap::getMeleeAttackDamage(){ return meleeAttackDamage; }
unsigned int FragTrap::getRangedAttackDamage(){ return rangedAttackDamage; }
unsigned int FragTrap::getArmorAttackDamage(){ return armorAttackDamage; }
unsigned int FragTrap::getRandomAttackDamage(){ return randomAttackDamage; }