/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_diez.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:13:18 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:13:19 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_zero_diez_print(char *str, char c)
{
	int len;
	int nr;
	int i;

	i = 0;
	nr = 0;
	len = ft_strlen(str);
	g_pref--;
	nr += ft_putchar_f('0');
	if (c == 'x' && g_pref--)
		nr += ft_putchar_f('x');
	else if (c == 'X' && g_pref--)
		nr += ft_putchar_f('X');
	while (g_pref > FT_MAX(len, g_suf) && (g_pref--) - FT_MAX(len, g_suf) > 0)
		nr += ft_putchar_f('0');
	while (g_suf-- > len)
		nr += ft_putchar_f('0');
	while (len-- > 0)
		nr += ft_putchar_f(str[i++]);
	return (nr);
}

int		ft_zero_diez(char c, va_list args)
{
	if (c == 'x')
		return (ft_zero_diez_print(ft_itoa_base_u(va_arg(args, UI), 16), c));
	else if (c == 'X')
		return (ft_zero_diez_print(ft_mari(ft_itoa_base_u(
			va_arg(args, UI), 16)), c));
	else
		return (ft_zero_diez_print(ft_itoa_base_u(va_arg(args, UI), 8), c));
}
