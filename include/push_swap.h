/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/21 15:56:27 by cschabra      #+#    #+#                 */
/*   Updated: 2023/03/13 12:57:40 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>
# include "libft.h"

typedef struct d_list
{
	struct d_list	*prev;
	int				content;
	int				index;
	struct d_list	*next;
}					t_list;

bool	ft_stack_a(char **input, int i);

bool	ft_inputcheck(char **argv, int i);

bool	ft_freelst(t_list *lst);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);

int		ft_lstlen(t_list *lst);
bool	ft_lstsorted(t_list *lst);
void	ft_indexlst(t_list *lst, int lstlen);

void	ft_swap(t_list **lst);
void	ft_push(t_list **to, t_list **from, char c);
void	ft_rotate(t_list **lst);
void	ft_reverserotate(t_list **lst);

void	ft_sort2(t_list **lst);
void	ft_sort3(t_list **lst);
void	ft_sort5(t_list **head_a, t_list **head_b, int lstlen);
void	ft_largesort(t_list **head_a, t_list **head_b, int lstlen);

#endif