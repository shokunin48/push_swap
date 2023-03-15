/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa_low.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 15:48:34 by ibellash          #+#    #+#             */
/*   Updated: 2023/02/06 22:22:51 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa_low(unsigned int n)
{
	int		i;
	int		j;
	char	*base;
	char	newstr[100];

	i = 0;
	base = "0123456789abcdef";
	if (n == 0)
	{
		i = 1;
		ft_printchar('0');
		return (1);
	}
	while (n > 0)
	{
		newstr[i++] = base[n % 16];
		n /= 16;
	}
	newstr[i] = '\0';
	j = i;
	i--;
	while (i >= 0)
		ft_printchar(newstr[i--]);
	return (j);
}
