/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:29:25 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/13 21:01:24 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	is_number(char *av)
{
	int	i;

	i = 0;
	if (is_sign(av[i]) && av[i + 1] != '\0')
		i++;
	while (av[i] && ft_isdigit(av[i]))
		i++;
	if (av[i] != '\0' && !ft_isdigit(av[i]))
		return (0);
	return (1);
}

void	is_integer(long num)
{
	if (num > INT_MAX && num < INT_MIN)
	{
		ft_printstr("Error\n");
		exit (1);
	}
}

void	check_input(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (!(is_number(av[i])))
		{
			ft_printstr("Error\n");
			exit (1);
		}
		i++;
	}
}

void	check_arg_len(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (ft_strlen(av[i]) > 10)
		{
			ft_printstr("Error\n");
			exit (1);
		}
		i++;
	}
}
