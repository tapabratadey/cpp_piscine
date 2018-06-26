# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tadey <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/25 14:21:00 by tadey             #+#    #+#              #
#    Updated: 2018/06/25 14:21:01 by tadey            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp phonebook.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all