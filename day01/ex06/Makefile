# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tadey <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/27 23:28:06 by tadey             #+#    #+#              #
#    Updated: 2018/06/27 23:28:08 by tadey            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all