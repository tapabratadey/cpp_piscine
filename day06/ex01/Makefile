# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tadey <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/04 21:31:36 by tadey             #+#    #+#              #
#    Updated: 2018/07/04 21:31:38 by tadey            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fuckthis
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRC = *.cpp

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all