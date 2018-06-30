/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTran.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 21:11:32 by tadey             #+#    #+#             */
/*   Updated: 2018/06/29 21:11:33 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SUPER_TRAP_CLASS_HPP_
#define SUPER_TRAP_CLASS_HPP_
#include <iostream>
#include "FragTrap.Class.hpp"
#include "NinjaTrap.Class.hpp"
#include "ScavTrap.Class.hpp"
#include "ClapTrap.Class.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
    public:
        SuperTrap();
        ~SuperTrap();
        SuperTrap(std::string);
        SuperTrap(const SuperTrap &);
        SuperTrap &operator=(SuperTrap const &);
};

#endif //SUPER_TRAP_CLASS_HPP_