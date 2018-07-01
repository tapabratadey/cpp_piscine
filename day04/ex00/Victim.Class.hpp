/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 14:03:58 by tadey             #+#    #+#             */
/*   Updated: 2018/06/30 14:04:00 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef VICTIM_CLASS_HPP_
#define VICTIM_CLASS_HPP_
#include <iostream>

class Victim
{
        std::string name;
    public:
        Victim();
        ~Victim();
        Victim(std::string);
        Victim(const Victim &);
        Victim &operator=(Victim const &);
        std::string getName() const;
        void virtual getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, const Victim &rhs);

#endif //VICTIM_CLASS_HPP_