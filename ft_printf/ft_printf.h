/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibellash <ibellash@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:13:34 by ibellash          #+#    #+#             */
/*   Updated: 2023/02/06 22:14:35 by ibellash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putnbr(int n);
int	ft_printstr(const char *s);
int	ft_printchar(char c);
int	ft_putpointer(unsigned long long n);
int	ft_print_unsdec(unsigned int n);
int	ft_printhexa_up(unsigned int n);
int	ft_printhexa_low(unsigned int n);

#endif
