/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rules.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/13 17:59:00 by cschabra      #+#    #+#                 */
/*   Updated: 2023/01/17 19:15:39 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_list **lst)
{
	t_list	*node1;
	t_list	*node2;

	node1 = *lst;
	node2 = (*lst)->next;
	node1->next = node2->next;
	node2->next = node1;
	node2->prev = NULL;
	node1->prev = node2;
	if (node1->next)
		node1->next->prev = node1;
	*lst = node2;
	ft_printf("sa\n");
}

void	ft_push(t_list **to, t_list **from, char c)
{
	t_list	*node;

	node = *from;
	*from = node->next;
	if (*from)
		(*from)->prev = NULL;
	ft_lstadd_front(&(*to), node);
	if (c == 'a')
		ft_printf("pa\n");
	if (c == 'b')
		ft_printf("pb\n");
}

void	ft_rotate(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	temp->next->prev = NULL;
	while ((*lst)->next)
		*lst = (*lst)->next;
	(*lst)->next = temp;
	temp->prev = *lst;
	temp->next = NULL;
	while ((*lst)->prev)
		*lst = (*lst)->prev;
	ft_printf("ra\n");
}

void	ft_reverserotate(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	while ((*lst)->next)
		*lst = (*lst)->next;
	(*lst)->next = temp;
	temp->prev = *lst;
	temp = (*lst)->prev;
	(*lst)->prev = NULL;
	temp->next = NULL;
	while ((*lst)->prev)
		*lst = (*lst)->prev;
	ft_printf("rra\n");
}
