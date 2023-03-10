/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multi_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 23:38:54 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/07 15:29:56 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack **stack1, t_stack **stack2)
{
	swap(stack1);
	swap(stack2);
	puts("ss");
	counter++;
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	puts("rrr");
	counter++;
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	puts("rr");
	counter++;
}

void	swap_stack(t_stack **a, t_stack **b)
{
	while ((*b))
	{
		pa(b, a);
		*b = (*b)->next;
	}
}
