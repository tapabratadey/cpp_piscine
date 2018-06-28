# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tadey <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/27 23:10:24 by tadey             #+#    #+#              #
#    Updated: 2018/06/27 23:10:25 by tadey            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = Brain.Class.cpp Human.Class.cpp main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
