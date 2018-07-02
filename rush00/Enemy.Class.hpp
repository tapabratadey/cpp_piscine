/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 01:08:03 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 01:08:06 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_HPP_
#define ENEMY_CLASS_HPP_
#include <iostream>
#include "Entity.Class.hpp"
#include "Game.Class.hpp"

class Game;
class Enemy
{
    public:
        Enemy();
        ~Enemy();
        Enemy(int row, int col);
        Enemy(Enemy const &copy);
        Enemy &operator=(const Enemy &rhs);
        void placeEnemy(int ***gameMap);
        void moveEnemy(Game &game);
};

#endif //ENEMY_CLASS_HPP_