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
#include "Entity.Class.hpp"
#include "Game.Class.hpp"

class Game;
class Player : public Entity
{
    public:
        Player();
        ~Player();
        Player(int row, int col);
        Player(Player const &copy);
        Player &operator=(const Player &rhs);
        void placePlayer(int ***gameMap);
        void movePlayer(Game &game, std::string);
        int getRow();
        int getCol();
};

#endif //PLAYER_CLASS_HPP_
