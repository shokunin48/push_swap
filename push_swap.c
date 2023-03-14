/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:05:50 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/14 21:56:01 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_cost(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *b;
	while (tmp)
	{
		tmp->pos = find_pos_in_a(*a, tmp->data);
		tmp->move = find_pos_in_b(*b, tmp->data);
		//printf("val: %d, pos: %d, move: %d\n", tmp->data, tmp->pos, tmp->move);
		tmp = tmp->next;
	}
	tmp = *b;
}

t_stack	*create_node(int a)
{
	t_stack	*new;

	new = (t_stack *) malloc (sizeof(t_stack));
	new->data = a;
	new->next = NULL;
	return (new);
}

void	ft_push_node_bottom(t_stack **stack, int a)
{
	t_stack	*node;

	node = create_node(a);
	node->next = *stack;
	*stack = node;
}

t_stack	*create_stack(t_stack *stack, char **argv, int argc)
{
	int		i;
	long	j;

	i = argc - 1;
	check_input(argv);
	j = ft_atoi(argv[i]);
	is_integer(j);
	stack = create_node(j);
	i--;
	while (i > 0)
	{
		j = ft_atoi(argv[i]);
		is_integer(j);
		ft_push_node_bottom(&stack, j);
		i--;
	}
	return (stack);
}

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