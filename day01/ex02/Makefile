# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tadey <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/27 20:06:46 by tadey             #+#    #+#              #
#    Updated: 2018/06/27 20:06:47 by tadey            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp Zombie.Class.cpp ZombieEvent.Class.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
