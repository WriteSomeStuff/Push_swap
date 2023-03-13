/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_a.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/09 12:53:46 by cschabra      #+#    #+#                 */
/*   Updated: 2023/01/24 17:44:21 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sortcheck(t_list **head_a, t_list **head_b)
{
	const int	lstlen = ft_lstlen(*head_a);

	if (ft_lstsorted(*head_a))
		return ;
	ft_indexlst(*head_a, lstlen);
	if (lstlen == 2)
		ft_sort2(head_a);
	else if (lstlen == 3)
		ft_sort3(head_a);
	else if (lstlen == 4 || lstlen == 5)
		ft_sort5(head_a, head_b, lstlen);
	else
		ft_largesort(head_a, head_b, lstlen);
	while ((*head_a)->prev)
		*head_a = (*head_a)->prev;
}

bool	ft_stack_a(char **input, int i)
{
	t_list	*head_a;
	t_list	*head_b;

	head_a = NULL;
	head_b = NULL;
	while (input[i])
	{
		if (head_a == NULL)
		{
			head_a = ft_lstnew(ft_atoi(input[i++]));
			if (!head_a)
				return (true);
		}
		head_a->next = ft_lstnew(ft_atoi(input[i++]));
		if (!head_a->next)
			return (ft_freelst(head_a), true);
		ft_lstadd_back(&head_a, head_a->next);
		head_a = head_a->next;
	}
	while (head_a->prev)
		head_a = head_a->prev;
	ft_sortcheck(&head_a, &head_b);
	return (ft_freelst(head_a));
}
