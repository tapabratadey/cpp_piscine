/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 08:29:12 by tadey             #+#    #+#             */
/*   Updated: 2018/06/28 08:29:15 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_H_
#define PONY_CLASS_H_
#include <iostream>

class Pony
{
        std::string voice;
    public:
        Pony(std::string);
        ~Pony();
};

#endif //PONY_CLASS_H_
