/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:06:22 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/02 15:18:27 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct s_stack
{
	int				index;
	int				data;
	struct s_stack	*next;
}	t_stack;

t_stack	*stack_last_node(t_stack *stack);
t_stack	*stack_before_last_node(t_stack *stack);
t_stack	*ft_push_node_bottom(t_stack **stack, int a);
t_stack	*ft_push_node_top(t_stack **stack, int a);
void	ft_print_stack(t_stack *t);
void	swap(t_stack *stack);

void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack1, t_stack **stack2);
void	pa(t_stack **stack_b, t_stack **stack_a);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

#endif
