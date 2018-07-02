# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tadey <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/01 01:09:24 by tadey             #+#    #+#              #
#    Updated: 2018/07/01 01:09:29 by tadey            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = space_invaders
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp Game.Class.cpp Player.Class.cpp Entity.Class.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all
