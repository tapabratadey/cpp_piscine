# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tadey <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/25 10:57:56 by tadey             #+#    #+#              #
#    Updated: 2018/06/25 10:57:57 by tadey            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all