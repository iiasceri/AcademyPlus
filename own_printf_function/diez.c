/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diez.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:08:44 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:08:45 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_diez_print_o(char *str)
{
	int len;
	int nr;
	int i;

	i = 0;
	nr = 0;
	len = ft_strlen(str);
	if (g_suf == 0 || g_suf == -1)
		len++;
	while (g_pref > FT_MAX(len, g_suf) && (g_pref--) - FT_MAX(len, g_suf) > 0)
		nr += ft_putchar_f(' ');
	nr += ft_putchar_f('0');
	g_suf -= 1;
	while (g_suf-- > len)
		nr += ft_putchar_f('0');
	while (len-- > 0 && str[0] != '0' && str[i] != '\0')
		nr += ft_putchar_f(str[i++]);
	return (nr);
}

int		ft_diez_print_x(char *str, char c)
{
	int len;
	int nr;
	int i;

	i = 0;
	nr = 0;
	len = ft_strlen(str);
	if (c == 'x' || c == 'X')
		g_pref -= 2;
	while (g_pref > FT_MAX(len, g_suf) && (g_pref--) - FT_MAX(len, g_suf) > 0)
		nr += ft_putchar_f(' ');
	if (c == 'x' && str[0] != '0')
		nr += ft_putstr_f("0x");
	else if (str[0] != '0')
		nr += ft_putstr_f("0X");
	while (g_suf-- > len || (g_suf == -2 && str[0] == '0'))
		nr += ft_putchar_f('0');
	while (len-- > 0 && str[0] != '0')
		nr += ft_putchar_f(str[i++]);
	return (nr);
}

int		ft_diez(char c, va_list args)
{
	if (c == 'x')
		return (ft_diez_print_x(ft_itoa_base_u(va_arg(args, UI), 16), c));
	else if (c == 'X')
		return (ft_diez_print_x(ft_mari(ft_itoa_base_u(
			va_arg(args, UI), 16)), c));
	else
		return (ft_diez_print_o(ft_itoa_base_u(va_arg(args, UI), 8)));
}
