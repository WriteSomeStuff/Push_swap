/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lstfunc2.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/08 16:59:40 by cschabra      #+#    #+#                 */
/*   Updated: 2023/01/18 15:01:37 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstlen(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

bool	ft_lstsorted(t_list *lst)
{
	int		highest;

	highest = INT_MIN;
	while (lst)
	{
		if (lst->content < highest)
			return (false);
		highest = lst->content;
		lst = lst->next;
	}
	return (true);
}

void	ft_indexlst(t_list *lst, int lstlen)
{
	int		newindex;
	int		lowest;

	newindex = 0;
	lowest = INT_MAX;
	while (newindex < lstlen)
	{
		while (lst)
		{
			if (lst->content < lowest && lst->index == -1)
				lowest = lst->content;
			if (!lst->next)
				break ;
			lst = lst->next;
		}
		while (lst)
		{
			if (lst->content == lowest)
				lst->index = newindex++;
			if (!lst->prev)
				break ;
			lst = lst->prev;
		}
		lowest = INT_MAX;
	}
}
