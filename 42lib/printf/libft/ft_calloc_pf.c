/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 15:14:33 by cschabra      #+#    #+#                 */
/*   Updated: 2022/11/28 17:56:33 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates enough space for c objects that are s bytes of memory each
 * The allocated memory is filled with bytes of value zero.
 * 
 * @param count 
 * @param size 
 * @return void* return a pointer to allocated memory.  If
 * there is an error, they return a NULL pointer and set errno to ENOMEM.
 */
void	*ft_calloc_pf(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero_pf(p, size * count);
	return (p);
}
