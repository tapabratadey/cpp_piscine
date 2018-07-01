/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:03:51 by tadey             #+#    #+#             */
/*   Updated: 2018/06/30 14:03:52 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Victim.Class.hpp"

                                    /*CONSTRUCTORS*/

Victim::Victim() 
{
    name = "Joe";
    std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::Victim(std::string name) : name(name)
{ 
    std::cout << "Some random victim called " << name << " just popped !" << std::endl; 
}

Victim::~Victim() 
{ 
    std::cout << "Victim " << name << " just died for no apparent reason !" << std::endl; 
}

Victim::Victim(const Victim &copy)
{
    *this = copy;
    std::cout << "Copy constructor called." << std::endl;
}
                                    /*OPERATORS*/

Victim &Victim::operator=(Victim const &rhs)
{
    name = rhs.name;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Victim &rhs)
{
    out << "I'm " << rhs.getName() << " and I like otters !" << std::endl; 
    return (out);
}

                                    /*MEMBER FUNCTIONS*/

std::string Victim::getName() const { return name; }

void Victim::getPolymorphed() const
{
    std::cout << std::endl;
    std::cout << name << " has been turned into a cute little sheep !" << std::endl; 
    std::cout << std::endl;  
}