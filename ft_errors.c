/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:13:19 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/14 20:18:04 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

void	check_doubles(t_stack *a)
{
	t_stack	*tmp;
	int		data;

	tmp = a;
	while (a)
	{
		data = a->data;
		tmp = a->next;
		while (tmp)
		{
			if (tmp->data == data)
			{
				ft_printstr("Error\n");
				free_stack(&a);
				exit (1);
			}
			tmp = tmp->next;
		}
		a = a->next;
	}
}
