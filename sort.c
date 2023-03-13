/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 00:20:12 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/13 13:25:12 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_stack **stack)
{
	int		max;
	t_stack	*last;

	last = stack_last_node(*stack);
	max = find_max(*stack);
	if ((*stack)->data == max)
	{
		if ((*stack)->next->data < last->data)
			ra(stack);
		else
		{
			ra(stack);
			sa(stack);
		}
	}
	else if ((*stack)->next->data == max)
	{
		if ((*stack)->data > last->data)
			rra(stack);
	}
	else if (last->data == max)
	{
		if ((*stack)->data > (*stack)->next->data)
			sa(stack);
	}
}

void	sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	min;
	int	max;

	min = find_min(*stack_a);
	max = find_max(*stack_a);
	while (size_of_stack(*stack_b) < 2)
	{
		if ((*stack_a)->data == max || (*stack_a)->data == min)
			pb(stack_b, stack_a);
		else
			ra(stack_a);
	}
	small_sort(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	if ((*stack_a)->data == max)
		ra(stack_a);
	else
	{
		sa(stack_a);
		ra(stack_a);
	}
}

void	sort(t_stack **a, t_stack **b)
{
	int		move;
	int		pos;

	move_to_b(a, b);
	while (*b)
	{
		find_cost(a, b);
		find_best_move(a, b);
	}
	last_move(a);
}
