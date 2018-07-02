/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vampire.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 05:43:03 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 05:43:07 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef VAMPIRE_CLASS_HPP_
#define VAMPIRE_CLASS_HPP_
#include <iostream>
#include "Entity.Class.hpp"

class Vampire : public Entity
{
    public:
        Vampire();
        ~Vampire();
        Vampire(int row, int col);
        Vampire(Vampire const &copy);
        Vampire &operator=(const Vampire &rhs);
        void placeVampire(int ***gameMap);
        void moveVampire(int ***gameMap, std::string instr);
};

#endif //VAMPIRE_CLASS_HPP_