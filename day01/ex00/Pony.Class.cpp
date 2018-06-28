/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 08:29:05 by tadey             #+#    #+#             */
/*   Updated: 2018/06/28 08:29:06 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.Class.hpp"
#include <string>

Pony::Pony(std::string voice) : voice(voice)
{
    std::cout << "Constructor invoked." << std::endl;
    std::cout << voice << std::endl;
}

Pony::~Pony()
{
    std::cout << "Destructor invoked." << std::endl;
}
