/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/01 17:51:47 by cschabra      #+#    #+#                 */
/*   Updated: 2022/11/07 10:59:19 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(const char *s, ...);
int	ft_ptr(unsigned long p);
int	ft_hex(unsigned int n, char f);
int	ft_unsign(unsigned int u);

#endif
