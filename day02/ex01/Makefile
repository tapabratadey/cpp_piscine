# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tadey <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/28 16:03:44 by tadey             #+#    #+#              #
#    Updated: 2018/06/28 19:26:28 by tadey            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = fpv
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp Fixed.Class.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
