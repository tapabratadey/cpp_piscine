/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:04:05 by tadey             #+#    #+#             */
/*   Updated: 2018/06/30 14:04:07 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.Class.hpp"
#include "Victim.Class.hpp"
#include "Peon.Class.hpp"

#if 0
int main()
{
    Sorcerer sorcerer("Tapa", "yolo");
    Victim victim("tapa");
    Peon peon("meo");
    std::cout << sorcerer << std::endl;
    std::cout << victim << std::endl;
    std::cout << peon << std::endl;
    sorcerer.polymorph(peon);
    sorcerer.polymorph(victim);
    return (0);
}
#endif
int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    return 0;
}