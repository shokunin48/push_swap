/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 21:37:48 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/02 15:50:10 by ibellash         ###   ########.fr       */
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
	while (t)
	{
		printf("%d\n", t->data);
		t = t->next;
	}
}
