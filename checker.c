/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:41:27 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/15 17:57:59 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stacks_exit(t_stack **a, t_stack **b)
{
	free_stack(a);
	free_stack(b);
	ft_printstr("Error\n");
	exit (1);
}

void	check_output(char *line, t_stack **s1, t_stack **s2)
{
	if (ft_strncmp(line, "sa\n", 3) == 0)
		swap(s1);
	else if (ft_strncmp(line, "sb\n", 3) == 0)
		swap(s2);
	else if (ft_strncmp(line, "ss\n", 3) == 0)
		double_silent_swap(s1, s2);
	else if (ft_strncmp(line, "pa\n", 3) == 0)
		push(s1, s2);
	else if (ft_strncmp(line, "pb\n", 3) == 0)
		push(s2, s1);
	else if (ft_strncmp(line, "ra\n", 3) == 0)
		rotate_silent(s1);
	else if (ft_strncmp(line, "rb\n", 3) == 0)
		rotate_silent(s2);
	else if (ft_strncmp(line, "rr\n", 3) == 0)
		double_silent_rotate(s1, s2);
	else if (ft_strncmp(line, "rra\n", 4) == 0)
		reverse_silent(s1);
	else if (ft_strncmp(line, "rrb\n", 4) == 0)
		reverse_silent(s2);
	else if (ft_strncmp(line, "rrr\n", 4) == 0)
		double_silent_reverse_rotate(s1, s2);
	else
		free_stacks_exit(s1, s2);
}

void	display_result(t_stack *a, t_stack *b)
{
	if (is_sorted(a) && b == NULL)
		ft_printstr("OK\n");
	else
		ft_printstr("KO\n");
}

int	main(int ac, char **av)
{
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*line;

	if (ac == 1)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	stack_a = create_stack(stack_a, av, ac);
	check_doubles(stack_a);
	line = get_next_line(0);
	i = 0;
	while (line)
	{
		check_output(line, &stack_a, &stack_b);
		line = get_next_line(0);
	}
	display_result(stack_a, stack_b);
	free_stack(&stack_a);
	free_stack(&stack_b);
}
