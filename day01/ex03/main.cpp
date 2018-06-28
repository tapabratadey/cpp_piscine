/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 21:07:13 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 21:07:46 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.Class.hpp"
#include "ZombieHorde.Class.hpp"

int main()
{
    ZombieHorde zombies = ZombieHorde(20);
    zombies.announce();
    return (0);
}
