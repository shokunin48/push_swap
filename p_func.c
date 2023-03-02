/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_func.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:39:48 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/02 20:54:34 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **src, t_stack **dest)
{
	int	tmp;

	tmp = (*src)->data;
	*src = (*src)->next;
	ft_push_node_bottom(dest, tmp);
}

void	pa(t_stack **stack_b, t_stack **stack_a)
{
	push(stack_b, stack_a);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
}
