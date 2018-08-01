/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_plus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iiasceri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 18:09:55 by iiasceri          #+#    #+#             */
/*   Updated: 2018/01/19 18:09:56 by iiasceri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		flags_plus_ll(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_plus_nr(ft_itoa_base_ulli(va_arg(args, ULLI), 10)));
	else if (c == 'u')
		return (print_plus_nr(ft_itoa_base_ulli(va_arg(args, ULLI), 10)));
	else if (c == 'p')
		return (print_plus_nr(ft_itoa_base_ulli(va_arg(args, ULLI), 10)));
	else if (c == 'x')
		return (print_plus_nr(ft_itoa_base_ulli(va_arg(args, ULLI), 16)));
	else if (c == 'X')
		return (print_plus_nr(ft_mari(ft_itoa_base_ulli(
			va_arg(args, ULLI), 16))));
	else if (c == 'o' || c == 'O')
		return (print_plus_nr(ft_itoa_base_ulli(va_arg(args, ULLI), 8)));
	return (0);
}

int		flags_plus_l(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_plus_nr(ft_itoa_base_lli(va_arg(args, LLI), 10)));
	else if (c == 'u')
		return (print_plus_nr(ft_itoa_base_lli(va_arg(args, LLI), 10)));
	else if (c == 'p')
		return (print_plus_nr(ft_itoa_base_lli(va_arg(args, LLI), 10)));
	else if (c == 'x')
		return (print_plus_nr(ft_itoa_base_lli(va_arg(args, LLI), 16)));
	else if (c == 'X')
		return (print_plus_nr(ft_mari(ft_itoa_base_lli(
			va_arg(args, LLI), 16))));
	else if (c == 'o' || c == 'O')
		return (print_plus_nr(ft_itoa_base_lli(va_arg(args, LLI), 8)));
	return (0);
}

int		flags_plus_h(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_plus_nr(ft_itoa_base((int)(short)va_arg(args, int), 10)));
	else if (c == 'u')
		return (print_plus_nr(ft_itoa_base((int)(short)va_arg(args, int), 10)));
	else if (c == 'p')
		return (print_plus_nr(ft_itoa_base((int)(short)va_arg(args, int), 10)));
	else if (c == 'x')
		return (print_plus_nr(ft_itoa_base((int)(short)va_arg(args, int), 16)));
	else if (c == 'X')
		return (print_plus_nr(ft_mari(ft_itoa_base((int)
		(short)va_arg(args, int), 16))));
	else if (c == 'o' || c == 'O')
		return (print_plus_nr(ft_itoa_base((int)(short)va_arg(args, int), 8)));
	return (0);
}

int		flags_plus_hh(char c, va_list args)
{
	if (c == 'd' || c == 'i')
		return (print_plus_nr(ft_itoa_base((int)(SC)va_arg(args, int), 10)));
	else if (c == 'u')
		return (print_plus_nr(ft_itoa_base((int)(SC)va_arg(args, int), 10)));
	else if (c == 'p')
		return (print_plus_nr(ft_itoa_base((int)(SC)va_arg(args, int), 10)));
	else if (c == 'x')
		return (print_plus_nr(ft_itoa_base((int)(SC)va_arg(args, int), 16)));
	else if (c == 'X')
		return (print_plus_nr(ft_mari(ft_itoa_base((int)
		(SC)va_arg(args, int), 16))));
	else if (c == 'o' || c == 'O')
		return (print_plus_nr(ft_itoa_base((int)(SC)va_arg(args, int), 8)));
	return (0);
}

int		ft_flags_plus(char c, va_list args, char f)
{
	if (f == 'L')
		return (flags_plus_ll(c, args));
	else if (f == 'l')
		return (flags_plus_l(c, args));
	else if (f == 'h')
		return (flags_plus_h(c, args));
	else if (f == 'H')
		return (flags_plus_hh(c, args));
	else if (f == 'z')
		return (flags_plus_z(c, args));
	else if (f == 'j')
		return (flags_plus_j(c, args));
	return (0);
}
