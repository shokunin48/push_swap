/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:31:38 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/10 01:39:32 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pos_in_a(t_stack *a, int elem)
{
	int		count;
	t_stack	*tmp;

	tmp = stack_last_node(a);
	count = 1;
	if ((a->data > elem && tmp->data < elem))
		count = 1;
	else
		while (a)
		{
			if (!(a->data < elem && a->next->data > elem))
				count++;
			else
				break ;
			a = a->next;
		}
	return (count);
}

int	find_pos_in_b(t_stack **b, int elem)
{
	int		count;
	t_stack	*tmp;

	count = 0;
	tmp = *b;
	//printf("%d\n", tmp->data);
	//printf("%d\n", elem);
	while (tmp->data != elem)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}

void	move_to_b(t_stack **stack_a, t_stack **stack_b)
{
	int	min;
	int	max;
	int	mid;

	min = find_min(*stack_a);
	max = find_max(*stack_a);
	mid = find_mid(*stack_a);
	//printf("min: %d , max: %d , mid %d\n", min, max, mid);
	while (size_of_stack(*stack_a) != 3)
	{
		if ((*stack_a)->data != min
			&& (*stack_a)->data != max)
			pb(stack_b, stack_a);
		ra(stack_a);
	}
	small_sort(stack_a);
}
