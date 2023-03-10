/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 22:13:19 by ibellash          #+#    #+#             */
/*   Updated: 2023/03/05 22:48:44 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_doubles(char **av)
{
	int		i;
	int		j;
	int		index;
	char	**result;

	i = 1;
	index = 1;
	while (av[i])
	{
		j = 1;
		while (av[j])
		{
			if (av[j] != av[i] && j != i)
			{
				result[index] = av[j];
				index++;
			}
			j++;
		}
		i++;
	}
}

int	check_if_int(char **av)
{
	int			i;
	long int	num;

	i = 1;
	while (av[i])
	{
		num = ft_atoi(av[i]);
		if (!(num > INT_MAX && num < INT_MIN))
			return (0);
		i++;
	}
	return (1);
}
