/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:03:44 by tadey             #+#    #+#             */
/*   Updated: 2018/06/30 14:03:45 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_CLASS_HPP_
#define SORCERER_CLASS_HPP_
#include <iostream>
#include "Victim.Class.hpp"

class Sorcerer
{
        std::string name;
        std::string title;
    public:
        Sorcerer();
        Sorcerer(std::string, std::string);
        ~Sorcerer();
        Sorcerer(const Sorcerer &); //copy constructor 
        Sorcerer &operator=(Sorcerer const &);//assignation operator func
        std::string getName() const;
        std::string getTitle() const;
        void polymorph(Victim const &) const;
};

std::ostream &operator<< (std::ostream &out, const Sorcerer &rhs);

#endif //SORCERER_CLASS_HPP_