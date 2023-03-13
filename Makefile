# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cschabra <cschabra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/13 18:15:02 by cschabra      #+#    #+#                  #
#    Updated: 2023/03/13 12:56:40 by cschabra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME= push_swap
CFLAGS= -Wall -Wextra -Werror $(HEADERS) #-fsanitize=address

LIBFT= libft

HEADERS= -I include -I $(LIBFT)/include
LIBS= $(LIBFT)/libft.a

CFILES= create_a.c \
inputcheck.c \
lstfunc.c \
lstfunc2.c \
main.c \
rules.c \
sorting.c

all: $(NAME)

$(NAME): $(CFILES)
	@$(MAKE) -C $(LIBFT)
	@$(CC) -o $(NAME) $(CFLAGS) $(CFILES) $(LIBS)

clean:
	rm  -f $(OBJECTS)
	@$(MAKE) -C $(LIBFT) clean

fclean: clean
	rm -f $(NAME)
	@$(MAKE) -C $(LIBFT) fclean

re: fclean all

debug: CFLAGS = -g
debug: re

.PHONY: all clean fclean re debug