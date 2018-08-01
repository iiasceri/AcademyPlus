/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:06:54 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:06:55 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		print_s(char *str)
{
	int len;
	int nr;
	int i;

	i = 0;
	nr = 0;
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	if (g_suf == -1)
		g_suf = 0;
	else
		len = FT_MIN(len, g_suf);
	while (g_pref > len && (g_pref--) - len - i > 0)
		nr += ft_putchar_f(' ');
	while (len-- > 0)
		nr += ft_putchar_f(str[i++]);
	while (g_pref < 0 && (g_pref++) + i < 0)
		nr += ft_putchar_f(' ');
	return (nr);
}

int		ft_strlen_ch(u_int32_t c)
{
	if (c < 128)
		return (1);
	else if (c < 2048)
		return (2);
	else if (c < 65536)
		return (3);
	else if (c < 1114112)
		return (4);
	return (0);
}

int		ft_strlen_w(u_int32_t *str)
{
	int i;
	int index;

	i = 0;
	index = 0;
	while (str[index] != '\0')
	{
		i += ft_strlen_ch(str[index]);
		index++;
	}
	return (i);
}

int		print_ss(u_int32_t *str)
{
	int len;
	int nr;
	int i;

	i = 0;
	nr = 0;
	if (str == NULL)
		return (print_s(NULL));
	len = ft_strlen_w(str);
	if (g_suf == -1)
		g_suf = 0;
	else
		len = FT_MIN(len, g_suf);
	while (g_pref > 0 && (g_pref--) - len > 0)
		nr += ft_putchar_f(' ');
	i = nr + len;
	while (nr + ft_strlen_ch(*str) < i + 1)
		nr += ft_putwchar_f(*str++);
	while (g_pref < 0 && (g_pref++) + i < 0)
		nr += ft_putchar_f(' ');
	return (nr);
}

int		print_cc(wchar_t c)
{
	int nr;

	nr = 0;
	while ((g_pref--) - 1 > 0)
		nr += ft_putchar_f(' ');
	nr += ft_putwchar_f(c);
	while ((g_pref++) + 2 < 0)
		nr += ft_putchar_f(' ');
	return (nr);
}
