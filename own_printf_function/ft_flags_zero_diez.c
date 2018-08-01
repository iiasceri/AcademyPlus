/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_zero_diez.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:13:50 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:13:52 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		flags_zero_diez_l(char c, va_list args, char f)
{
	if (f == 'L')
	{
		if (c == 'x')
			return (ft_zero_diez_print(ft_itoa_base_ulli(
				va_arg(args, ULLI), 16), c));
		else if (c == 'X')
			return (ft_zero_diez_print(ft_mari(ft_itoa_base_ulli(
				va_arg(args, ULLI), 16)), c));
		else
			return (ft_zero_diez_print(ft_itoa_base_ulli(
				va_arg(args, ULLI), 8), c));
	}
	else if (f == 'l')
	{
		if (c == 'x')
			return (ft_zero_diez_print(ft_itoa_base_lli(
				va_arg(args, LLI), 16), c));
		else if (c == 'X')
			return (ft_zero_diez_print(ft_mari(ft_itoa_base_lli(
				va_arg(args, LLI), 16)), c));
		else
			return (ft_zero_diez_print(ft_itoa_base_lli(
				va_arg(args, LLI), 8), c));
	}
	return (0);
}

int		flags_zero_diez_h(char c, va_list args, char f)
{
	if (f == 'h')
	{
		if (c == 'x')
			return (ft_zero_diez_print(ft_itoa_base((int)
			(short)va_arg(args, int), 16), c));
		else if (c == 'X')
			return (ft_zero_diez_print(ft_mari(ft_itoa_base((int)
			(short)va_arg(args, int), 16)), c));
		else
			return (ft_zero_diez_print(ft_itoa_base((int)
			(short)va_arg(args, int), 8), c));
	}
	else if (f == 'H')
	{
		if (c == 'x')
			return (ft_zero_diez_print(ft_itoa_base((int)
			(SC)va_arg(args, int), 16), c));
		else if (c == 'X')
			return (ft_zero_diez_print(ft_mari(ft_itoa_base((int)
			(SC)va_arg(args, int), 16)), c));
		else
			return (ft_zero_diez_print(ft_itoa_base((int)
			(SC)va_arg(args, int), 8), c));
	}
	return (0);
}

int		flags_zero_diez_a(char c, va_list args, char f)
{
	if (f == 'z')
	{
		if (c == 'x')
			return (ft_zero_diez_print(ft_itoa_base_s(
				(size_t)va_arg(args, ULLI), 16), c));
		else if (c == 'X')
			return (ft_zero_diez_print(ft_mari(ft_itoa_base_s(
				(size_t)va_arg(args, ULLI), 16)), c));
		else
			return (ft_zero_diez_print(ft_itoa_base_s(
				(size_t)va_arg(args, ULLI), 8), c));
	}
	else if (f == 'j')
	{
		if (c == 'x')
			return (ft_zero_diez_print(ft_itoa_base_it(
				(intmax_t)va_arg(args, ULLI), 16), c));
		else if (c == 'X')
			return (ft_zero_diez_print(ft_mari(ft_itoa_base_it(
				(intmax_t)va_arg(args, ULLI), 16)), c));
		else
			return (ft_zero_diez_print(ft_itoa_base_it(
				(intmax_t)va_arg(args, ULLI), 8), c));
	}
	return (0);
}

int		ft_flags_zero_diez(char c, va_list args, char f)
{
	int nr;

	nr = 0;
	if ((nr = flags_zero_diez_l(c, args, f)) != 0)
		return (nr);
	else if ((nr = flags_zero_diez_h(c, args, f)) != 0)
		return (nr);
	else if ((nr = flags_zero_diez_a(c, args, f)) != 0)
		return (nr);
	return (0);
}
