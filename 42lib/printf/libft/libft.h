/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 17:19:15 by cschabra      #+#    #+#                 */
/*   Updated: 2022/11/28 17:51:12 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void	ft_bzero_pf(void *s, size_t n);
void	*ft_calloc_pf(size_t count, size_t size);
int		ft_putchar_fd_pf(char c, int fd);
void	ft_putnbr_fd_pf(int n, int fd);
void	ft_putstr_fd_pf(char *s, int fd);
size_t	ft_strlen_pf(const char *s);

#endif
