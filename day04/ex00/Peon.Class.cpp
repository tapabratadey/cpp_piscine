/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:03:22 by tadey             #+#    #+#             */
/*   Updated: 2018/06/30 14:03:23 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.Class.hpp"

Peon::Peon() { }
Peon::Peon(std::string name) : name(name) { std::cout << "Zog zog." << std::endl << std::endl; }
Peon::~Peon() { std::cout <<  "Bleuark... " << std::endl; }
Peon::Peon(Peon const &copy) { *this = copy; }


Peon &Peon::operator=(Peon const &rhs)
{
    name = rhs.name;
    return (*this);
} 

std::string Peon::getName() const { return name; }

void Peon::getPolymorphed() const
{
    std::cout << name << " has been turned into a pink pony !" << std::endl;
    std::cout << std::endl;
}