# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cschabra <cschabra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/13 18:15:02 by cschabra      #+#    #+#                  #
#    Updated: 2023/01/26 13:47:44 by cschabra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME= push_swap
CFLAGS= -Wall -Wextra -Werror #-g #-fsanitize=address

PRINTF= 42lib/printf/libftprintf.a
LIBFT= 42lib/libft/libft.a

ALL_DIRS= $(PRINTF) $(LIBFT)

CFILES= create_a.c \
inputcheck.c \
lstfunc.c \
lstfunc2.c \
main.c \
rules.c \
sorting.c

OBJECTS= $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "Building lib42..."
	@$(MAKE) -C 42lib
	@$(CC) -o $(NAME) $(CFLAGS) $(ALL_DIRS) $(CFILES)
	@echo "Done!"

clean:
	rm  -f $(OBJECTS)
	$(MAKE) -C 42lib clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C 42lib fclean

re: fclean all

.PHONY: all clean fclean re