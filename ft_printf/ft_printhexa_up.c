/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa_up.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:57:17 by ibellash          #+#    #+#             */
/*   Updated: 2023/02/06 22:22:39 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa_up(unsigned int n)
{
	int		i;
	int		j;
	char	*base;
	char	newstr[64];

	i = 0;
	base = "0123456789ABCDEF";
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
