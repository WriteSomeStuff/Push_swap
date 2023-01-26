# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cschabra <cschabra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/13 18:15:02 by cschabra      #+#    #+#                  #
#    Updated: 2023/01/24 18:36:10 by cschabra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
CFLAGS= -Wall -Wextra -Werror -g

CFILES= ft_bzero_pf.c \
ft_calloc_pf.c \
ft_putchar_fd_pf.c \
ft_putnbr_fd_pf.c \
ft_putstr_fd_pf.c \
ft_strlen_pf.c \

OBJECTS= $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar -rcs $(NAME) $(OBJECTS)

clean:
	@rm  -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re