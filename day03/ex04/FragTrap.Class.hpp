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
#include "ClapTrap.Class.hpp"

class FragTrap : public virtual ClapTrap
{
        unsigned int randomAttackDamage;//set to 50
    public:
        FragTrap();//constructor
        ~FragTrap();//destructor
        FragTrap(std::string);//constructor w string param
        FragTrap(const FragTrap &); //copy constructor 
        FragTrap &operator=(FragTrap const &);//assignation operator func
        void vaultHunter_dot_exe(std::string const &);//semi-random attack
        unsigned int getRandomAttackDamage();
};

#endif //FRAG_TRAP_CLASS_H_
