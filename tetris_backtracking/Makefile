CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
SRC = *.c
OBJ = *.o
NAME = fillit

all: $(NAME)

$(NAME): $(OBJ)
		@$(CC) $(OBJ) -o $(NAME)

$(OBJ):
		@$(CC) $(CFLAGS) $(SRC)
clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re: fclean all
