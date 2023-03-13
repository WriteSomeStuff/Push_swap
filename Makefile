# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cschabra <cschabra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/13 18:15:02 by cschabra      #+#    #+#                  #
#    Updated: 2023/03/13 13:19:00 by cschabra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME= push_swap
CFLAGS= -Wall -Wextra -Werror $(HEADERS) #-fsanitize=address

LIBFT= libft

HEADERS= -I include -I $(LIBFT)/include
LIBS= $(LIBFT)/libft.a

CFILES= ./src/create_a.c \
./src/inputcheck.c \
./src/lstfunc.c \
./src/lstfunc2.c \
./src/main.c \
./src/rules.c \
./src/sorting.c

OBJECTS= $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
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