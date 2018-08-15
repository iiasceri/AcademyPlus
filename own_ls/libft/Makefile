# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/15 15:52:03 by iiasceri          #+#    #+#              #
#    Updated: 2018/06/15 15:52:04 by iiasceri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS	= -Wall -Werror -Wextra -Iincludes -c
FILES		= $(shell ls | grep -E "ft_.+\.c")
OBJ			= $(FILES:%.c=%.o)

all: $(NAME)

# This won't run if the .o files don't exist or are not modified
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

# This won't run if the source files don't exist or are not modified
$(OBJ): $(FILES)
	@gcc $(CFLAGS) $(FILES)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

# I use .PHONY to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: clean fclean all re
