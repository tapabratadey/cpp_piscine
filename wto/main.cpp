// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: wto <marvin@42.fr>                         +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/30 23:57:55 by wto               #+#    #+#             //
//   Updated: 2018/07/01 00:12:35 by wto              ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <curses.h>
#include <unistd.h>
#include "UIHandler.hpp"
#include <ctime>
#include <cstdlib>
#include <string>
#include <iostream>
#include "Game.Class.hpp"
#include "Bullets.Class.hpp"
#include "Enemy.Class.hpp"

int main(void)
{
	Position *position = new Position;//make sure to free
	BulletPos *bulletPos = new BulletPos;
	EnemyPos *enemyPos = new EnemyPos;
	Player player;
	Game game;


	int ch;
	UIHandler ui;
	srand(time(NULL));

	int xBound = 42;
	int yBound = 42;
	position->x = xBound / 2;
	position->y = yBound;

	enemyPos->c1x = rand() % xBound;
	enemyPos->c1y = 1;
	enemyPos->c2x = rand() % xBound;
	enemyPos->c2y = 1;
	enemyPos->c3x = rand() % xBound;
	enemyPos->c3y = 1;

	bulletPos->x = 0;
	bulletPos->y = 0;

	useconds_t frameDelay = 32000;

	ui.drawShip(position->y, position->x);
	ui.drawCreep1(enemyPos->c1y, enemyPos->c1x, xBound, yBound);
	ui.drawCreep2(enemyPos->c2y, enemyPos->c2x, xBound, yBound);
	ui.drawCreep3(enemyPos->c3y, enemyPos->c3x, xBound, yBound);
	int frameCounter = 1;
	while (frameCounter)
	{
		enemyPos->c1y++;
		enemyPos->c2y++;
		enemyPos->c3y++;
		clear();
		ch = getch();
		if (ch != ERR)
		{
			if (ch == KEY_LEFT)
			{
				if (position->x < 1)
					position->x = 1;
				player.movePlayer(&position->x, "left");
				mvprintw(1,1, (std::to_string(position->x)  +  " " + std::to_string(position->y)).c_str());
			}
			else if (ch == KEY_RIGHT)
			{
				position->x += 2;
				if (position->x > xBound)
					position->x = xBound;
				player.movePlayer(&position->y, "right");
				mvprintw(1,1, (std::to_string(position->x)  +  " " + std::to_string(position->y)).c_str());
			}
			else if (ch == KEY_UP || ch == KEY_DOWN)
			{
				bulletPos->x = position->x;
				bulletPos->y = position->y;
				// game.addBullet();
			}
			else if (ch == KEY_ENTER)
				break;
			else
			{
				enemyPos->c1x = rand() % xBound;
				enemyPos->c1y = 1;
				enemyPos->c2x = rand() % xBound;
				enemyPos->c2y = 1;
				enemyPos->c3x = rand() % xBound;
				enemyPos->c3y = 1;
			}
		}
		ui.drawShip(position->y, position->x);
		ui.drawBullet(bulletPos->y, bulletPos->x);
		bulletPos->y--;
		/*
		drawShip(player.position().y, player.position().x);
		for (int i = 0; i < creeps.size(); i++)
		{
			if (creeps[i].getType() == 1)
			{
				drawCreep1(creeps[i].position().y, creeps[i].position().x, xBound, yBound);
			}
			if (creeps[i].getType() == 2)
			{
				drawCreep2(creeps[i].position().y, creeps[i].position().x, xBound, yBound);
			}
			if (creeps[i].getType() == 3)
			{
				drawCreep3(creeps[i].position().y, creeps[i].position().x, xBound, yBound);
			}
		}
		for (int i = 0; i < bullets.size(); i++)
		{
			drawBullet(bullets[i].position().y, bullets[i].position().x);
		}
		*/
		ui.drawCreep1(enemyPos->c1y, enemyPos->c1x, xBound, yBound);
		ui.drawCreep2(enemyPos->c2y, enemyPos->c2x, xBound, yBound);
		ui.drawCreep3(enemyPos->c3y, enemyPos->c3x, xBound, yBound);
		ui.drawUI(frameCounter++, xBound, yBound, 1345, 10);
		refresh();
		usleep(frameDelay);
	}
	clear();
	ui.drawGameOver(xBound, yBound, 1345);
	ui.drawUI(frameCounter++, xBound, yBound, 1345, 10);
	refresh();
	sleep(2);
	endwin();
	return 0;
}
