/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 19:53:30 by tadey             #+#    #+#             */
/*   Updated: 2018/07/04 19:53:32 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONVERT_CLASS_HPP_
#define CONVERT_CLASS_HPP_
#include <iostream>
#include <string>
#include <iomanip>
class Convert
{
        std::string scalarString;
    public:
        Convert();
        virtual ~Convert();
        Convert(std::string);
        Convert(const Convert &copy);
        Convert &operator=(const Convert &);
        operator char() const;
        operator int() const;
        operator float() const;
        operator double() const;
};
#endif //CONVERT_CLASS_HPP_