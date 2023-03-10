/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 00:20:12 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/10 01:23:59 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_stack **stack)
{
	int	max;

	max = find_max(*stack);
	if ((*stack)->data == max)
		ra(stack);
	else if ((*stack)->next->data == max)
		rra(stack);
	if ((*stack)->data > (*stack)->next->data)
		sa(stack);
}

void	sort(t_stack **stack_a, t_stack **stack_b)
{
	int		move;
	int		pos;

	move_to_b(stack_a, stack_b);
	find_cost(stack_a, stack_b);
}
