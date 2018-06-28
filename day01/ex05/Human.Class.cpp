/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 22:50:13 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 22:50:14 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Human.Class.hpp"
#include "Brain.Class.hpp"

Human::Human(void)
{
    std::cout << "Human constructor invoked" << std::endl;
}

Human::~Human(void)
{
    std::cout << "Human destructor invoked" << std::endl;
}

std::string Human::identify()
{
    return (this->brain.identify());
}

//returns the address of the brain which is const
Brain  const &Human::getBrain()
{
    return brain;
}