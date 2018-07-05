# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tadey <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/04 13:35:47 by tadey             #+#    #+#              #
#    Updated: 2018/07/04 13:35:49 by tadey            ###   ########.fr        #
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