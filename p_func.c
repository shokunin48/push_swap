/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_func.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:39:48 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/14 20:05:36 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **dest, t_stack **add)
{
	int		tmp;
	t_stack	*tmp2;

	tmp = (*add)->data;
	tmp2 = *add;
	*add = (*add)->next;
	free(tmp2);
	ft_push_node_bottom(dest, tmp);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	ft_printstr("pa\n");
	//counter++;
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	push(stack_b, stack_a);
	ft_printstr("pb\n");
	//counter++;
}
