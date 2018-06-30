/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 08:43:41 by tadey             #+#    #+#             */
/*   Updated: 2018/06/29 08:48:50 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.Class.hpp"

int main()
{
#if 0
    ClapTrap    name1("Harry Potter");
    ClapTrap    name2("Voldemort");
    std::cout << std::endl << "Let's get this party started!" << std::endl << std::endl;
    std::cout << name1.getName() << ": Pew Pew" << std::endl;
    name1.rangedAttack(name2.getName());
    name2.takeDamage(name2.getRangedAttackDamage());
    name2.beRepaired(100);

    std::cout << name2.getName() << ": Crucio" << std::endl;
    name2.meleeAttack(name1.getName());
    name1.takeDamage(name1.getMeleeAttackDamage());

    std::cout << name2.getName() << ": Abraka Dabra" << std::endl;
    name2.vaultHunter_dot_exe(name1.getName());
    name1.takeDamage(name1.getRandomAttackDamage());
    name2.vaultHunter_dot_exe(name1.getName());
    name1.takeDamage(name1.getRandomAttackDamage());
    name1.beRepaired(100);
    name1.challengeNewcomer(name2.getName());
    return (0);
#endif
    NinjaTrap ninjaTrap("voldemort");
    FragTrap fragTrap("harry");
    ScavTrap scavTrap("bitch");
    ClapTrap clapTrap("fuckThis");
    SuperTrap superTrap("whatdafaq");

    std::cout << std::endl << "Let's get this party started!" << std::endl << std::endl;
    std::cout << superTrap.getName() << ": Pew Pew" << std::endl << std::endl;
    superTrap.vaultHunter_dot_exe(superTrap.getName());//parent- FragTrap
    superTrap.ninjaShoebox(clapTrap);//parent- ninjaTrap
    superTrap.ninjaShoebox(fragTrap);
    superTrap.ninjaShoebox(scavTrap);
    superTrap.ninjaShoebox(ninjaTrap);
}