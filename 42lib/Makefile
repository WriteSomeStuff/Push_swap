# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cschabra <cschabra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/13 18:15:02 by cschabra      #+#    #+#                  #
#    Updated: 2023/01/23 16:26:52 by cschabra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

all:
	@$(MAKE) -C libft bonus
	@$(MAKE) -C printf

clean:
	@$(MAKE) -C libft clean
	@$(MAKE) -C printf clean

fclean: clean
	@$(MAKE) -C libft fclean
	@$(MAKE) -C printf fclean

re: fclean all

.PHONY: all clean fclean re