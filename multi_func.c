/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multi_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 23:38:54 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/15 17:58:51 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack **stack1, t_stack **stack2)
{
	swap(stack1);
	swap(stack2);
	ft_printstr("ss\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_silent(stack_a);
	reverse_silent(stack_b);
	ft_printstr("rrr\n");
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate_silent(stack_a);
	rotate_silent(stack_b);
	ft_printstr("rr\n");
}
