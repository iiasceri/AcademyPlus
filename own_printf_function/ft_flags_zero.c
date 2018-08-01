/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_zero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:12:49 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:12:50 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		flags_zero_ll(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_zero_nr(ft_itoa_base_ulli(va_arg(args, ULLI), 10), '0'));
	else if (c == 'u')
		return (print_zero_nr(ft_itoa_base_ulli(va_arg(args, ULLI), 10), '0'));
	else if (c == 'p')
		return (print_zero_nr(ft_itoa_base_ulli(va_arg(args, ULLI), 10), '0'));
	else if (c == 'x')
		return (print_zero_nr(ft_itoa_base_ulli(va_arg(args, ULLI), 16), '0'));
	else if (c == 'X')
		return (print_zero_nr(ft_mari(ft_itoa_base_ulli(
			va_arg(args, ULLI), 16)), '0'));
	else if (c == 'o' || c == 'O')
		return (print_zero_nr(ft_itoa_base_ulli(va_arg(args, ULLI), 8), '0'));
	return (0);
}

int		flags_zero_l(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_zero_nr(ft_itoa_base_lli(va_arg(args, LLI), 10), '0'));
	else if (c == 'u')
		return (print_zero_nr(ft_itoa_base_lli(va_arg(args, LLI), 10), '0'));
	else if (c == 'p')
		return (print_zero_nr(ft_itoa_base_lli(va_arg(args, LLI), 10), '0'));
	else if (c == 'x')
		return (print_zero_nr(ft_itoa_base_lli(va_arg(args, LLI), 16), '0'));
	else if (c == 'X')
		return (print_zero_nr(ft_mari(ft_itoa_base_lli(
			va_arg(args, LLI), 16)), '0'));
	else if (c == 'o' || c == 'O')
		return (print_zero_nr(ft_itoa_base_lli(va_arg(args, LLI), 8), '0'));
	return (0);
}

int		flags_zero_h(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_zero_nr(ft_itoa_base((int)
		(short)va_arg(args, int), 10), '0'));
	else if (c == 'u')
		return (print_zero_nr(ft_itoa_base((int)
		(short)va_arg(args, int), 10), '0'));
	else if (c == 'p')
		return (print_zero_nr(ft_itoa_base((int)
		(short)va_arg(args, int), 10), '0'));
	else if (c == 'x')
		return (print_zero_nr(ft_itoa_base((int)
		(short)va_arg(args, int), 16), '0'));
	else if (c == 'X')
		return (print_zero_nr(ft_mari(ft_itoa_base((int)
		(short)va_arg(args, int), 16)), '0'));
	else if (c == 'o' || c == 'O')
		return (print_zero_nr(ft_itoa_base((int)
		(short)va_arg(args, int), 8), '0'));
		return (0);
}

int		flags_zero_hh(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_zero_nr(ft_itoa_base((int)
		(SC)va_arg(args, int), 10), '0'));
	else if (c == 'u')
		return (print_zero_nr(ft_itoa_base((int)
		(SC)va_arg(args, int), 10), '0'));
	else if (c == 'p')
		return (print_zero_nr(ft_itoa_base((int)
		(SC)va_arg(args, int), 10), '0'));
	else if (c == 'x')
		return (print_zero_nr(ft_itoa_base((int)
		(SC)va_arg(args, int), 16), '0'));
	else if (c == 'X')
		return (print_zero_nr(ft_mari(ft_itoa_base((int)
		(SC)va_arg(args, int), 16)), '0'));
	else if (c == 'o' || c == 'O')
		return (print_zero_nr(ft_itoa_base((int)
		(SC)va_arg(args, int), 8), '0'));
		return (0);
}

int		ft_flags_zero(char c, va_list args, char f)
{
	if (f == 'L')
		return (flags_zero_ll(c, args));
	if (f == 'l')
		return (flags_zero_l(c, args));
	if (f == 'h')
		return (flags_zero_h(c, args));
	if (f == 'H')
		return (flags_zero_hh(c, args));
	if (f == 'z')
		return (flags_zero_z(c, args));
	if (f == 'j')
		return (flags_zero_j(c, args));
	return (0);
}
