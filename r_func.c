/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_func.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:32:54 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/02 15:50:47 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*bottom;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	bottom = stack_last_node(*stack_a);
	tmp->next = NULL;
	bottom->next = tmp;
}

void	rb(t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*bottom;

	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	bottom = stack_last_node(*stack_b);
	tmp->next = NULL;
	bottom->next = tmp;
}

void	rra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*bottom;
	t_stack	*bottom2;

	bottom = stack_last_node(*stack_a);
	bottom2 = stack_before_last_node(*stack_a);
	bottom->next = *stack_a;
	*stack_a = bottom;
	bottom2->next = NULL;
}

void	rrb(t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*bottom;
	t_stack	*bottom2;

	bottom = stack_last_node(*stack_b);
	bottom2 = stack_before_last_node(*stack_b);
	bottom->next = *stack_b;
	*stack_b = bottom;
	bottom2->next = NULL;
}
