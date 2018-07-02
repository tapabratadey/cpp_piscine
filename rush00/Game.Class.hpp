/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 01:09:15 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 01:09:15 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_CLASS_HPP_
#define GAME_CLASS_HPP_
#include <iostream>
#include "Player.Class.hpp"

class Game
{
        int *bullets;
        int *enemies;
        Player *player;
    public:
        Game();
        ~Game();
        Game(Game const &copy);
        Game &operator=(const Game &rhs);
        void moveEnemies();
        void moveBullets();
        void *getEnemies();
        void *getBullets();
        Player *getPlayer();
};

#endif //GAME_CLASS_HPP_







#if 0
class Player;
class Game
{
    protected:
        int score;
        int row;
        int col;
        int lives;
        int **gameMap;
        int bullets[];
        int enemies[];
    public:
        Game();
        ~Game();
        Game(int row, int col);
        Game(Game const &copy);
        Game &operator=(const Game &rhs);
        void gameStatus();
        void initGameMap();

        void place(Player & player);
        void place(Enemy & enemy);
        // void place(Vampire &vampire);
        // void place(Dragons &dragons);
        // void place(TheElder &theElder);
        // void place(Bullets & bullets);
        void print();
        int **getGameMap();
};
#endif 




#if 0

Game:
    -score
    -screen size
        -width
        -height
    -lives
    -when does the game end
        -if lives over
        -if enemy's position reaches player

Entity:
    -position (row, col)
    -childs
        -player
            -move on x
        -bullets
            -move on y up
        -enemies
            -move on y down
        -vampire
        -dragons
        -TheElder

    -Create a game class (√√√)
        -screen    (√√√)
            -width (√√√)
            -height (√√√)
        -calc scores
            -if bullet reaches enemy
                then increase score
        -calc lives
            -if enemy's position reaches player's row
        -determine when game over
            -if lives over
    -Create a entity class (√√√)
        -Create a bullet class (√√√)
            -starts at a position (√√√)
        -Create a player class (√√√)
            -starts at a position (√√√)
        -Create an enemy class (√√√)
            -starts at a position ((√√√))

Todo-fix:
        -error handling
            -bullets
            -player
            -enemies
        -calculate scores
            -if bullet hits enemy increase the score
        -calculate lives
            -if enemy's position reaches player's row
                then decrease a life.
        -


#endif
