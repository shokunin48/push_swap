/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   silent_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:48:59 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/14 17:59:22 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_silent(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*bottom;

	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	bottom = stack_last_node(*stack_a);
	tmp->next = NULL;
	bottom->next = tmp;
}

void	reverse_silent(t_stack **stack_a)
{
	t_stack	*bottom;
	t_stack	*bottom2;

	bottom = stack_last_node(*stack_a);
	bottom2 = stack_before_last_node(*stack_a);
	bottom->next = *stack_a;
	*stack_a = bottom;
	bottom2->next = NULL;
}
