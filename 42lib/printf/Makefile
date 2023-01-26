# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cschabra <cschabra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/13 18:15:02 by cschabra      #+#    #+#                  #
#    Updated: 2022/12/12 18:19:54 by cschabra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a
CFLAGS= -Wall -Wextra -Werror -g
LIBFT= libft/libft.a

CFILES= ft_printf.c \
ft_ptr.c \
ft_hex.c \
ft_unsign.c

OBJECTS= $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(MAKE) -C libft
	@cp $(LIBFT) $(NAME)
	@ar -rcs $(NAME) $(OBJECTS) $(LIBFT)

clean:
	@rm  -f $(OBJECTS)
	@$(MAKE) -C libft clean

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C libft fclean

re: fclean all

.PHONY: all clean fclean re