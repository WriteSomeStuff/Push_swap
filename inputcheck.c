/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   inputcheck.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/09 13:56:27 by cschabra      #+#    #+#                 */
/*   Updated: 2023/01/24 17:48:03 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static bool	ft_dupcheck(char **argv, int i)
{
	int		j;

	while (argv[i] && argv[i + 1])
	{
		j = i + 1;
		while (argv[j])
		{
			if (j == i)
				j++;
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (true);
			j++;
		}
		i++;
	}
	return (false);
}

bool	ft_inputcheck(char **argv, int i)
{
	int	j;

	j = 0;
	if (ft_dupcheck(argv, i))
		return (true);
	while (argv[i])
	{
		if (argv[i][j] == '\0')
			return (true);
		while (argv[i][j])
		{
			if (argv[i][0] == '-' && j == 0)
				j++;
			if (ft_isdigit(argv[i][j]))
				j++;
			else
				return (true);
		}
		if (ft_atoi(argv[i]) > INT_MAX || ft_atoi(argv[i]) < INT_MIN)
			return (true);
		j = 0;
		i++;
	}
	return (false);
}
