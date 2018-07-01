/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:03:35 by tadey             #+#    #+#             */
/*   Updated: 2018/06/30 14:03:38 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.Class.hpp"

                                    /*CONSTRUCTORS*/

Sorcerer::Sorcerer()
{
    std::cout << "What an insult" << std::endl;
    exit(0);
}

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
    std::cout << std::endl << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << name << ", " << title << ", is dead. Consequences will never be the same !" << std::endl << std::endl;    
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
    *this = copy;
    std::cout << "Copy constructor called" << std::endl;
}

                                    /*OPERATORS*/

Sorcerer &Sorcerer::operator=(Sorcerer const &rhs)
{
    name = rhs.name;
    title = rhs.title;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &rhs)
{
    out << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
    return (out);
}
                                    /*MEMBER FUNCTIONS*/

std::string Sorcerer::getName() const { return name; }
std::string Sorcerer::getTitle() const{ return title; }

void Sorcerer::polymorph(Victim const &victim) const
{
    return (victim.getPolymorphed());
}