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
#include "ClapTrap.Class.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();//constructor
        ~ScavTrap();//destructor
        ScavTrap(std::string);//constructor w string param
        ScavTrap(const ScavTrap &); //copy constructor 
        ScavTrap &operator=(ScavTrap const &);//assignation operator func
        // void rangedAttack(std::string const &);//ranged attack func
        // void meleeAttack(std::string const &);//melee attacks func
        void challengeNewcomer(std::string const &);
};

#endif //SCAN_TRAP_CLASS_H_