/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plus.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:12:24 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:12:25 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		print_plus_nr(char *s)
{
	int len;
	int nr;
	int i;

	i = 0;
	nr = 0;
	len = ft_strlen(s);
	if (s[0] != '-')
		g_pref--;
	while (g_pref > FT_MAX(len, g_suf) && (g_pref--) - FT_MAX(len, g_suf) > 0)
		nr += ft_putchar_f(' ');
	if (s[0] != '-')
		nr += ft_putchar_f('+');
	else
		nr += ft_putchar_f(s[i++]);
	while (g_suf-- > len)
		nr += ft_putchar_f('0');
	while (s[i] != '\0')
		nr += ft_putchar_f(s[i++]);
	return (nr);
}

int		ft_plus(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_plus_nr(ft_itoa_base(va_arg(args, int), 10)));
	else if (c == 'x')
		return (print_plus_nr(ft_itoa_base_u(va_arg(args, UI), 16)));
	else if (c == 'X')
		return (print_plus_nr(ft_mari(ft_itoa_base_u(va_arg(args, UI), 16))));
	else if (c == 'o' || c == 'O')
		return (print_nr_print(ft_itoa_base_u(va_arg(args, UI), 8)));
	else if (c == 'u')
		return (print_u_print(ft_itoa_base_u(va_arg(args, UI), 10)));
	else if (c == 'p')
		return (print_p(ft_itoa_base_ulli((ULLI)va_arg(args, ULI), 16)));
	return (-1);
}
