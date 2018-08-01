/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero_plus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:06:44 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:06:45 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		print_zero_plus_nr(char *s)
{
	int len;
	int nr;
	int i;

	i = 0;
	nr = 0;
	len = ft_strlen(s);
	if (s[i] != '-')
	{
		nr += ft_putchar_f('+');
		g_pref--;
	}
	else
		nr += ft_putchar_f(s[i++]);
	while (g_pref > FT_MAX(len, g_suf) && (g_pref--) - FT_MAX(len, g_suf) > 0)
		nr += ft_putchar_f('0');
	while (g_suf-- > len)
		nr += ft_putchar_f('0');
	while (s[i] != '\0')
		nr += ft_putchar_f(s[i++]);
	return (nr);
}

int		ft_zero_plus(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_zero_plus_nr(ft_itoa_base(va_arg(args, int), 10)));
	else if (c == 'x')
		return (print_zero_plus_nr(ft_itoa_base_u(va_arg(args, UI), 16)));
	else if (c == 'X')
		return (print_zero_plus_nr(ft_mari(ft_itoa_base_u(
			va_arg(args, UI), 16))));
	else if (c == 'o' || c == '0')
		return (print_zero_plus_nr(ft_itoa_base_u(va_arg(args, UI), 8)));
	else if (c == 'u')
		return (print_zero_plus_nr(ft_itoa_base_u(va_arg(args, UI), 10)));
	else if (c == 'p')
		return (print_zero_plus_nr(ft_itoa_base_u(va_arg(args, LI), 10)));
	else
		return (0);
}
