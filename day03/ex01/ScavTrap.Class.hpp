/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scav.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 17:41:59 by tadey             #+#    #+#             */
/*   Updated: 2018/06/29 17:42:00 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_CLASS_H_
#define SCAV_TRAP_CLASS_H_
#include <iostream>

class ScavTrap
{
        int healthPoints;//set to 100
        unsigned int maxHitPoints;//set to 100
        unsigned int energyPoints;//set to 100
        unsigned int maxEnergyPoints;//set to 100
        unsigned int level;//set to 1
        std::string name;//pass name to constructor
        unsigned int meleeAttackDamage;//set to 30
        unsigned int rangedAttackDamage;//set to 20
        unsigned int armorAttackDamage;//set to 5
        unsigned int randomAttackDamage;//set to 50
        int flag;
    public:
        ScavTrap();//constructor
        ~ScavTrap();//destructor
        ScavTrap(std::string);//constructor w string param
        ScavTrap(const ScavTrap &); //copy constructor 
        ScavTrap &operator=(ScavTrap const &);//assignation operator func
        void rangedAttack(std::string const &);//ranged attack func
        void meleeAttack(std::string const &);//melee attacks func
        void takeDamage(unsigned int);//damange func
        void beRepaired(unsigned int);//repair func
        void vaultHunter_dot_exe(std::string const &);//semi-random attack
        void challengeNewcomer(std::string const &);
        std::string getName();
        unsigned int getHitPoints();
        unsigned int getMaxHitPoints();
        unsigned int getEnergyPoints();
        unsigned int getMaxEnergyPoints();
        unsigned int getLevel();
        unsigned int getMeleeAttackDamage();
        unsigned int getRangedAttackDamage();
        unsigned int getArmorAttackDamage();
        unsigned int getRandomAttackDamage();
};

#endif //SCAN_TRAP_CLASS_H_

