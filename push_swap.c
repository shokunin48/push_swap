/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:05:50 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/12 17:33:15 by ibellash         ###   ########.fr       */
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

void	ft_push_node_bottom(t_stack **stack, int a)
{
	t_stack	*node;

	node = create_node(a);
	node->next = *stack;
	*stack = node;
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
		ft_push_node_bottom(&stack, j);
		i++;
	}
	return (stack);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	// if (argc < 3)
	// 	return (NULL);
	stack_b = NULL;
	stack_a = create_stack(stack_a, argv, argc);
	puts("\n");
	if (argc == 4)
		small_sort(&stack_a);
	else if (argc == 6)
		sort_five(&stack_a, &stack_b);
	else
		sort(&stack_a, &stack_b);
	puts("\na");
	ft_print_stack(stack_a);
	puts("\nb");
	ft_print_stack(stack_b);
	puts("\n");
	printf("%d\n", counter);
	return (0);
}
