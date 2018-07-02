/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullets.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 05:22:43 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 05:22:44 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLETS_CLASS_HPP_
#define BULLETS_CLASS_HPP_
#include <iostream>
#include "Entity.Class.hpp"
#include "Player.Class.hpp"

class Player;
class Bullets : public Entity
{
    public:
        Bullets();
        ~Bullets();
        Bullets(int row, int col);
        Bullets(Bullets const &copy);
        Bullets &operator=(const Bullets &rhs);
        void placeBullets(int ***gameMap);
        void moveBullets(int ***gameMap, Player *player);
};

#endif //BULLETS_CLASS_HPP_
