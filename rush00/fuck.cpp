/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 01:09:51 by tadey             #+#    #+#             */
/*   Updated: 2018/07/01 01:09:53 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.Class.hpp"
#include "Entity.Class.hpp"
#include "Enemy.Class.hpp"
#include "Player.Class.hpp"
#include "Bullets.Class.hpp"
#include "Vampire.Class.hpp"
#include "Dragons.Class.hpp"
#include "TheElder.Class.hpp"

int main()
{
    Game game(10, 10);
    Player player(9, 3);
    Enemy enemy(3, 5);
    // Bullets bullets(9, 3);
    // Vampire vampire(2, 4);
    // Dragons dragons(1, 5);
    // TheElder theElder(0, 6);
    

    // game.initGameMap();
    // game.place(player);
    // game.place(enemy);
    // game.placeVampire(vampire);
    // game.placeDragons(dragons);
    // game.placeTheElder(theElder);
    // game.placeBullets(bullets);
    // game.getGameMap();
    // game.print();
    //movePlayer
    // player.movePlayer(game, "left");
    // game.print();
    // enemy.moveEnemy(game);
    // game.print();
    // vampire.moveVampire(game);
    // game.print();
    // dragons.moveDragons(game);
    // game.print();
    // theElder.moveTheEleder(game);
    // game.print();    
    
    // game.move(player, "right");
    // game.move(bullets, player);
    // game.move(player, "right");
    // game.move(enemy, "right");
    // game.move(vampire, "right");
    // game.move(dragons, "right");
    // game.move(theElder, "right");
    // while(1)
    //     ;
    return (0);
}
