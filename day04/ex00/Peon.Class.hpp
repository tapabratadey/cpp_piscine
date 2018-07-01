/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:03:28 by tadey             #+#    #+#             */
/*   Updated: 2018/06/30 14:03:29 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PEON_CLASS_HPP_
#define PEON_CLASS_HPP_
#include <iostream>
#include "Victim.Class.hpp"

class Peon : public Victim
{
        std::string name;
    public:
        Peon();
        ~Peon();
        Peon(std::string);
        Peon(Peon const &);
        Peon &operator=(Peon const &);
        std::string getName() const;
        void getPolymorphed() const;
};

#endif //PEON_CLASS_HPP_