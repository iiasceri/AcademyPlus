/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:13:01 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:13:02 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		test(char *s, int *i)
{
	if (s[*i] == '#' || s[*i] == 'x' || s[*i] == 'X' ||
	s[*i] == 'o' || s[*i] == 'O' || s[*i] == 'c' ||
	s[*i] == 'C' || s[*i] == '%' || s[*i] == 'u' ||
	s[*i] == 'U' || s[*i] == 'p' || s[*i] == 's' ||
	s[*i] == '#' || s[*i] == ' ' || s[*i] == 'd' ||
	s[*i] == '.' || (s[*i] >= '0' && s[*i] <= '9') ||
	s[*i] == '-' || s[*i] == '+' || s[*i] == 'l' ||
	s[*i] == 'h' || s[*i] == 'z' || s[*i] == 'j' ||
	s[*i] == 'e' || s[*i] == 'E' || s[*i] == 'L' ||
	s[*i] == 'b' || s[*i] == '*' || s[*i] == 'n' ||
	s[*i] == 'i' || s[*i] == 'D' || s[*i] == 'f' ||
	s[*i] == 'F' || s[*i] == 'S')
		return (1);
	return (0);
}

int		ft_check(char c, char z, va_list args)
{
	if (z == '#' && (c == 'x' || c == 'X' || c == 'o' || c == 'O'))
		return (ft_diez(c, args));
	else if (z == '^')
		return (ft_zero_diez(c, args));
	else if (z == '@')
		return (ft_minus_diez(c, args));
	else if (z == ')')
		return (ft_plus_diez(c, args));
	if (z == '0' || z == '!' || z == '>')
		return (ft_zero(c, args, z));
	if (z == '-' || z == '*')
		return (ft_minus(c, args, z));
	if (z == '+' && c != 'x' && c != 'X')
		return (ft_plus(c, args));
	if (z == 'o')
		return (ft_zero_plus(c, args));
	return (-1);
}

void	ft_switch_stea_suf(int *i, char *z, va_list args)
{
	*i += 1;
	if ((g_suf = va_arg(args, int)) < 0)
		g_suf = -1;
	else
		*z = 's';
}

void	trecere(char *s, int *i, char *z, va_list args)
{
	(s[*i] == '*') ? ft_switch_stea_suf(i, z, args) : 0;
	while (s[*i] == '.' || (s[*i] >= '0' && s[*i] <= '9') || s[*i] == '0'
	|| s[*i] == '-' || s[*i] == '#' || s[*i] == ' ')
		*i += 1;
}

void	ft_switch_stea(int *i, char *z, va_list args)
{
	*i += 1;
	*z = 's';
	if ((g_pref = va_arg(args, int)) < 0)
	{
		*z = '-';
		g_pref *= -1;
	}
}
