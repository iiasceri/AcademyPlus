/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_minus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:07:12 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:07:14 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		flags_minus_ll(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_minus_nr(ft_itoa_base_ulli(va_arg(args, ULLI), 10), 'n'));
	else if (c == 'u')
		return (print_minus_nr(ft_itoa_base_ulli(va_arg(args, ULLI), 10), 'n'));
	else if (c == 'p')
		return (print_minus_nr(ft_itoa_base_ulli(va_arg(args, ULLI), 10), 'n'));
	else if (c == 'x')
		return (print_minus_nr(ft_itoa_base_ulli(va_arg(args, ULLI), 16), 'n'));
	else if (c == 'X')
		return (print_minus_nr(ft_mari(ft_itoa_base_ulli(
			va_arg(args, ULLI), 16)), 'n'));
	else if (c == 'o' || c == 'O')
		return (print_minus_nr(ft_itoa_base_ulli(va_arg(args, ULLI), 8), 'n'));
	return (0);
}

int		flags_minus_l(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_minus_nr(ft_itoa_base_lli(va_arg(args, LLI), 10), 'n'));
	else if (c == 'u')
		return (print_minus_nr(ft_itoa_base_lli(va_arg(args, LLI), 10), 'n'));
	else if (c == 'p')
		return (print_minus_nr(ft_itoa_base_lli(va_arg(args, LLI), 10), 'n'));
	else if (c == 'x')
		return (print_minus_nr(ft_itoa_base_lli(va_arg(args, LLI), 16), 'n'));
	else if (c == 'X')
		return (print_minus_nr(ft_mari(ft_itoa_base_lli(
			va_arg(args, LLI), 16)), 'n'));
	else if (c == 'o' || c == 'O')
		return (print_minus_nr(ft_itoa_base_lli(va_arg(args, LLI), 8), 'n'));
	return (0);
}

int		flags_minus_h(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_minus_nr(ft_itoa_base((int)
		(short)va_arg(args, int), 10), 'n'));
	else if (c == 'u')
		return (print_minus_nr(ft_itoa_base((int)
		(short)va_arg(args, int), 10), 'n'));
	else if (c == 'p')
		return (print_minus_nr(ft_itoa_base((int)
		(short)va_arg(args, int), 10), 'n'));
	else if (c == 'x')
		return (print_minus_nr(ft_itoa_base((int)
		(short)va_arg(args, int), 16), 'n'));
	else if (c == 'X')
		return (print_minus_nr(ft_mari(ft_itoa_base((int)
							(short)va_arg(args, int), 16)), 'n'));
	else if (c == 'o' || c == 'O')
		return (print_minus_nr(ft_itoa_base((int)
						(short)va_arg(args, int), 8), 'n'));
		return (0);
}

int		flags_minus_hh(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_minus_nr(ft_itoa_base((int)
						(signed char)va_arg(args, int), 10), 'n'));
	else if (c == 'u')
		return (print_minus_nr(ft_itoa_base((int)
						(signed char)va_arg(args, int), 10), 'n'));
	else if (c == 'p')
		return (print_minus_nr(ft_itoa_base((int)
						(signed char)va_arg(args, int), 10), 'n'));
	else if (c == 'x')
		return (print_minus_nr(ft_itoa_base((int)
						(signed char)va_arg(args, int), 16), 'n'));
	else if (c == 'X')
		return (print_minus_nr(ft_mari(ft_itoa_base((int)
						(signed char)va_arg(args, int), 16)), 'n'));
	else if (c == 'o' || c == 'O')
		return (print_minus_nr(ft_itoa_base((int)
						(signed char)va_arg(args, int), 8), 'n'));
		return (0);
}

int		ft_flags_minus(char c, va_list args, char f)
{
	if (f == 'L')
		return (flags_minus_ll(c, args));
	else if (f == 'l')
		return (flags_minus_l(c, args));
	else if (f == 'h')
		return (flags_minus_h(c, args));
	else if (f == 'H')
		return (flags_minus_hh(c, args));
	else if (f == 'z')
		return (flags_minus_z(c, args));
	else if (f == 'j')
		return (flags_minus_j(c, args));
	return (0);
}
