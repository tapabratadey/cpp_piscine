// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   UIHandler.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: wto <marvin@42.fr>                         +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/07/01 18:16:05 by wto               #+#    #+#             //
//   Updated: 2018/07/01 18:16:05 by wto              ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef UIHANDLER_H
# define UIHANDLER_H

#include <curses.h>
#include <string>

class UIHandler
{
public:
	UIHandler(void);
	~UIHandler(void);
	UIHandler(UIHandler const &other);
	UIHandler &operator=(UIHandler const &other);

	void	drawShip(int y, int x);
	void	drawBullet(int y, int x);
	void	drawCreep1(int y, int x, int xBound, int yBound);
	void	drawCreep2(int y, int x, int xBound, int yBound);
	void	drawCreep3(int y, int x, int xBound, int yBound);
	void	drawGameOver(int xBound, int yBound, int score);
	void	drawUI(int frames, int xBound, int yBound, int score, int lives);
};

#endif
