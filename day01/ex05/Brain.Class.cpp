/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 22:49:59 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 22:50:00 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Human.Class.hpp"
#include "Brain.Class.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor invoked" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor invoked" << std::endl;
}

//if nothing gets modified then everything stays same
std::string   Brain::identify() const
{
    std::stringstream brain; //stringstream var
    brain << this; // this pointer that point to the instance
    return brain.str(); //stringstream converted to string
}