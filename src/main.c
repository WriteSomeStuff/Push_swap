/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cschabra <cschabra@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/21 15:55:35 by cschabra      #+#    #+#                 */
/*   Updated: 2023/01/24 18:15:01 by cschabra      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief Push_swap program, sorts stack A.
 * Can use read, write, malloc, free, exit. 
 * 
 * @param argv takes as an argument the stack a formatted as a list of integers.
 * The first argument should be at the top of the stack.
 * @return List of instructions it used to sort stack A.
 */
int	main(int argc, char **argv)
{
	const int	i = 1;

	if (argc < 2)
		return (EXIT_SUCCESS);
	if (argc == 2 && !ft_inputcheck(argv, i))
		return (EXIT_SUCCESS);
	if (ft_inputcheck(argv, i))
		return (ft_putendl_fd("Error", STDERR_FILENO), EXIT_FAILURE);
	else
		ft_stack_a(argv, i);
	return (EXIT_SUCCESS);
}
