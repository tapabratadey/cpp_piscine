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
#include "Player.Class.hpp"


struct BulletPos
{
    int x;
    int y;
};

class Player;
class Bullets
{
        int speed;
        int direction;//-1 or 1
        bool active;
        BulletPos *bulletPos;
    public:
        Bullets();
        ~Bullets();
        Bullets(int row, int col);
        Bullets(Bullets const &copy);
        Bullets &operator=(const Bullets &rhs);
        // void placeBullets(int ***gameMap);
        void moveBullets();
        BulletPos *getBulletPos();
        int getSpeed();
        int getDirection();
        bool getActive();
};

#endif //BULLETS_CLASS_HPP_
