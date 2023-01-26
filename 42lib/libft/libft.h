/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 17:19:15 by cschabra      #+#    #+#                 */
/*   Updated: 2023/01/24 18:27:17 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <ctype.h>

# include <stdlib.h>
# include <unistd.h>

long int	ft_atoi(const char *str);
int			ft_isdigit(int c);
void		ft_putendl_fd(char *s, int fd);
void		ft_putstr_fd(char *s, int fd);

#endif
