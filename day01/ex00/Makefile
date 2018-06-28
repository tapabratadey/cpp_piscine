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