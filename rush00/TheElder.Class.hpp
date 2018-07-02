/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TheElder.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 05:43:44 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 05:43:45 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef THE_ELDER_CLASS_HPP_
#define THE_ELDER_CLASS_HPP_
#include <iostream>
#include "Entity.Class.hpp"

class TheElder : public Entity
{
    public:
        TheElder();
        ~TheElder();
        TheElder(int row, int col);
        TheElder(TheElder const &copy);
        TheElder &operator=(const TheElder &rhs);
        void placeTheElder(int ***gameMap);
        void moveTheElder(int ***gameMap, std::string instr);
};

#endif //THE_ELDER_CLASS_HPP_