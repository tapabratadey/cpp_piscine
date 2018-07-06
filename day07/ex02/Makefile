# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tadey <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/05 16:42:26 by tadey             #+#    #+#              #
#    Updated: 2018/07/05 16:42:28 by tadey            ###   ########.fr        #
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