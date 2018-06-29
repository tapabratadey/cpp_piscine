# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tadey <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/29 08:43:34 by tadey             #+#    #+#              #
#    Updated: 2018/06/29 08:48:46 by tadey            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = robot
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = FragTrap.Class.cpp main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all
