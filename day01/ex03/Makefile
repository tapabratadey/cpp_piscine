# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tadey <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/27 21:07:52 by tadey             #+#    #+#              #
#    Updated: 2018/06/27 21:07:53 by tadey            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = zombie
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = Zombie.Class.cpp ZombieHorde.Class.cpp main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
