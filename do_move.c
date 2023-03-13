/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 00:26:49 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/13 22:02:42 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rr_both(t_stack **a, t_stack **b, int *pos, int *move)
{
	while (*pos > 0 && *move > 0)
	{
		rr(a, b);
		(*pos)--;
		(*move)--;
	}
}

static void	rrr_both(t_stack **a, t_stack **b, int *pos, int *move)
{
	while (*pos < 0 && *move < 0)
	{
		rrr(a, b);
		(*pos)++;
		(*move)++;
	}
}

static void	rotate_a(t_stack **a, int *pos)
{
	while (*pos)
	{
		if (*pos > 0)
		{
			ra(a);
			(*pos)--;
		}
		else if (*pos < 0)
		{
			rra(a);
			(*pos)++;
		}
	}
}

static void	rotate_b(t_stack **b, int *move)
{
	while (*move)
	{
		if (*move < 0)
		{
			rrb(b);
			(*move)++;
		}
		else if (*move > 0)
		{
			rb(b);
			(*move)--;
		}
	}
}

void	do_move(t_stack **a, t_stack **b, int pos, int move)
{
	if (pos > 0 && move > 0)
		rr_both(a, b, &pos, &move);
	else if (pos < 0 && move < 0)
		rrr_both(a, b, &pos, &move);
	rotate_a(a, &pos);
	rotate_b(b, &move);
	pa(a, b);
}

void	last_move(t_stack **a)
{
	int		min;
	//int		count;
	int		size;
	t_stack	*tmp;

	min = find_min(*a);
	size = size_of_stack(*a);
	tmp = *a;
	while ((*a)->data != min)
	{
		rra(a);
	}
	// 	count++;
	// 	tmp = tmp->next;
	// }
	// if (count < (size / 2))
	// {
	// 	while (count > 0)
	// 	{
	// 		ra(a);
	// 		count--;
	// 	}
	// }
	// else
	// {
	// 	while ((count - size) < 0)
	// 	{
	// 		rra(a);
	// 		count++;
	// 	}
	// }
}
