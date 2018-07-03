/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 01:09:44 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 01:09:45 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_CLASS_HPP_
#define PLAYER_CLASS_HPP_
#include <iostream>
#include "Game.Class.hpp"

struct Position
{
    int x;
    int y;
};

class Game;
class Player
{
    protected:
        Position *position;
    public:
        Player();
        ~Player();
        Player(int x, int y);
        Player(Player const &copy);
        // Player &operator=(const Player &rhs);
        void movePlayer(int *x, std::string);
        // void place(int x, int y);
        Position *getPosition();
};

#endif //PLAYER_CLASS_HPP_
