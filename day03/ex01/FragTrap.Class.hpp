/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 08:43:28 by tadey             #+#    #+#             */
/*   Updated: 2018/06/29 08:48:42 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_CLASS_H_
#define FRAG_TRAP_CLASS_H_
#include <iostream>

class FragTrap
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
        FragTrap();//constructor
        ~FragTrap();//destructor
        FragTrap(std::string);//constructor w string param
        FragTrap(const FragTrap &); //copy constructor 
        FragTrap &operator=(FragTrap const &);//assignation operator func
        void rangedAttack(std::string const &);//ranged attack func
        void meleeAttack(std::string const &);//melee attacks func
        void takeDamage(unsigned int);//damange func
        void beRepaired(unsigned int);//repair func
        void vaultHunter_dot_exe(std::string const &);//semi-random attack
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

#endif //FRAG_TRAP_CLASS_H_
