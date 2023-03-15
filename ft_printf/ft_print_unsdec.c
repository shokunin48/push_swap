/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsdec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:24:51 by ibellash          #+#    #+#             */
/*   Updated: 2023/02/06 18:27:05 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_count(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_print_unsdec(unsigned int n)
{
	int	i;

	if (n < 0)
		i = ft_count(n) + 1;
	i = ft_count(n);
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_printchar(n + '0');
	return (i);
}
