/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus_diez.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:10:21 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:10:22 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_puts_oxp(char c)
{
	int nr;

	nr = 0;
	g_pref--;
	nr += ft_putchar_f('0');
	if (c == 'x' && g_pref--)
		nr += ft_putchar_f('x');
	else if (c == 'X' && g_pref--)
		nr += ft_putchar_f('X');
	return (nr);
}

int		ft_minus_diez_print(char *str, char c)
{
	int len;
	int nr;
	int i;
	int m;

	i = 0;
	nr = 0;
	len = ft_strlen(str);
	m = FT_MAX(len, g_suf);
	nr += ft_puts_oxp(c);
	while (g_suf-- > len)
		nr += ft_putchar_f('0');
	while (len-- > 0)
		nr += ft_putchar_f(str[i++]);
	while (g_pref > m && (g_pref--) - m > 0)
		nr += ft_putchar_f(' ');
	return (nr);
}

int		ft_minus_diez(char c, va_list args)
{
	if (c == 'x')
		return (ft_minus_diez_print(ft_itoa_base_u(va_arg(args, UI), 16), c));
	else if (c == 'X')
		return (ft_minus_diez_print(ft_mari(ft_itoa_base_u(
			va_arg(args, UI), 16)), c));
	else
		return (ft_minus_diez_print(ft_itoa_base_u(va_arg(args, UI), 8), c));
}
