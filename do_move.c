/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 00:26:49 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/10 01:25:38 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_cost(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int		temp;

	tmp = *b;
	while (tmp)
	{
		tmp->pos = find_pos_in_a(*a, tmp->data);
		tmp->move = find_pos_in_b(b, tmp->data);
		tmp = tmp->next;
		//printf("pos: %d, move: %d\n", tmp->pos, tmp->move);
		//printf("pos: %d, move: %d\n", pos, move);
	}
	tmp = *b;
	while (tmp)
	{
		printf("pos: %d, move: %d\n", tmp->pos, tmp->move);
		tmp = tmp->next;
	}
}

void	move_to_a()
{

}