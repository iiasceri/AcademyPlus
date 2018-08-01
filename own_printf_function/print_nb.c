/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:14:15 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:14:17 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		print_nr_print(char *str)
{
	int len;
	int nr;
	int i;

	i = 0;
	nr = 0;
	if (str[i] == '-')
		i++;
	len = ft_strlen(str + i);
	if (str[0] == '0' && g_suf != -1)
		len--;
	while (g_pref > FT_MAX(len, g_suf) && (g_pref--) - FT_MAX(len, g_suf) - i)
		nr += ft_putchar_f(' ');
	if (str[0] == '-')
		nr += ft_putchar_f('-');
	while (g_suf > 0 && g_suf-- > len)
		nr += ft_putchar_f('0');
	while (len-- > 0)
		nr += ft_putchar_f(str[i++]);
	return (nr);
}

int		print_p(char *str)
{
	int len;
	int nr;
	int i;

	i = 0;
	nr = 0;
	len = ft_strlen(str);
	g_pref -= 2;
	if (str[0] == '0' && g_pref--)
		len--;
	if (str[0] == '\0' && g_suf == -1)
		g_pref--;
	while (g_pref > FT_MAX(len, g_suf) && (g_pref--) - FT_MAX(len, g_suf) > 0)
		nr += ft_putchar_f(' ');
	if (str[0] == '0' && g_suf == -1)
		return (ft_putstr_f("0x0") + nr);
	nr += ft_putstr_f("0x");
	while (g_suf > len && (g_suf-- > len || (g_suf == -2 && str[0] == '0')))
		nr += ft_putchar_f('0');
	while (len-- > 0 && str[0] != '0')
		nr += ft_putchar_f(str[i++]);
	return (nr);
}

int		print_d_print_test(char *str, char z, int *len)
{
	int nr;
	int i;

	i = 0;
	if (str[i] == '-')
		i++;
	nr = 0;
	if (str[0] == '0' && g_suf != -1)
		*len -= 1;
	if (g_suf == -1 && z == ' ' && str[0] != '-' && ((g_pref > 0) ? g_pref-- :
		1))
		nr += ft_putchar_f(' ');
	if ((z == ' ' && g_suf == -1) || (z == 's' && g_suf != -1))
		while (g_pref > FT_MAX(*len, g_suf) && g_pref - FT_MAX(*len, g_suf) - i)
		{
			nr += ft_putchar_f('0');
			g_pref -= 1;
		}
	else
		while (g_pref > FT_MAX(*len, g_suf) && g_pref - FT_MAX(*len, g_suf) - i)
		{
			nr += ft_putchar_f(' ');
			g_pref -= 1;
		}
	return (nr);
}

int		print_d_print(char *str, char z)
{
	int len;
	int nr;
	int i;

	i = 0;
	nr = 0;
	len = 0;
	if (str[0] == '-')
		i++;
	len = ft_strlen(str + i);
	nr += print_d_print_test(str, z, &len);
	if (str[0] == '-')
		nr += ft_putchar_f('-');
	while (g_suf > 0 && g_suf-- > len)
		nr += ft_putchar_f('0');
	while (len-- > 0 && str[i] != '\0')
		nr += ft_putchar_f(str[i++]);
	while (g_pref < 0 && g_pref++ < 0)
		nr += ft_putchar_f(' ');
	return (nr);
}

int		print_u_print(char *str)
{
	int len;
	int nr;
	int i;

	i = 0;
	nr = 0;
	len = ft_strlen(str);
	if (str[0] == '0' && g_suf != -1)
		len--;
	while (g_pref > FT_MAX(len, g_suf) && (g_pref--) - FT_MAX(len, g_suf) - i)
		nr += ft_putchar_f(' ');
	while (g_suf > 0 && g_suf-- > len)
		nr += ft_putchar_f('0');
	while (str[i] != '\0' && len > 0)
		nr += ft_putchar_f(str[i++]);
	return (nr);
}
