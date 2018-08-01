/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_e.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:09:46 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:09:48 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		print_nr_e(char *str)
{
	int len;
	int nr;
	int i;

	i = 0;
	nr = 0;
	len = ft_strlen(str);
	while (g_pref > len && (g_pref--) - len > 0)
		nr += ft_putchar_f(' ');
	while (len-- > 0)
		nr += ft_putchar_f(str[i++]);
	return (nr);
}

char	*print_le_2(char c, int *i, int *p, char *str)
{
	if (c == 'E')
		str[(*i)++] = 'E';
	else
		str[(*i)++] = 'e';
	str[(*i)++] = '+';
	if (*p < 10)
	{
		str[(*i)++] = '0';
		str[(*i)++] = *p + '0';
	}
	else
	{
		str[(*i)++] = *p / 10 + '0';
		str[(*i)++] = *p % 10 + '0';
	}
	str[*i] = '\0';
	return (str);
}

char	*print_e_2(char c, int *i, int *p, char *str)
{
	if (c == 'E')
		str[(*i)++] = 'E';
	else
		str[(*i)++] = 'e';
	str[(*i)++] = '+';
	if (*p < 10)
	{
		str[(*i)++] = '0';
		str[(*i)++] = *p + '0';
	}
	else
	{
		str[(*i)++] = *p / 10 + '0';
		str[(*i)++] = *p % 10 + '0';
	}
	str[*i] = '\0';
	return (str);
}

int		print_le(long double nb, char c, char z)
{
	int		p;
	int		i;
	int		nr;
	char	str[8 + (g_suf == 0 ? 6 : g_suf) + 1];

	nr = 0;
	i = 0;
	p = 0;
	if (nb < 0 && (nb *= -1))
		str[i++] = '-';
	else if (z == ' ')
		nr += ft_putchar_f(' ');
	while (nb >= 10 && ++p)
		nb /= 10.0;
	str[i++] = (ULLI)nb + '0';
	if (g_suf == -1 || g_suf > 0)
		str[i++] = '.';
	if (g_suf != -1 && (g_suf = FT_MAX(g_suf, 8)))
		while (g_suf-- && (nb *= 10))
			str[i++] = (ULLI)nb % 10 + '0';
	else
		while (i < 8 && (nb *= 10))
			str[i++] = (ULLI)nb % 10 + '0';
	return (print_nr_e(print_e_2(c, &i, &p, str)));
}

int		print_e(double nb, char c, char z)
{
	int		p;
	int		i;
	int		nr;
	char	str[8 + (g_suf == 0 ? 6 : g_suf) + 1];

	nr = 0;
	i = 0;
	p = 0;
	if (nb < 0 && (nb *= -1))
		str[i++] = '-';
	else if (z == ' ')
		nr += ft_putchar_f(' ');
	while (nb >= 10 && ++p)
		nb /= 10;
	str[i++] = (ULLI)nb + '0';
	if (g_suf == -1 || g_suf > 0)
		str[i++] = '.';
	if (g_suf != -1 && (g_suf = FT_MAX(g_suf, 8)))
		while (g_suf-- && (nb *= 10))
			str[i++] = (ULLI)nb % 10 + '0';
	else
		while (i < 8 && (nb *= 10))
			str[i++] = (ULLI)nb % 10 + '0';
	return (print_nr_e(print_e_2(c, &i, &p, str)));
}
