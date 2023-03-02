/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:05:50 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/02 22:14:44 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_node(int a)
{
	t_stack	*new;

	new = (t_stack *) malloc (sizeof(t_stack));
	new->data = a;
	new->next = NULL;
	return (new);
}

t_stack	*ft_push_node_bottom(t_stack **stack, int a)
{
	t_stack	*node;

	node = create_node(a);
	node->next = *stack;
	*stack = node;
	return (*stack);
}

t_stack	*ft_push_node_top(t_stack **stack, int a)
{
	t_stack	*node;
	t_stack	*tmp;

	tmp = *stack;
	node = create_node(a);
	//stack_last_node(stack);
	(*stack)->next = node;
	// tmp->next = *stack;
	return (*stack);
}

t_stack	*create_stack(t_stack *stack, char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	j = ft_atoi(argv[i]);
	stack = create_node(j);
	i++;
	while (argv[i])
	{
		j = ft_atoi(argv[i]);
		stack = ft_push_node_bottom(&stack, j);
		i++;
	}
	return (stack);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_b = NULL;
	stack_a = create_stack(stack_a, argv, argc);
	ft_print_stack(stack_a);
	puts("\n");
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);
	pa(&stack_b, &stack_a);
	rr(&stack_a, &stack_b);
	sa(&stack_a);
	sb(&stack_b);
	ft_print_stack(stack_a);
	puts("\n");
	ft_print_stack(stack_b);
	return (0);
}
