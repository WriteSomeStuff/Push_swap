/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 19:07:09 by cschabra      #+#    #+#                 */
/*   Updated: 2022/11/28 17:51:27 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes n zeroed bytes to the string s. If n is zero, it does nothing.
 * 
 * @param s 
 * @param n 
 */
void	ft_bzero_pf(void *s, size_t n)
{
	int		i;
	char	z;

	i = 0;
	z = 0;
	while (n > 0)
	{
		*(char *)(s + i) = z;
		i++;
		n--;
	}
}
