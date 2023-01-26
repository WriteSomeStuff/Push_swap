# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cschabra <cschabra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/13 18:15:02 by cschabra      #+#    #+#                  #
#    Updated: 2023/01/24 18:27:21 by cschabra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
CFLAGS= -Wall -Wextra -Werror -g

CFILES= ft_atoi.c \
ft_isdigit.c \
ft_putendl_fd.c \
ft_putstr_fd.c \

OBJECTS= $(CFILES:.c=.o)

BONUS_OBJ= $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS)

clean:
	@rm  -f $(OBJECTS) $(BONUS_OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus: $(BONUS_OBJ) $(OBJECTS)
	@ar -rcs $(NAME) $(BONUS_OBJ) $(OBJECTS)

.PHONY: all clean fclean re bonus