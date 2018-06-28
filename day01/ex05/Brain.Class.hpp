/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 22:50:06 by tadey             #+#    #+#             */
/*   Updated: 2018/06/27 22:50:07 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_CLASS_H_
#define BRAIN_CLASS_H_
#include <iostream>
#include <iostream>
#include <sstream>
#include <string>
#include "Human.Class.hpp"
#include "Brain.Class.hpp"

class Brain
{
    public:
        Brain();
        ~Brain();
        std::string identify() const;
};

#endif //BRAIN_CLASS_H_