/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:05:50 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/15 17:23:13 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc == 1)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	stack_a = create_stack(stack_a, argv, argc);
	check_doubles(stack_a);
	if (is_sorted(stack_a))
	{
		free_stack(&stack_a);
		exit (1);
	}
	if (argc == 3)
		two_sort(&stack_a);
	else if (argc == 4)
		small_sort(&stack_a);
	else if (argc == 6)
		sort_five(&stack_a, &stack_b);
	else
		sort(&stack_a, &stack_b);
	free_stack(&stack_a);
	return (0);
}

	// puts("\na");
	// ft_print_stack(stack_a);
	// puts("\nb");
	// ft_print_stack(stack_b);
	// puts("\n");
	// printf("%d\n", counter);