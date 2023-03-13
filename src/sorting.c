/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   smallsort.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/13 17:16:13 by cschabra      #+#    #+#                 */
/*   Updated: 2023/01/17 19:40:39 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort2(t_list **lst)
{
	if ((*lst)->content > (*lst)->next->content)
		ft_swap(lst);
}

void	ft_sort3(t_list **lst)
{
	if ((*lst)->next->content < (*lst)->next->next->content
		&& (*lst)->content > (*lst)->next->next->content)
		ft_rotate(lst);
	if ((*lst)->content > (*lst)->next->content)
		ft_sort2(lst);
	if ((*lst)->next->content > (*lst)->next->next->content)
	{
		ft_reverserotate(lst);
		if ((*lst)->content > (*lst)->next->content)
			ft_sort2(lst);
	}
}

static bool	ft_indexlocation(t_list *lst, int i, int lstlen)
{
	int	counter;

	counter = 0;
	while (counter < lstlen / 2)
	{
		if (lst->index == i)
			return (true);
		lst = lst->next;
		counter++;
	}
	return (false);
}

void	ft_sort5(t_list **head_a, t_list **head_b, int lstlen)
{
	int		i;

	i = 0;
	while (lstlen > 3)
	{
		if (ft_lstsorted(*head_a) && !*head_b)
			return ;
		else if (ft_lstsorted(*head_a) && *head_b)
			ft_push(head_a, head_b, 'a');
		else if ((*head_a)->index == 0
			|| (lstlen == 4 && (*head_a)->index == 1 && *head_b))
		{
			ft_push(head_b, head_a, 'b');
			lstlen--;
			i++;
		}
		else if (ft_indexlocation(*head_a, i, lstlen))
			ft_rotate(head_a);
		else
			ft_reverserotate(head_a);
	}
	ft_sort3(head_a);
	while ((*head_a)->index && *head_b)
		ft_push(head_a, head_b, 'a');
}

void	ft_largesort(t_list **head_a, t_list **head_b, int lstlen)
{
	int		bitcheck;
	int		moves;

	bitcheck = 0;
	moves = 0;
	while (!ft_lstsorted(*head_a))
	{
		while (moves < lstlen)
		{
			if ((((*head_a)->index >> bitcheck) & 1) == 1)
				ft_rotate(head_a);
			else
				ft_push(head_b, head_a, 'b');
			moves++;
		}
		while (*head_b)
			ft_push(head_a, head_b, 'a');
		moves = 0;
		bitcheck++;
	}
}
