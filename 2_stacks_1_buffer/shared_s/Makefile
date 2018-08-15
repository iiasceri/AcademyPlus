# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iiasceri <iiasceri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/22 14:55:00 by iiasceri          #+#    #+#              #
#    Updated: 2018/03/22 14:55:01 by iiasceri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re silent_clean silent_fclean silent_re

NAME = slib.a
RM = /bin/rm -rfv
RMS = /bin/rm -rf
CFILES = ft_validator.c ft_helpers_1.c ft_newlst_stks.c ft_operations_1.c
CFILES += ft_operations_2.c ft_operations_3.c ft_print_stacks.c
CFILES += ft_commands.c ft_helpers_2.c
OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): 
	@echo "$(NAME) compiling... \c"
	@gcc -Wall -Wextra -Werror -c $(CFILES)
	@ar rc $(NAME) $(OFILES)
	@ranlib $(NAME)
	@echo "$(NAME) created"
	
clean: 
	@$(RM) $(OFILES) | wc -l | tr '\n' ' ' && echo ft_*.o files deleted

fclean: clean
	@$(RM) $(NAME) | wc -l | tr '\n' ' ' && echo $(NAME) deleted

re: fclean all

silent_clean:
	@$(RMS) $(OFILES)

silent_fclean: silent_clean
	@$(RMS) $(NAME)

silent_re: silent_fclean all

