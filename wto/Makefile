#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wto <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/01 00:16:44 by wto               #+#    #+#              #
#    Updated: 2018/07/01 00:16:44 by wto              ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	ft_retro
SRC			=	main.cpp UIHandler.cpp Game.Class.cpp Player.Class.cpp Enemy.Class.cpp Bullets.Class.cpp
CFLAGS		=	-Wall -Wextra -Werror -lncurses
RM			=	/bin/rm
COMPILER	=	clang++

all: $(NAME)

$(NAME):
	$(COMPILER) $(CFLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	$(RM) -f $(NAME)

re: fclean all
