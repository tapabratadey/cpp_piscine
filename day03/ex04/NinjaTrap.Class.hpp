/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 19:52:11 by tadey             #+#    #+#             */
/*   Updated: 2018/06/29 19:52:12 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_CLASS_H_
#define NINJA_TRAP_CLASS_H_
#include <iostream>
#include "ClapTrap.Class.hpp"
#include "FragTrap.Class.hpp"
#include "ScavTrap.Class.hpp"

class NinjaTrap : public virtual ClapTrap
{
        
    public:
        NinjaTrap();//constructor
        ~NinjaTrap();//destructor
        NinjaTrap(std::string);//constructor w string param
        NinjaTrap(const NinjaTrap &); //copy constructor 
        NinjaTrap &operator=(NinjaTrap const &);//assignation operator func
	    void ninjaShoebox(FragTrap &);
	    void ninjaShoebox(ScavTrap &);
	    void ninjaShoebox(ClapTrap &);
	    void ninjaShoebox(NinjaTrap &);
};

#endif //NINJA_TRAP_CLASS_H_
