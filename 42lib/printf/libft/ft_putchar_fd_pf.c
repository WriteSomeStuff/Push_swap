/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 16:30:59 by cschabra      #+#    #+#                 */
/*   Updated: 2022/11/28 17:51:34 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the character ’c’ to the given file descriptor.
 * 
 * @param c 
 * @param fd 
 */
int	ft_putchar_fd_pf(char c, int fd)
{
	return (write(fd, &c, 1));
}
