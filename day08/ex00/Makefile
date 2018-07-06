# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tadey <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/06 14:24:27 by tadey             #+#    #+#              #
#    Updated: 2018/07/06 14:24:28 by tadey            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = fuckthis
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all