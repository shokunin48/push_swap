/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:37:48 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/14 20:19:32 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_before_last_node(t_stack *stack)
{
	while (stack && stack->next && stack->next->next != NULL)
		stack = stack->next;
	return (stack);
}

t_stack	*stack_last_node(t_stack *stack)
{
	while (stack->next)
		stack = stack->next;
	return (stack);
}

void	ft_print_stack(t_stack *t)
{
	while (t != NULL)
	{
		printf("%d\n", t->data);
		t = t->next;
	}
}

int	size_of_stack(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	is_sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->data < stack->next->data)
			stack = stack->next;
		else
			return (0);
	}
	return (1);
}
