// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   uiHandler.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: wto <marvin@42.fr>                         +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/07/01 18:14:51 by wto               #+#    #+#             //
//   Updated: 2018/07/01 18:14:51 by wto              ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "UIHandler.hpp"

UIHandler::UIHandler(void)
{
	initscr();
	noecho();
	cbreak();
	nodelay(stdscr, TRUE);
 	curs_set(FALSE);
	raw();
	keypad(stdscr, TRUE);
}

UIHandler::~UIHandler(void)
{
	return;
}

UIHandler::UIHandler(UIHandler const &other)
{
	*this = other;
	return;
}

UIHandler &UIHandler::operator=(UIHandler const &other)
{
	(void) other;
	return (*this);
}

void	UIHandler::drawShip(int y, int x)
{
	mvprintw(y, x, "^");
}

void	UIHandler::drawBullet(int y, int x)
{
	mvprintw(y, x, "'");
}

void	UIHandler::drawCreep1(int y, int x, int xBound, int yBound)
{
	if (x >= 0 && x <= xBound && y >= 0 && y <= yBound)
	{
		mvprintw(y, x, "o");
	}
}

void	UIHandler::drawCreep2(int y, int x, int xBound, int yBound)
{
	if (x >= 0 && x <= xBound && y >= 0 && y <= yBound)
	{
		mvprintw(y, x, "O");
	}
}

void	UIHandler::drawCreep3(int y, int x, int xBound, int yBound)
{	
	if (x >= 0 && x <= xBound && y >= 0 && y <= yBound)
	{
		mvprintw(y, x, "0");
	}
}

void	UIHandler::drawGameOver(int xBound, int yBound, int score)
{

	mvprintw(yBound/2 - 3, xBound/2 - 16, "  ___    __    __  __  ____ ");
	mvprintw(yBound/2 - 2, xBound/2 - 16, " / __)  /__\\  (  \\/  )( ___)");
	mvprintw(yBound/2 - 1, xBound/2 - 16, "( (_-. /(__)\\  )    (  )__) ");
	mvprintw(yBound/2, xBound/2 - 16, " \\___/(__)(__)(_/\\/\\_)(____)");
	mvprintw(yBound/2 + 1, xBound/2 - 15, " _____  _  _  ____  ____ ");
	mvprintw(yBound/2 + 2, xBound/2 - 15, "(  _  )( \\/ )( ___)(  _ \\");
	mvprintw(yBound/2 + 3, xBound/2 - 15, " )(_)(  \\  /  )__)  )   /");
	mvprintw(yBound/2 + 4, xBound/2 - 15, "(_____)  \\/  (____)(_)\\_)");
	mvprintw(yBound/2 + 6, xBound/2 - 10, ("HIGH SCORE: " + std::to_string(score)).c_str());
}

void	UIHandler::drawUI(int frames, int xBound, int yBound, int score, int lives)
{
	int menuWidth = 20;
	for (int i = 0; i <= yBound; i++) // left border
		mvprintw(i, 0, "|");
	for (int i = 0; i <= yBound; i++) // mid border
		mvprintw(i, xBound + 1, "|");
	for (int i = 0; i <= yBound; i++) // right border
		mvprintw(i, xBound + menuWidth, "|");
	for (int i = 0; i <= xBound + menuWidth; i++) // top border
		mvprintw(0, i, "-");
	for (int i = 0; i <= xBound + menuWidth; i++) // bottom border
		mvprintw(yBound + 1, i, "-");
	mvprintw(1, xBound + 3, "Totally Not");
	mvprintw(2, xBound + 3, "Space Invaders");
	mvprintw(4, xBound + 3, "Score: ");
	mvprintw(4, xBound + 10, std::to_string(score).c_str());
	mvprintw(6, xBound + 3, "Lives: ");
	mvprintw(6, xBound + 10, std::to_string(lives).c_str());
	mvprintw(8, xBound + 3, "Frame: ");
	mvprintw(8, xBound + 10, std::to_string(frames).c_str());

	mvprintw(12, xBound + 3, "Controls: ");
	mvprintw(14, xBound + 3, "-> LEFT/RIGHT");
	mvprintw(15, xBound + 7, "scroll");
	mvprintw(17, xBound + 3, "-> UP/DOWN");
	mvprintw(18, xBound + 7, "shoot");
	mvprintw(20, xBound + 3, "-> ENTER");
	mvprintw(21, xBound + 7, "quit");

	mvprintw(25, xBound + 3, "^ = YOU");
	mvprintw(26, xBound + 3, "o = MINION");
	mvprintw(27, xBound + 3, "O = COMMANDER");
	mvprintw(28, xBound + 3, "0 = BOSS");
}