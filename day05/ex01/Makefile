# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tadey <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/03 15:33:53 by tadey             #+#    #+#              #
#    Updated: 2018/07/03 15:33:57 by tadey            ###   ########.fr        #
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