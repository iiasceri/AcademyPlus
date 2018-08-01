/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:09:22 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:09:23 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		print_minus_nr(char *s, char z)
{
	int len;
	int nr;
	int i;
	int m;

	i = 0;
	nr = 0;
	len = ft_strlen(s);
	m = FT_MAX(len, g_suf);
	if (s[0] != '-' && z == '*' && g_pref--)
		nr += ft_putchar_f('+');
	while (g_suf-- > len)
		nr += ft_putchar_f('0');
	if (s[0] != '-' && g_pref == 0 && g_pref--)
		nr += ft_putchar_f(' ');
	if (z == 'p' && (g_pref -= 2))
		nr += ft_putstr_f("0x");
	while (len-- > 0)
		nr += ft_putchar_f(s[i++]);
	while (g_pref > m && (g_pref--) - m > 0)
		nr += ft_putchar_f(' ');
	return (nr);
}

int		print_minus_nothing(char c)
{
	int nr;

	nr = 0;
	nr += ft_putchar_f(c);
	while (g_pref-- - 1)
		nr += ft_putchar_f(' ');
	g_suf = 0;
	return (nr);
}

int		print_minus_p(char *str)
{
	int len;
	int nr;
	int i;
	int m;

	nr = 0;
	len = ft_strlen(str);
	i = 0;
	m = FT_MAX(len, g_suf) + 1;
	if (str[0] == '0')
	{
		len--;
		g_pref--;
	}
	if (str[0] == '\0' && g_suf == -1)
		g_pref--;
	nr += ft_putstr_f("0x");
	while (g_suf-- > len || (g_suf == -2 && str[0] == '0'))
		nr += ft_putchar_f('0');
	while (len-- > 0 && str[0] != '0')
		nr += ft_putchar_f(str[i++]);
	while (g_pref > m && (g_pref--) - m > 0)
		nr += ft_putchar_f(' ');
	return (nr);
}

int		ft_minus(char c, va_list args, char z)
{
	if (c == 'c' || c == 's' || c == '%' || c == 'S')
		g_pref *= -1;
	if (c == 'd' || c == 'i')
		return (print_minus_nr(ft_itoa_base(va_arg(args, int), 10), z));
	else if (c == 'x')
		return (print_minus_nr(ft_itoa_base_u(va_arg(args, UI), 16), 'n'));
	else if (c == 'X')
		return (print_minus_nr(ft_mari(ft_itoa_base_u(
			va_arg(args, UI), 16)), 'n'));
	else if (c == 'o' || c == '0')
		return (print_minus_nr(ft_itoa_base_u(va_arg(args, UI), 8), 'n'));
	else if (c == 'u')
		return (print_minus_nr(ft_itoa_base_u(va_arg(args, UI), 10), 'n'));
	else if (c == 'p')
		return (print_minus_p(ft_itoa_base_ulli((ULLI)va_arg(args, LI), 16)));
	else if (c == 's')
		return (print_s(va_arg(args, char *)));
	else if (c == 'c')
		return (print_c(va_arg(args, int)));
	else if (c == '%')
		return (print_procent());
	else if (c == 'S')
		return (print_ss(va_arg(args, u_int32_t *)));
	return (print_minus_nothing(c));
}
