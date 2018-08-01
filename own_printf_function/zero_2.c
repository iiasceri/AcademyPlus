/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zero_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:12:32 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:12:33 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		print_c(char c)
{
	int nr;

	nr = 0;
	while ((g_pref--) - 1 > 0)
		nr += ft_putchar_f(' ');
	nr += ft_putchar_f(c);
	while ((g_pref++) + 2 < 0)
		nr += ft_putchar_f(' ');
	return (nr);
}

int		print_zero_nr_test(char *s, char z, int *i)
{
	int nr;

	nr = 0;
	if (s[*i] == '-' && g_suf != 0)
	{
		nr += ft_putchar_f(s[*i]);
		*i += 1;
	}
	else if (s[0] != '-' && z == '!')
	{
		nr += ft_putchar_f(' ');
		g_pref -= 1;
	}
	return (nr);
}

int		print_zero_nr(char *s, char z)
{
	int len;
	int nr;
	int i;

	i = 0;
	nr = 0;
	len = ft_strlen(s);
	nr += print_zero_nr_test(s, z, &i);
	if (g_suf == -1 || s[0] == '-' || z == '>')
		while (g_pref > FT_MAX(len, g_suf) &&
		(g_pref--) - FT_MAX(len, g_suf) > 0)
			nr += ft_putchar_f('0');
	else
		while (g_pref > FT_MAX(len, g_suf) &&
		(g_pref--) - FT_MAX(len, g_suf) > 0)
			nr += ft_putchar_f(' ');
	while (g_suf-- > len)
		nr += ft_putchar_f('0');
	while (s[i] != '\0' && len > i)
		nr += ft_putchar_f(s[i++]);
	return (nr);
}

int		print_zero_nothing(char str)
{
	int nr;

	nr = 0;
	if (g_suf == -1)
		g_suf = 0;
	while (g_pref > 1 && (g_pref--) - 1 > 0)
		nr += ft_putchar_f('0');
	nr += ft_putchar_f(str);
	while ((g_pref++) + 1 < 0)
		nr += ft_putchar_f('0');
	return (nr);
}

int		print_zero_chr(char s)
{
	int nr;

	nr = 0;
	while (g_pref > 1 && (g_pref--) - 1 > 0)
		nr += ft_putchar_f('0');
	while (g_suf-- > 1)
		nr += ft_putchar_f('0');
	nr += ft_putchar_f(s);
	return (nr);
}
