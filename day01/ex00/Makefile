# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tadey <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/28 08:28:57 by tadey             #+#    #+#              #
#    Updated: 2018/06/28 08:28:59 by tadey            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pony
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp Pony.Class.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
