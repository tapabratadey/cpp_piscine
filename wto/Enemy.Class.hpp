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
#include "Game.Class.hpp"

struct EnemyPos
{
    int c1x;
	int c1y; 
	int c2x;
	int c2y;
	int c3x;
	int c3y;  
};


class Game;
class Enemy
{
        float speed;
        int direction;//-1 or 1
        bool active;
        EnemyPos *enemyPos;
        int type;
    public:
        Enemy();
        ~Enemy();
        Enemy(int row, int col);
        Enemy(Enemy const &copy);
        Enemy &operator=(const Enemy &rhs);
        // void placeEnemy(int ***gameMap);
        // void moveEnemy(Game &game);
        void moveEnemy(Game *game, int *bx, int *by);
        EnemyPos *getEnemyPos();
        int getSpeed();
        int getDirection();
        bool getActive();
        int getType();
};

#endif //ENEMY_CLASS_HPP_