/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 19:53:40 by tadey             #+#    #+#             */
/*   Updated: 2018/07/04 19:53:41 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.Class.hpp"

Convert::Convert(std::string scalarString) : scalarString(scalarString) { }
Convert::~Convert() {  }
Convert::Convert(Convert const &copy) { *this = copy; }
Convert &Convert::operator=(Convert const &rhs)
{
    this->scalarString = rhs.scalarString;
    return (*this);
}

Convert::operator char() const
{
    try
    {
        if ((this->scalarString.length() == 1) && ((this->scalarString[0] < '0') || (this->scalarString[0] > '9')))
            return (static_cast<char>(this->scalarString[0]));
        return static_cast<int>(std::stoi(this->scalarString));
    }
    catch (std::exception)
    {
        throw std::exception();
    }
}

Convert::operator double() const 
{ return (std::stod(this->scalarString)); }

Convert::operator float() const 
{ return (std::stof(this->scalarString)); }

Convert::operator int() const
{ return (std::stoi(this->scalarString)); }